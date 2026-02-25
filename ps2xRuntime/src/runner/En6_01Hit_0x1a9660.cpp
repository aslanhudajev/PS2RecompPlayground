#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En6_01Hit
// Address: 0x1a9660 - 0x1a9714
void En6_01Hit_0x1a9660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En6_01Hit_0x1a9660");
#endif

    ctx->pc = 0x1a9660u;

    // 0x1a9660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a9660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a9664: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a9664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a9668: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a9668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a966c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a966cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a9670: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1a9670u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a9674: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1a9674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1a9678: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1a9678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a967c: 0x18800020  blez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1A967Cu;
    {
        const bool branch_taken_0x1a967c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1A9680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A967Cu;
            // 0x1a9680: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a967c) {
            ctx->pc = 0x1A9700u;
            goto label_1a9700;
        }
    }
    ctx->pc = 0x1A9684u;
    // 0x1a9684: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1a9684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1a9688: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1a9688u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a968c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1a968cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1a9690: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1a9690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a9694: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A9694u;
    {
        const bool branch_taken_0x1a9694 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1a9694) {
            ctx->pc = 0x1A9700u;
            goto label_1a9700;
        }
    }
    ctx->pc = 0x1A969Cu;
    // 0x1a969c: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1a969cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1a96a0: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1a96a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1a96a4: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x1a96a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1a96a8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1a96a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a96ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a96acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a96b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a96b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a96b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a96b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a96b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a96b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a96bc: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1a96bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1a96c0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1a96c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a96c4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1a96c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a96c8: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1a96c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1a96cc: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1A96CCu;
    SET_GPR_U32(ctx, 31, 0x1A96D4u);
    ctx->pc = 0x1A96D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A96CCu;
            // 0x1a96d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A96D4u; }
        if (ctx->pc != 0x1A96D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A96D4u; }
        if (ctx->pc != 0x1A96D4u) { return; }
    }
    ctx->pc = 0x1A96D4u;
    // 0x1a96d4: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1a96d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1a96d8: 0x286300ff  slti        $v1, $v1, 0xFF
    ctx->pc = 0x1a96d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x1a96dc: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A96DCu;
    {
        const bool branch_taken_0x1a96dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a96dc) {
            ctx->pc = 0x1A9700u;
            goto label_1a9700;
        }
    }
    ctx->pc = 0x1A96E4u;
    // 0x1a96e4: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1a96e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1a96e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a96e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a96ec: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x1a96ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1a96f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a96f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a96f4: 0xc065944  jal         func_196510
    ctx->pc = 0x1A96F4u;
    SET_GPR_U32(ctx, 31, 0x1A96FCu);
    ctx->pc = 0x1A96F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A96F4u;
            // 0x1a96f8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A96FCu; }
        if (ctx->pc != 0x1A96FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A96FCu; }
        if (ctx->pc != 0x1A96FCu) { return; }
    }
    ctx->pc = 0x1A96FCu;
    // 0x1a96fc: 0x0  nop
    ctx->pc = 0x1a96fcu;
    // NOP
label_1a9700:
    // 0x1a9700: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a9700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9704: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a9704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9708: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a9708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a970c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A970Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A970Cu;
            // 0x1a9710: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9700u: goto label_1a9700;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A9714u;
}
