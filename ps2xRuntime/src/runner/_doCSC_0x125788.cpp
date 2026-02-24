#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _doCSC
// Address: 0x125788 - 0x125870
void _doCSC_0x125788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_doCSC_0x125788");
#endif

    ctx->pc = 0x125788u;

    // 0x125788: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12578c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12578cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x125790: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x125790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x125794: 0x53980  sll         $a3, $a1, 6
    ctx->pc = 0x125794u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x125798: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x125798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12579c: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x12579cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8208u)));
label_1257a0:
    // 0x1257a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1257a0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x1257a4: 0x0  nop
    ctx->pc = 0x1257a4u;
    // NOP
    // 0x1257a8: 0x0  nop
    ctx->pc = 0x1257a8u;
    // NOP
    // 0x1257ac: 0x0  nop
    ctx->pc = 0x1257acu;
    // NOP
    // 0x1257b0: 0x0  nop
    ctx->pc = 0x1257b0u;
    // NOP
    // 0x1257b4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1257B4u;
    {
        const bool branch_taken_0x1257b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1257b4) {
            ctx->pc = 0x1257A0u;
            goto label_1257a0;
        }
    }
    ctx->pc = 0x1257BCu;
    // 0x1257bc: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1257bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1257c0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1257c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1257c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1257c4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x1257c8: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x1257c8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)45072u)));
    // 0x1257cc: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1257ccu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x1257d0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1257d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1257d4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1257d4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x1257d8: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x1257d8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)45088u)));
    // 0x1257dc: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1257dcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7)); // MMIO: 0x10000000
    // 0x1257e0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1257e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1257e4: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x1257e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)45056u)));
    // 0x1257e8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1257e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1257ec: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1257ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1257f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1257f0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x1257f4: 0xc048e78  jal         func_1239E0
    ctx->pc = 0x1257F4u;
    SET_GPR_U32(ctx, 31, 0x1257FCu);
    ctx->pc = 0x1257F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1257F4u;
            // 0x1257f8: 0xa42025  or          $a0, $a1, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1239E0u;
    if (runtime->hasFunction(0x1239E0u)) {
        auto targetFn = runtime->lookupFunction(0x1239E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1257FCu; }
        if (ctx->pc != 0x1257FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x1239e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1257FCu; }
        if (ctx->pc != 0x1257FCu) { return; }
    }
    ctx->pc = 0x1257FCu;
    // 0x1257fc: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x1257fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x125800: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x125800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x125804: 0x8c4417bc  lw          $a0, 0x17BC($v0)
    ctx->pc = 0x125804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6076)));
    // 0x125808: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x125808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12580c: 0xc047de0  jal         func_11F780
    ctx->pc = 0x12580Cu;
    SET_GPR_U32(ctx, 31, 0x125814u);
    ctx->pc = 0x125810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12580Cu;
            // 0x125810: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F780u;
    if (runtime->hasFunction(0x11F780u)) {
        auto targetFn = runtime->lookupFunction(0x11F780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125814u; }
        if (ctx->pc != 0x125814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x11f780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125814u; }
        if (ctx->pc != 0x125814u) { return; }
    }
    ctx->pc = 0x125814u;
    // 0x125814: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x125814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x125818: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x125818u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)45056u)));
    // 0x12581c: 0x0  nop
    ctx->pc = 0x12581cu;
    // NOP
label_125820:
    // 0x125820: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x125820u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x125824: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x125824u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x125828: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x125828u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x12582c: 0x0  nop
    ctx->pc = 0x12582cu;
    // NOP
    // 0x125830: 0x0  nop
    ctx->pc = 0x125830u;
    // NOP
    // 0x125834: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x125834u;
    {
        const bool branch_taken_0x125834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125834) {
            ctx->pc = 0x125820u;
            goto label_125820;
        }
    }
    ctx->pc = 0x12583Cu;
    // 0x12583c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12583cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x125840: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x125840u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8208u)));
    // 0x125844: 0x0  nop
    ctx->pc = 0x125844u;
    // NOP
label_125848:
    // 0x125848: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x125848u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x12584c: 0x0  nop
    ctx->pc = 0x12584cu;
    // NOP
    // 0x125850: 0x0  nop
    ctx->pc = 0x125850u;
    // NOP
    // 0x125854: 0x0  nop
    ctx->pc = 0x125854u;
    // NOP
    // 0x125858: 0x0  nop
    ctx->pc = 0x125858u;
    // NOP
    // 0x12585c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12585Cu;
    {
        const bool branch_taken_0x12585c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x12585c) {
            ctx->pc = 0x125848u;
            goto label_125848;
        }
    }
    ctx->pc = 0x125864u;
    // 0x125864: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x125864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125868: 0x3e00008  jr          $ra
    ctx->pc = 0x125868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12586Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125868u;
            // 0x12586c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1257A0u: goto label_1257a0;
            case 0x125820u: goto label_125820;
            case 0x125848u: goto label_125848;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125870u;
}
