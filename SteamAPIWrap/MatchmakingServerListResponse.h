#ifndef MatchmakingServerListResponse_h_interop_
#define MatchmakingServerListResponse_h_interop_

ManagedSteam_API_Lite uptr MatchmakingServerListResponse_CreateObject();

ManagedSteam_API_Lite void MatchmakingServerListResponse_DestroyObject(uptr obj);

ManagedSteam_API_Lite void MatchmakingServerListResponse_RegisterCallbacks(MatchmakingServerListResponse_ServerRespondedCallback serverResponded, MatchmakingServerListResponse_ServerFailedToRespond serverFailedToRespond, MatchmakingServerListResponse_RefreshComplete refreshComplete);

ManagedSteam_API_Lite void MatchmakingServerListResponse_RemoveCallbacks();

#endif // MatchmakingServerListResponse_h_interop_