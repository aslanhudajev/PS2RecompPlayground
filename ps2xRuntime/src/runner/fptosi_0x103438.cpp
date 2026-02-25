#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: fptosi
// Address: 0x103438 - 0x1034c4
void fptosi_0x103438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("fptosi_0x103438");
#endif

    ctx->pc = 0x103438u;

    // 0x103438: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x103438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10343c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10343cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x103440: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x103440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x103444: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x103444u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x103448: 0xc040ace  jal         func_102B38
    ctx->pc = 0x103448u;
    SET_GPR_U32(ctx, 31, 0x103450u);
    ctx->pc = 0x10344Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103448u;
            // 0x10344c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102B38u;
    if (runtime->hasFunction(0x102B38u)) {
        auto targetFn = runtime->lookupFunction(0x102B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103450u; }
        if (ctx->pc != 0x103450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x102b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103450u; }
        if (ctx->pc != 0x103450u) { return; }
    }
    ctx->pc = 0x103450u;
    // 0x103450: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x103450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103454: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x103454u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2u)));
    // 0x103458: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x103458u;
    {
        const bool branch_taken_0x103458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10345Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103458u;
            // 0x10345c: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x103458) {
            ctx->pc = 0x103468u;
            goto label_103468;
        }
    }
    ctx->pc = 0x103460u;
    // 0x103460: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x103460u;
    {
        const bool branch_taken_0x103460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103460u;
            // 0x103464: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103460) {
            ctx->pc = 0x103470u;
            goto label_103470;
        }
    }
    ctx->pc = 0x103468u;
label_103468:
    // 0x103468: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x103468u;
    {
        const bool branch_taken_0x103468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10346Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103468u;
            // 0x10346c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103468) {
            ctx->pc = 0x1034B8u;
            goto label_1034b8;
        }
    }
    ctx->pc = 0x103470u;
label_103470:
    // 0x103470: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103470u;
    {
        const bool branch_taken_0x103470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103470u;
            // 0x103474: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103470) {
            ctx->pc = 0x103488u;
            goto label_103488;
        }
    }
    ctx->pc = 0x103478u;
    // 0x103478: 0x480fffb  bltz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x103478u;
    {
        const bool branch_taken_0x103478 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x10347Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103478u;
            // 0x10347c: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x103478) {
            ctx->pc = 0x103468u;
            goto label_103468;
        }
    }
    ctx->pc = 0x103480u;
    // 0x103480: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x103480u;
    {
        const bool branch_taken_0x103480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103480u;
            // 0x103484: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103480) {
            ctx->pc = 0x1034A0u;
            goto label_1034a0;
        }
    }
    ctx->pc = 0x103488u;
label_103488:
    // 0x103488: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x103488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10348c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x10348cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x103490: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x103490u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x103494: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x103494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x103498: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x103498u;
    {
        const bool branch_taken_0x103498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10349Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103498u;
            // 0x10349c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103498) {
            ctx->pc = 0x1034B8u;
            goto label_1034b8;
        }
    }
    ctx->pc = 0x1034A0u;
label_1034a0:
    // 0x1034a0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1034a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1034a4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1034a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1034a8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1034a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1034ac: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x1034acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1034b0: 0x22023  negu        $a0, $v0
    ctx->pc = 0x1034b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1034b4: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x1034b4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_1034b8:
    // 0x1034b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1034b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1034bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1034BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1034C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1034BCu;
            // 0x1034c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x103468u: goto label_103468;
            case 0x103470u: goto label_103470;
            case 0x103488u: goto label_103488;
            case 0x1034A0u: goto label_1034a0;
            case 0x1034B8u: goto label_1034b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1034C4u;
}
