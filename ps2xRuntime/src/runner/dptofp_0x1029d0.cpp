#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: dptofp
// Address: 0x1029d0 - 0x102a24
void dptofp_0x1029d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("dptofp_0x1029d0");
#endif

    ctx->pc = 0x1029d0u;

    // 0x1029d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1029d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1029d4: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x1029d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x1029d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1029d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1029dc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1029dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1029e0: 0xc040798  jal         func_101E60
    ctx->pc = 0x1029E0u;
    SET_GPR_U32(ctx, 31, 0x1029E8u);
    ctx->pc = 0x1029E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1029E0u;
            // 0x1029e4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101E60u;
    if (runtime->hasFunction(0x101E60u)) {
        auto targetFn = runtime->lookupFunction(0x101E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1029E8u; }
        if (ctx->pc != 0x1029E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x101e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1029E8u; }
        if (ctx->pc != 0x1029E8u) { return; }
    }
    ctx->pc = 0x1029E8u;
    // 0x1029e8: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x1029e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1029ec: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x1029ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
    // 0x1029f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1029f0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x1029f4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1029f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1029f8: 0x240b8  dsll        $t0, $v0, 2
    ctx->pc = 0x1029f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << 2);
    // 0x1029fc: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x1029fcu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x102a00: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x102a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x102a04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x102a04u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x102a08: 0x35070001  ori         $a3, $t0, 0x1
    ctx->pc = 0x102a08u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)1u)));
    // 0x102a0c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x102a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x102a10: 0xc040d66  jal         func_103598
    ctx->pc = 0x102A10u;
    SET_GPR_U32(ctx, 31, 0x102A18u);
    ctx->pc = 0x102A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102A10u;
            // 0x102a14: 0x102380a  movz        $a3, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103598u;
    if (runtime->hasFunction(0x103598u)) {
        auto targetFn = runtime->lookupFunction(0x103598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102A18u; }
        if (ctx->pc != 0x102A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___make_fp_0x103598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102A18u; }
        if (ctx->pc != 0x102A18u) { return; }
    }
    ctx->pc = 0x102A18u;
    // 0x102a18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x102a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x102A1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102A1Cu;
            // 0x102a20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x102A24u;
}
