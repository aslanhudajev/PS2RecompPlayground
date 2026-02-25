#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage8TrueBossHitHontai
// Address: 0x1ed050 - 0x1ed180
void Stage8TrueBossHitHontai_0x1ed050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage8TrueBossHitHontai_0x1ed050");
#endif

    ctx->pc = 0x1ed050u;

    // 0x1ed050: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ed050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ed054: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ed054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ed058: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ed058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ed05c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ed05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ed060: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ed060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ed064: 0x8c920008  lw          $s2, 0x8($a0)
    ctx->pc = 0x1ed064u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ed068: 0x8cb00008  lw          $s0, 0x8($a1)
    ctx->pc = 0x1ed068u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ed06c: 0x8cb1000c  lw          $s1, 0xC($a1)
    ctx->pc = 0x1ed06cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1ed070: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1ed070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ed074: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED074u;
    {
        const bool branch_taken_0x1ed074 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x1ed074) {
            ctx->pc = 0x1ED088u;
            goto label_1ed088;
        }
    }
    ctx->pc = 0x1ED07Cu;
    // 0x1ed07c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1ed07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1ed080: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ED080u;
    {
        const bool branch_taken_0x1ed080 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ed080) {
            ctx->pc = 0x1ED098u;
            goto label_1ed098;
        }
    }
    ctx->pc = 0x1ED088u;
label_1ed088:
    // 0x1ed088: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1ed088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ed08c: 0x28630009  slti        $v1, $v1, 0x9
    ctx->pc = 0x1ed08cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1ed090: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x1ED090u;
    {
        const bool branch_taken_0x1ed090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed090) {
            ctx->pc = 0x1ED168u;
            goto label_1ed168;
        }
    }
    ctx->pc = 0x1ED098u;
label_1ed098:
    // 0x1ed098: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1ed098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1ed09c: 0x18600024  blez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1ED09Cu;
    {
        const bool branch_taken_0x1ed09c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1ed09c) {
            ctx->pc = 0x1ED130u;
            goto label_1ed130;
        }
    }
    ctx->pc = 0x1ED0A4u;
    // 0x1ed0a4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1ed0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ed0a8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1ed0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ed0ac: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1ED0ACu;
    {
        const bool branch_taken_0x1ed0ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1ED0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED0ACu;
            // 0x1ed0b0: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed0ac) {
            ctx->pc = 0x1ED0D8u;
            goto label_1ed0d8;
        }
    }
    ctx->pc = 0x1ED0B4u;
    // 0x1ed0b4: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED0B4u;
    {
        const bool branch_taken_0x1ed0b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ed0b4) {
            ctx->pc = 0x1ED0D8u;
            goto label_1ed0d8;
        }
    }
    ctx->pc = 0x1ED0BCu;
    // 0x1ed0bc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed0c0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ED0C0u;
    {
        const bool branch_taken_0x1ed0c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1ED0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED0C0u;
            // 0x1ed0c4: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed0c0) {
            ctx->pc = 0x1ED0D8u;
            goto label_1ed0d8;
        }
    }
    ctx->pc = 0x1ED0C8u;
    // 0x1ed0c8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED0C8u;
    {
        const bool branch_taken_0x1ed0c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ed0c8) {
            ctx->pc = 0x1ED0D8u;
            goto label_1ed0d8;
        }
    }
    ctx->pc = 0x1ED0D0u;
    // 0x1ed0d0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1ED0D0u;
    {
        const bool branch_taken_0x1ed0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed0d0) {
            ctx->pc = 0x1ED120u;
            goto label_1ed120;
        }
    }
    ctx->pc = 0x1ED0D8u;
label_1ed0d8:
    // 0x1ed0d8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1ed0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1ed0dc: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x1ed0dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ed0e0: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1ED0E0u;
    {
        const bool branch_taken_0x1ed0e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED0E0u;
            // 0x1ed0e4: 0x28a1001f  slti        $at, $a1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed0e0) {
            ctx->pc = 0x1ED130u;
            goto label_1ed130;
        }
    }
    ctx->pc = 0x1ED0E8u;
    // 0x1ed0e8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ED0E8u;
    {
        const bool branch_taken_0x1ed0e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed0e8) {
            ctx->pc = 0x1ED108u;
            goto label_1ed108;
        }
    }
    ctx->pc = 0x1ED0F0u;
    // 0x1ed0f0: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x1ed0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1ed0f4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1ed0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ed0f8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1ed0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ed0fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1ED0FCu;
    {
        const bool branch_taken_0x1ed0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED0FCu;
            // 0x1ed100: 0xae430008  sw          $v1, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed0fc) {
            ctx->pc = 0x1ED130u;
            goto label_1ed130;
        }
    }
    ctx->pc = 0x1ED104u;
    // 0x1ed104: 0x0  nop
    ctx->pc = 0x1ed104u;
    // NOP
label_1ed108:
    // 0x1ed108: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x1ed108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1ed10c: 0xc065138  jal         func_1944E0
    ctx->pc = 0x1ED10Cu;
    SET_GPR_U32(ctx, 31, 0x1ED114u);
    ctx->pc = 0x1ED110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED10Cu;
            // 0x1ed110: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1944E0u;
    if (runtime->hasFunction(0x1944E0u)) {
        auto targetFn = runtime->lookupFunction(0x1944E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED114u; }
        if (ctx->pc != 0x1ED114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Laser_LCADD_0x1944e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED114u; }
        if (ctx->pc != 0x1ED114u) { return; }
    }
    ctx->pc = 0x1ED114u;
    // 0x1ed114: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1ED114u;
    {
        const bool branch_taken_0x1ed114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed114) {
            ctx->pc = 0x1ED130u;
            goto label_1ed130;
        }
    }
    ctx->pc = 0x1ED11Cu;
    // 0x1ed11c: 0x0  nop
    ctx->pc = 0x1ed11cu;
    // NOP
label_1ed120:
    // 0x1ed120: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x1ed120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1ed124: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1ed124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ed128: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1ed128u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ed12c: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1ed12cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_1ed130:
    // 0x1ed130: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1ed130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ed134: 0x1c60000c  bgtz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1ED134u;
    {
        const bool branch_taken_0x1ed134 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1ed134) {
            ctx->pc = 0x1ED168u;
            goto label_1ed168;
        }
    }
    ctx->pc = 0x1ED13Cu;
    // 0x1ed13c: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1ed13cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1ed140: 0x24034e20  addiu       $v1, $zero, 0x4E20
    ctx->pc = 0x1ed140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
    // 0x1ed144: 0x8e2200a8  lw          $v0, 0xA8($s1)
    ctx->pc = 0x1ed144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x1ed148: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1ed148u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1ed14c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ed14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ed150: 0xae2200a8  sw          $v0, 0xA8($s1)
    ctx->pc = 0x1ed150u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
    // 0x1ed154: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1ed154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ed158: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1ed158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ed15c: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1ed15cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1ed160: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1ED160u;
    SET_GPR_U32(ctx, 31, 0x1ED168u);
    ctx->pc = 0x1ED164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED160u;
            // 0x1ed164: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED168u; }
        if (ctx->pc != 0x1ED168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED168u; }
        if (ctx->pc != 0x1ED168u) { return; }
    }
    ctx->pc = 0x1ED168u;
label_1ed168:
    // 0x1ed168: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ed168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed16c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ed16cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed170: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ed170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed174: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ed174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed178: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED178u;
            // 0x1ed17c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED088u: goto label_1ed088;
            case 0x1ED098u: goto label_1ed098;
            case 0x1ED0D8u: goto label_1ed0d8;
            case 0x1ED108u: goto label_1ed108;
            case 0x1ED120u: goto label_1ed120;
            case 0x1ED130u: goto label_1ed130;
            case 0x1ED168u: goto label_1ed168;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ED180u;
}
