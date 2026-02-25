#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: fptodp
// Address: 0x1035c8 - 0x103608
void fptodp_0x1035c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("fptodp_0x1035c8");
#endif

    ctx->pc = 0x1035c8u;

    // 0x1035c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1035c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1035cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1035ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1035d0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1035d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1035d4: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x1035d4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1035d8: 0xc040ace  jal         func_102B38
    ctx->pc = 0x1035D8u;
    SET_GPR_U32(ctx, 31, 0x1035E0u);
    ctx->pc = 0x1035DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1035D8u;
            // 0x1035dc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102B38u;
    if (runtime->hasFunction(0x102B38u)) {
        auto targetFn = runtime->lookupFunction(0x102B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1035E0u; }
        if (ctx->pc != 0x1035E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x102b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1035E0u; }
        if (ctx->pc != 0x1035E0u) { return; }
    }
    ctx->pc = 0x1035E0u;
    // 0x1035e0: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x1035e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1035e4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1035e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1035e8: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1035e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1035ec: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1035ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1035f0: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1035f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1035f4: 0xc040a68  jal         func_1029A0
    ctx->pc = 0x1035F4u;
    SET_GPR_U32(ctx, 31, 0x1035FCu);
    ctx->pc = 0x1035F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1035F4u;
            // 0x1035f8: 0x738ba  dsrl        $a3, $a3, 2 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 2);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029A0u;
    if (runtime->hasFunction(0x1029A0u)) {
        auto targetFn = runtime->lookupFunction(0x1029A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1035FCu; }
        if (ctx->pc != 0x1035FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___make_dp_0x1029a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1035FCu; }
        if (ctx->pc != 0x1035FCu) { return; }
    }
    ctx->pc = 0x1035FCu;
    // 0x1035fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1035fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103600: 0x3e00008  jr          $ra
    ctx->pc = 0x103600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103600u;
            // 0x103604: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x103608u;
}
