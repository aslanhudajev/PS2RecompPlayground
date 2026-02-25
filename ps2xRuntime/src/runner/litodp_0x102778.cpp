#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: litodp
// Address: 0x102778 - 0x102830
void litodp_0x102778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("litodp_0x102778");
#endif

    ctx->pc = 0x102778u;

    // 0x102778: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x102778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10277c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10277cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x102780: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x102780u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x102784: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x102784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x102788: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x102788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10278c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10278Cu;
    {
        const bool branch_taken_0x10278c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x102790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10278Cu;
            // 0x102790: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10278c) {
            ctx->pc = 0x1027A0u;
            goto label_1027a0;
        }
    }
    ctx->pc = 0x102794u;
    // 0x102794: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x102794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x102798: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x102798u;
    {
        const bool branch_taken_0x102798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10279Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102798u;
            // 0x10279c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102798) {
            ctx->pc = 0x10281Cu;
            goto label_10281c;
        }
    }
    ctx->pc = 0x1027A0u;
label_1027a0:
    // 0x1027a0: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1027a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1027a4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1027A4u;
    {
        const bool branch_taken_0x1027a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1027A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1027A4u;
            // 0x1027a8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1027a4) {
            ctx->pc = 0x1027D0u;
            goto label_1027d0;
        }
    }
    ctx->pc = 0x1027ACu;
    // 0x1027ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1027acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1027b0: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1027B0u;
    {
        const bool branch_taken_0x1027b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1027B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1027B0u;
            // 0x1027b4: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1027b0) {
            ctx->pc = 0x1027C8u;
            goto label_1027c8;
        }
    }
    ctx->pc = 0x1027B8u;
    // 0x1027b8: 0x3402c1e0  ori         $v0, $zero, 0xC1E0
    ctx->pc = 0x1027b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)49632u)));
    // 0x1027bc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1027bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1027c0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1027C0u;
    {
        const bool branch_taken_0x1027c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1027C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1027C0u;
            // 0x1027c4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1027c0) {
            ctx->pc = 0x102828u;
            goto label_102828;
        }
    }
    ctx->pc = 0x1027C8u;
label_1027c8:
    // 0x1027c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1027C8u;
    {
        const bool branch_taken_0x1027c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1027CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1027C8u;
            // 0x1027cc: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1027c8) {
            ctx->pc = 0x1027D4u;
            goto label_1027d4;
        }
    }
    ctx->pc = 0x1027D0u;
label_1027d0:
    // 0x1027d0: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x1027d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_1027d4:
    // 0x1027d4: 0xdfa50010  ld          $a1, 0x10($sp)
    ctx->pc = 0x1027d4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1027d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1027d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1027dc: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x1027dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x1027e0: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x1027e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1027e4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1027E4u;
    {
        const bool branch_taken_0x1027e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1027E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1027E4u;
            // 0x1027e8: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1027e4) {
            ctx->pc = 0x10281Cu;
            goto label_10281c;
        }
    }
    ctx->pc = 0x1027ECu;
    // 0x1027ec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1027ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1027f0: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x1027f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x1027f4: 0x0  nop
    ctx->pc = 0x1027f4u;
    // NOP
label_1027f8:
    // 0x1027f8: 0x51878  dsll        $v1, $a1, 1
    ctx->pc = 0x1027f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 1);
    // 0x1027fc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1027fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x102800: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x102800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102804: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x102804u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x102808: 0x0  nop
    ctx->pc = 0x102808u;
    // NOP
    // 0x10280c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10280Cu;
    {
        const bool branch_taken_0x10280c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10280c) {
            ctx->pc = 0x1027F8u;
            goto label_1027f8;
        }
    }
    ctx->pc = 0x102814u;
    // 0x102814: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x102814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x102818: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x102818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_10281c:
    // 0x10281c: 0xc04074c  jal         func_101D30
    ctx->pc = 0x10281Cu;
    SET_GPR_U32(ctx, 31, 0x102824u);
    ctx->pc = 0x102820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10281Cu;
            // 0x102820: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101D30u;
    if (runtime->hasFunction(0x101D30u)) {
        auto targetFn = runtime->lookupFunction(0x101D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102824u; }
        if (ctx->pc != 0x102824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_d_0x101d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102824u; }
        if (ctx->pc != 0x102824u) { return; }
    }
    ctx->pc = 0x102824u;
    // 0x102824: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x102824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_102828:
    // 0x102828: 0x3e00008  jr          $ra
    ctx->pc = 0x102828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10282Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102828u;
            // 0x10282c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1027A0u: goto label_1027a0;
            case 0x1027C8u: goto label_1027c8;
            case 0x1027D0u: goto label_1027d0;
            case 0x1027D4u: goto label_1027d4;
            case 0x1027F8u: goto label_1027f8;
            case 0x10281Cu: goto label_10281c;
            case 0x102828u: goto label_102828;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102830u;
}
