#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: viBufDelete
// Address: 0x11ca08 - 0x11ca60
void viBufDelete_0x11ca08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("viBufDelete_0x11ca08");
#endif

    ctx->pc = 0x11ca08u;

    // 0x11ca08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11ca08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11ca0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11ca0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ca10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11ca10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11ca14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11ca18: 0xc04701c  jal         func_11C070
    ctx->pc = 0x11CA18u;
    SET_GPR_U32(ctx, 31, 0x11CA20u);
    ctx->pc = 0x11CA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA18u;
            // 0x11ca1c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C070u;
    if (runtime->hasFunction(0x11C070u)) {
        auto targetFn = runtime->lookupFunction(0x11C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CA20u; }
        if (ctx->pc != 0x11CA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR_0x11c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CA20u; }
        if (ctx->pc != 0x11CA20u) { return; }
    }
    ctx->pc = 0x11CA20u;
    // 0x11ca20: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x11ca20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x11ca24: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x11ca24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x11ca28: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x11ca28u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)46112u)));
    // 0x11ca2c: 0x3484b410  ori         $a0, $a0, 0xB410
    ctx->pc = 0x11ca2cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)46096u)));
    // 0x11ca30: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x11ca30u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x11ca34: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x11ca34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11ca38: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x11ca38u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x11ca3c: 0x3442b430  ori         $v0, $v0, 0xB430
    ctx->pc = 0x11ca3cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46128u)));
    // 0x11ca40: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x11ca40u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x11ca44: 0xc0438ac  jal         func_10E2B0
    ctx->pc = 0x11CA44u;
    SET_GPR_U32(ctx, 31, 0x11CA4Cu);
    ctx->pc = 0x11CA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA44u;
            // 0x11ca48: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2B0u;
    if (runtime->hasFunction(0x10E2B0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CA4Cu; }
        if (ctx->pc != 0x11CA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x10e2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CA4Cu; }
        if (ctx->pc != 0x11CA4Cu) { return; }
    }
    ctx->pc = 0x11CA4Cu;
    // 0x11ca4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11ca4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ca50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ca54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11ca54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ca58: 0x3e00008  jr          $ra
    ctx->pc = 0x11CA58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA58u;
            // 0x11ca5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11CA60u;
}
