#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: dptofp
// Address: 0x1294b0 - 0x129504
void dptofp_0x1294b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1294b0u;

    // 0x1294b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1294b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1294b4: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x1294b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x1294b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1294b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1294bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1294bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1294c0: 0xc04a250  jal         func_128940
    ctx->pc = 0x1294C0u;
    SET_GPR_U32(ctx, 31, 0x1294C8u);
    ctx->pc = 0x1294C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1294C0u;
            // 0x1294c4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128940u;
    if (runtime->hasFunction(0x128940u)) {
        auto targetFn = runtime->lookupFunction(0x128940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1294C8u; }
        if (ctx->pc != 0x1294C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x128940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1294C8u; }
        if (ctx->pc != 0x1294C8u) { return; }
    }
    ctx->pc = 0x1294C8u;
    // 0x1294c8: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x1294c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1294cc: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x1294ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
    // 0x1294d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1294d0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x1294d4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1294d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1294d8: 0x240b8  dsll        $t0, $v0, 2
    ctx->pc = 0x1294d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << 2);
    // 0x1294dc: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x1294dcu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x1294e0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1294e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1294e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1294e4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1294e8: 0x35070001  ori         $a3, $t0, 0x1
    ctx->pc = 0x1294e8u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)1u)));
    // 0x1294ec: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1294ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1294f0: 0xc04a81e  jal         func_12A078
    ctx->pc = 0x1294F0u;
    SET_GPR_U32(ctx, 31, 0x1294F8u);
    ctx->pc = 0x1294F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1294F0u;
            // 0x1294f4: 0x102380a  movz        $a3, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A078u;
    if (runtime->hasFunction(0x12A078u)) {
        auto targetFn = runtime->lookupFunction(0x12A078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1294F8u; }
        if (ctx->pc != 0x1294F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___make_fp_0x12a078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1294F8u; }
        if (ctx->pc != 0x1294F8u) { return; }
    }
    ctx->pc = 0x1294F8u;
    // 0x1294f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1294f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1294fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1294FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1294FCu;
            // 0x129500: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x129504u;
}
