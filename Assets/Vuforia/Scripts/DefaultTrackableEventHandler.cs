/*==============================================================================
Copyright (c) 2017 PTC Inc. All Rights Reserved.

Copyright (c) 2010-2014 Qualcomm Connected Experiences, Inc.
All Rights Reserved.
Confidential and Proprietary - Protected under copyright and other laws.
==============================================================================*/

using UnityEngine;
using Vuforia;
using UnityEngine.Events;
using System;

/// <summary>
///     A custom handler that implements the ITrackableEventHandler interface.
///     Modified by Lim Jia Wei, Foo Jing Ting
/// </summary>
public class DefaultTrackableEventHandler : MonoBehaviour, ITrackableEventHandler
{
    #region PRIVATE_MEMBER_VARIABLES

    protected TrackableBehaviour mTrackableBehaviour;

    public EventHandler<EventArgs> whenTrackingBegun;
    public EventHandler<EventArgs> whenTrackingFound;
    public EventHandler<EventArgs> whenTrackingLost;

    public UnityEvent onTrackingBegin;
    public UnityEvent onTrackingFound;
    public UnityEvent onTrackingLost;

    //[SerializeField]
    //[Tooltip("Child object of this Image Target (for certain interactions)")]
    //private GameObject childObject;

    protected bool isTracking = false;

    #endregion // PRIVATE_MEMBER_VARIABLES

    #region UNTIY_MONOBEHAVIOUR_METHODS

    protected virtual void Awake()
    {
        mTrackableBehaviour = GetComponent<TrackableBehaviour>();
        if (mTrackableBehaviour)
            mTrackableBehaviour.RegisterTrackableEventHandler(this);
    }

    #endregion // UNTIY_MONOBEHAVIOUR_METHODS

    #region PUBLIC_METHODS

    /// <summary>
    ///     Function to be called whenever tracking is to begin
    /// </summary>
    public virtual void OnTrackingBegin()
    {
        // re-enable Vuforia tracking
        SetVuforiaTracking(true);
        isTracking = true;

        // Disable rendering components
        SetRendering(false);

        // Invoke Function Callbacks
        onTrackingBegin.Invoke();

        if (whenTrackingBegun != null)
        {
            whenTrackingBegun.Invoke(this, EventArgs.Empty);
        }

        Debug.Log("Vuforia Tracking: BEGIN");

        //// reset to original condition if Vuforia has been detected before
        //if (childObject.transform.parent == null)   // child object has been detached from parent before
        //{
        //    //childObject.transform.SetParent(transform);
        //    //childObject.gameObject.SetActive(false);
        //
        //    // Disable rendering components
        //    SetRendering(false);
        //}
    }

    /// <summary>
    ///     Function to be called whenever this image target is tracked or already found
    /// </summary>
    public virtual void OnTrackingFound()
    {
        // Enable rendering components
        SetRendering(true);

        /// Custom behaviour
        //childObject.transform.SetParent(null);  // detach from this object
        //this.gameObject.SetActive(false);
        SetVuforiaTracking(false);  // disable VuforiaBehaviour
        isTracking = false;

        // Invoke Function Callbacks
        onTrackingFound.Invoke();

        if (whenTrackingFound != null)
        {
            whenTrackingFound.Invoke(this, EventArgs.Empty);
        }

        Debug.Log("Vuforia Tracking: FOUND");
    }


    /// <summary>
    ///     Whether already in Vuforia tracking mode
    /// </summary>
    /// <returns> In tracking mode or not </returns>
    public bool IsInTracking()
    {
        return isTracking;
    }

    /// <summary>
    ///     Implementation of the ITrackableEventHandler function called when the
    ///     tracking state changes.
    /// </summary>
    public void OnTrackableStateChanged(
        TrackableBehaviour.Status previousStatus,
        TrackableBehaviour.Status newStatus)
    {
        if (newStatus == TrackableBehaviour.Status.DETECTED ||
            newStatus == TrackableBehaviour.Status.TRACKED ||
            newStatus == TrackableBehaviour.Status.EXTENDED_TRACKED)
        {
            Debug.Log("Trackable " + mTrackableBehaviour.TrackableName + " found");
            OnTrackingFound();
        }
        else if (previousStatus == TrackableBehaviour.Status.TRACKED &&
                 newStatus == TrackableBehaviour.Status.NOT_FOUND)
        {
            Debug.Log("Trackable " + mTrackableBehaviour.TrackableName + " lost");
            OnTrackingLost();
        }
        else
        {
            // For combo of previousStatus=UNKNOWN + newStatus=UNKNOWN|NOT_FOUND
            // Vuforia is starting, but tracking has not been lost or found yet
            // Call OnTrackingLost() to hide the augmentations
            OnTrackingLost();
        }
    }

    #endregion // PUBLIC_METHODS

    #region PRIVATE_METHODS
    protected virtual void OnTrackingLost()
    {
        // Disable rendering components
        //SetRendering(false);

        /// Custom behaviour
        isTracking = false;

        Debug.Log("Vuforia Tracking: LOST");

        // Invoke Function Callbacks
        onTrackingLost.Invoke();

        //if (whenTrackingLost != null)
        //{
        //    whenTrackingLost.Invoke(this, EventArgs.Empty);
        //}
    }

    /// <summary>
    ///     Function to enable or disable VuforiaBehaviour
    /// </summary>
    /// <param name="enable"></param>
    protected void SetVuforiaTracking(bool enable)
    {
        VuforiaBehaviour.Instance.enabled = enable;
    }

    /// <summary>
    ///     Enable or disable rendering components
    /// </summary>
    /// <param name="enable"></param>
    protected void SetRendering(bool enable)
    {
        var rendererComponents = GetComponentsInChildren<Renderer>(true);
        var colliderComponents = GetComponentsInChildren<Collider>(true);
        var canvasComponents = GetComponentsInChildren<Canvas>(true);


        // Set rendering:
        foreach (var component in rendererComponents)
            component.enabled = enable;

        // Set colliders:
        /*foreach (var component in colliderComponents)
            component.enabled = enable;*/

        // Set canvas':
        foreach (var component in canvasComponents)
            component.enabled = enable;
    }

    #endregion // PRIVATE_METHODS
}
