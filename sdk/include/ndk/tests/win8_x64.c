/* Version definitions */
#undef NTDDI_VERSION
#define NTDDI_VERSION NTDDI_WIN8
#undef _WIN32_WINNT
#define _WIN32_WINNT _WIN32_WINNT_WIN8

#include <ntifs.h>
#include <ndk/ntndk.h>

#define C_ASSERT_FIELD(Type, Offset, MemberType, MemberName) \
    C_ASSERT(FIELD_OFFSET(Type, MemberName) == Offset); \
    C_ASSERT(FIELD_SIZE(Type, MemberName) == sizeof(MemberType));

/* KTHREAD */
C_ASSERT_FIELD(KTHREAD, 0x000, DISPATCHER_HEADER, Header)
C_ASSERT_FIELD(KTHREAD, 0x018, PVOID, SListFaultAddress)
C_ASSERT_FIELD(KTHREAD, 0x020, ULONG64, QuantumTarget)
C_ASSERT_FIELD(KTHREAD, 0x028, PVOID, InitialStack)
C_ASSERT_FIELD(KTHREAD, 0x030, PVOID, StackLimit)
C_ASSERT_FIELD(KTHREAD, 0x038, PVOID, StackBase)
C_ASSERT_FIELD(KTHREAD, 0x040, ULONG64, ThreadLock)
C_ASSERT_FIELD(KTHREAD, 0x048, ULONG64, CycleTime)
C_ASSERT_FIELD(KTHREAD, 0x050, ULONG, CurrentRunTime)
C_ASSERT_FIELD(KTHREAD, 0x054, ULONG, ExpectedRunTime)
C_ASSERT_FIELD(KTHREAD, 0x058, PVOID, KernelStack)
C_ASSERT_FIELD(KTHREAD, 0x060, PXSAVE_FORMAT, StateSaveArea)
C_ASSERT_FIELD(KTHREAD, 0x068, struct _KSCHEDULING_GROUP*, SchedulingGroup)
C_ASSERT_FIELD(KTHREAD, 0x070, KWAIT_STATUS_REGISTER, WaitRegister)
C_ASSERT_FIELD(KTHREAD, 0x071, BOOLEAN, Running)
C_ASSERT_FIELD(KTHREAD, 0x072, UINT8[2], Alerted)
C_ASSERT_FIELD(KTHREAD, 0x074, LONG, MiscFlags)
C_ASSERT_FIELD(KTHREAD, 0x078, LONG, ThreadFlags)
C_ASSERT_FIELD(KTHREAD, 0x07C, ULONG, Spare0)
C_ASSERT_FIELD(KTHREAD, 0x080, ULONG, SystemCallNumber)
C_ASSERT_FIELD(KTHREAD, 0x084, ULONG, Spare1)
C_ASSERT_FIELD(KTHREAD, 0x088, PVOID, FirstArgument)
C_ASSERT_FIELD(KTHREAD, 0x090, PKTRAP_FRAME, TrapFrame)
C_ASSERT_FIELD(KTHREAD, 0x098, KAPC_STATE, ApcState)
C_ASSERT_FIELD(KTHREAD, 0x0C3, CHAR, Priority)
C_ASSERT_FIELD(KTHREAD, 0x0C4, ULONG, UserIdealProcessor)
C_ASSERT_FIELD(KTHREAD, 0x0C8, LONG64, WaitStatus)
C_ASSERT_FIELD(KTHREAD, 0x0D0, PKWAIT_BLOCK, WaitBlockList)
C_ASSERT_FIELD(KTHREAD, 0x0D8, LIST_ENTRY, WaitListEntry)
C_ASSERT_FIELD(KTHREAD, 0x0D8, SINGLE_LIST_ENTRY, SwapListEntry)
C_ASSERT_FIELD(KTHREAD, 0x0E8, PKQUEUE, Queue)
C_ASSERT_FIELD(KTHREAD, 0x0F0, PVOID, Teb)
C_ASSERT_FIELD(KTHREAD, 0x0F8, ULONG64, RelativeTimerBias)
C_ASSERT_FIELD(KTHREAD, 0x100, KTIMER, Timer)
C_ASSERT_FIELD(KTHREAD, 0x140, KWAIT_BLOCK[4], WaitBlock)
C_ASSERT_FIELD(KTHREAD, 0x154, ULONG, ContextSwitches)
C_ASSERT_FIELD(KTHREAD, 0x184, UCHAR, State)
C_ASSERT_FIELD(KTHREAD, 0x185, CHAR, NpxState)
C_ASSERT_FIELD(KTHREAD, 0x186, UCHAR, WaitIrql)
C_ASSERT_FIELD(KTHREAD, 0x187, CHAR, WaitMode)
C_ASSERT_FIELD(KTHREAD, 0x1B4, ULONG, WaitTime)
C_ASSERT_FIELD(KTHREAD, 0x1E4, SHORT, KernelApcDisable)
C_ASSERT_FIELD(KTHREAD, 0x1E6, SHORT, SpecialApcDisable)
C_ASSERT_FIELD(KTHREAD, 0x1E4, ULONG, CombinedApcDisable)
C_ASSERT_FIELD(KTHREAD, 0x168, KTHREAD_COUNTERS*, ThreadCounters)
C_ASSERT_FIELD(KTHREAD, 0x198, PXSTATE_SAVE, XStateSave)
C_ASSERT_FIELD(KTHREAD, 0x1C8, PVOID, Win32Thread)
C_ASSERT_FIELD(KTHREAD, 0x1F0, struct _UMS_CONTROL_BLOCK*, Ucb)
C_ASSERT_FIELD(KTHREAD, 0x1F8, struct _KUMS_CONTEXT_HEADER*, Uch)
C_ASSERT_FIELD(KTHREAD, 0x200, PVOID, TebMappedLowVa)
C_ASSERT_FIELD(KTHREAD, 0x208, LIST_ENTRY, QueueListEntry)
C_ASSERT_FIELD(KTHREAD, 0x218, ULONG, NextProcessor)
C_ASSERT_FIELD(KTHREAD, 0x21C, ULONG, DeferredProcessor)
C_ASSERT_FIELD(KTHREAD, 0x220, PKPROCESS, Process)
C_ASSERT_FIELD(KTHREAD, 0x228, GROUP_AFFINITY, UserAffinity)
C_ASSERT_FIELD(KTHREAD, 0x232, CHAR, PreviousMode)
C_ASSERT_FIELD(KTHREAD, 0x233, CHAR, BasePriority)
C_ASSERT_FIELD(KTHREAD, 0x234, CHAR, PriorityDecrement)
C_ASSERT_FIELD(KTHREAD, 0x235, UCHAR, Preempted)
C_ASSERT_FIELD(KTHREAD, 0x236, UCHAR, AdjustReason)
C_ASSERT_FIELD(KTHREAD, 0x237, CHAR, AdjustIncrement)
C_ASSERT_FIELD(KTHREAD, 0x238, GROUP_AFFINITY, Affinity)
C_ASSERT_FIELD(KTHREAD, 0x242, UCHAR, ApcStateIndex)
C_ASSERT_FIELD(KTHREAD, 0x243, UCHAR, WaitBlockCount)
C_ASSERT_FIELD(KTHREAD, 0x244, ULONG, IdealProcessor)
C_ASSERT_FIELD(KTHREAD, 0x248, KAPC_STATE*[2], ApcStatePointer)
C_ASSERT_FIELD(KTHREAD, 0x258, KAPC_STATE, SavedApcState)
C_ASSERT_FIELD(KTHREAD, 0x283, UCHAR, WaitReason)
C_ASSERT_FIELD(KTHREAD, 0x284, CHAR, SuspendCount)
C_ASSERT_FIELD(KTHREAD, 0x285, CHAR, Saturation)
C_ASSERT_FIELD(KTHREAD, 0x286, USHORT, SListFaultCount)
C_ASSERT_FIELD(KTHREAD, 0x288, KAPC, SchedulerApc)
C_ASSERT_FIELD(KTHREAD, 0x289, UCHAR, ResourceIndex)
C_ASSERT_FIELD(KTHREAD, 0x28B, UCHAR, QuantumReset)
C_ASSERT_FIELD(KTHREAD, 0x28C, ULONG, KernelTime)
C_ASSERT_FIELD(KTHREAD, 0x2C8, PKPRCB, WaitPrcb)
C_ASSERT_FIELD(KTHREAD, 0x2D0, PVOID, LegoData)
C_ASSERT_FIELD(KTHREAD, 0x2DB, UCHAR, CallbackNestingLevel)
C_ASSERT_FIELD(KTHREAD, 0x2DC, ULONG, UserTime)
C_ASSERT_FIELD(KTHREAD, 0x2E0, KEVENT, SuspendEvent)
C_ASSERT_FIELD(KTHREAD, 0x2F8, LIST_ENTRY, ThreadListEntry)
C_ASSERT_FIELD(KTHREAD, 0x308, LIST_ENTRY, MutantListHead)
C_ASSERT_FIELD(KTHREAD, 0x318, LONG64, ReadOperationCount)
C_ASSERT_FIELD(KTHREAD, 0x320, LONG64, WriteOperationCount)
C_ASSERT_FIELD(KTHREAD, 0x328, LONG64, OtherOperationCount)
C_ASSERT_FIELD(KTHREAD, 0x330, LONG64, ReadTransferCount)
C_ASSERT_FIELD(KTHREAD, 0x338, LONG64, WriteTransferCount)
C_ASSERT_FIELD(KTHREAD, 0x340, LONG64, OtherTransferCount)
