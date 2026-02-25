#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: sitofp
// Address: 0x103380 - 0x103438
void sitofp_0x103380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sitofp_0x103380");
#endif

    ctx->pc = 0x103380u;

    // 0x103380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x103380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x103384: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x103384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x103388: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x103388u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x10338c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10338cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x103390: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x103390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x103394: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x103394u;
    {
        const bool branch_taken_0x103394 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x103398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103394u;
            // 0x103398: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103394) {
            ctx->pc = 0x1033A8u;
            goto label_1033a8;
        }
    }
    ctx->pc = 0x10339Cu;
    // 0x10339c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10339cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1033a0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1033A0u;
    {
        const bool branch_taken_0x1033a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1033A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1033A0u;
            // 0x1033a4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1033a0) {
            ctx->pc = 0x103424u;
            goto label_103424;
        }
    }
    ctx->pc = 0x1033A8u;
label_1033a8:
    // 0x1033a8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1033a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1033ac: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1033ACu;
    {
        const bool branch_taken_0x1033ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1033B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1033ACu;
            // 0x1033b0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1033ac) {
            ctx->pc = 0x1033D8u;
            goto label_1033d8;
        }
    }
    ctx->pc = 0x1033B4u;
    // 0x1033b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1033b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1033b8: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1033B8u;
    {
        const bool branch_taken_0x1033b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1033BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1033B8u;
            // 0x1033bc: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1033b8) {
            ctx->pc = 0x1033D0u;
            goto label_1033d0;
        }
    }
    ctx->pc = 0x1033C0u;
    // 0x1033c0: 0x3c01cf00  lui         $at, 0xCF00
    ctx->pc = 0x1033c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52992 << 16));
    // 0x1033c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1033c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1033c8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1033C8u;
    {
        const bool branch_taken_0x1033c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1033CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1033C8u;
            // 0x1033cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1033c8) {
            ctx->pc = 0x103430u;
            goto label_103430;
        }
    }
    ctx->pc = 0x1033D0u;
label_1033d0:
    // 0x1033d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1033D0u;
    {
        const bool branch_taken_0x1033d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1033D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1033D0u;
            // 0x1033d4: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1033d0) {
            ctx->pc = 0x1033DCu;
            goto label_1033dc;
        }
    }
    ctx->pc = 0x1033D8u;
label_1033d8:
    // 0x1033d8: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x1033d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
label_1033dc:
    // 0x1033dc: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x1033dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1033e0: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x1033e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x1033e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1033e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x1033e8: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x1033e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1033ec: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1033ECu;
    {
        const bool branch_taken_0x1033ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1033F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1033ECu;
            // 0x1033f0: 0x3c053fff  lui         $a1, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1033ec) {
            ctx->pc = 0x103424u;
            goto label_103424;
        }
    }
    ctx->pc = 0x1033F4u;
    // 0x1033f4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1033f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1033f8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1033f8u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65535u)));
    // 0x1033fc: 0x0  nop
    ctx->pc = 0x1033fcu;
    // NOP
label_103400:
    // 0x103400: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x103400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x103404: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x103404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x103408: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x103408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10340c: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x10340cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x103410: 0x0  nop
    ctx->pc = 0x103410u;
    // NOP
    // 0x103414: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x103414u;
    {
        const bool branch_taken_0x103414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103414) {
            ctx->pc = 0x103400u;
            goto label_103400;
        }
    }
    ctx->pc = 0x10341Cu;
    // 0x10341c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x10341cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x103420: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x103420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_103424:
    // 0x103424: 0xc040a8a  jal         func_102A28
    ctx->pc = 0x103424u;
    SET_GPR_U32(ctx, 31, 0x10342Cu);
    ctx->pc = 0x103428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103424u;
            // 0x103428: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102A28u;
    if (runtime->hasFunction(0x102A28u)) {
        auto targetFn = runtime->lookupFunction(0x102A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10342Cu; }
        if (ctx->pc != 0x10342Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_f_0x102a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10342Cu; }
        if (ctx->pc != 0x10342Cu) { return; }
    }
    ctx->pc = 0x10342Cu;
    // 0x10342c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10342cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_103430:
    // 0x103430: 0x3e00008  jr          $ra
    ctx->pc = 0x103430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103430u;
            // 0x103434: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1033A8u: goto label_1033a8;
            case 0x1033D0u: goto label_1033d0;
            case 0x1033D8u: goto label_1033d8;
            case 0x1033DCu: goto label_1033dc;
            case 0x103400u: goto label_103400;
            case 0x103424u: goto label_103424;
            case 0x103430u: goto label_103430;
            default: break;
        }
        return;
    }
    ctx->pc = 0x103438u;
}
