#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: GetSystemCallEntry
// Address: 0x137ae0 - 0x137b14
void GetSystemCallEntry_0x137ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("GetSystemCallEntry_0x137ae0");
#endif

    ctx->pc = 0x137ae0u;

    // 0x137ae0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x137ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x137ae4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x137ae4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x137ae8: 0x8c450b18  lw          $a1, 0xB18($v0)
    ctx->pc = 0x137ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2840)));
    // 0x137aec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x137aecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x137af0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x137af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x137af4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x137af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137af8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x137af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x137afc: 0xc04de92  jal         func_137A48
    ctx->pc = 0x137AFCu;
    SET_GPR_U32(ctx, 31, 0x137B04u);
    ctx->pc = 0x137B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137AFCu;
            // 0x137b00: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137A48u;
    if (runtime->hasFunction(0x137A48u)) {
        auto targetFn = runtime->lookupFunction(0x137A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137B04u; }
        if (ctx->pc != 0x137B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Copy_0x137a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137B04u; }
        if (ctx->pc != 0x137B04u) { return; }
    }
    ctx->pc = 0x137B04u;
    // 0x137b04: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x137b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137b08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x137b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x137B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137B0Cu;
            // 0x137b10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137B14u;
}
