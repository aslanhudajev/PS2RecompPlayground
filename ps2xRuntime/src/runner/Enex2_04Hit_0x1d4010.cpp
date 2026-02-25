#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Enex2_04Hit
// Address: 0x1d4010 - 0x1d40c4
void Enex2_04Hit_0x1d4010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Enex2_04Hit_0x1d4010");
#endif

    ctx->pc = 0x1d4010u;

    // 0x1d4010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d4010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d4014: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d4014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d4018: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d4018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d401c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d401cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d4020: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1d4020u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d4024: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1d4024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1d4028: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1d4028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d402c: 0x18800020  blez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1D402Cu;
    {
        const bool branch_taken_0x1d402c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1D4030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D402Cu;
            // 0x1d4030: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d402c) {
            ctx->pc = 0x1D40B0u;
            goto label_1d40b0;
        }
    }
    ctx->pc = 0x1D4034u;
    // 0x1d4034: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1d4034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1d4038: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1d4038u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d403c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1d403cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1d4040: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1d4040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d4044: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D4044u;
    {
        const bool branch_taken_0x1d4044 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1d4044) {
            ctx->pc = 0x1D40B0u;
            goto label_1d40b0;
        }
    }
    ctx->pc = 0x1D404Cu;
    // 0x1d404c: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1d404cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1d4050: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1d4050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1d4054: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x1d4054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1d4058: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1d4058u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d405c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d405cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d4060: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d4060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d4064: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d4064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d4068: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d4068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d406c: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1d406cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1d4070: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1d4070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d4074: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1d4074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d4078: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1d4078u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1d407c: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1D407Cu;
    SET_GPR_U32(ctx, 31, 0x1D4084u);
    ctx->pc = 0x1D4080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D407Cu;
            // 0x1d4080: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4084u; }
        if (ctx->pc != 0x1D4084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4084u; }
        if (ctx->pc != 0x1D4084u) { return; }
    }
    ctx->pc = 0x1D4084u;
    // 0x1d4084: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1d4084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1d4088: 0x286300ff  slti        $v1, $v1, 0xFF
    ctx->pc = 0x1d4088u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x1d408c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D408Cu;
    {
        const bool branch_taken_0x1d408c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d408c) {
            ctx->pc = 0x1D40B0u;
            goto label_1d40b0;
        }
    }
    ctx->pc = 0x1D4094u;
    // 0x1d4094: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1d4094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1d4098: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d4098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d409c: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x1d409cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d40a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d40a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d40a4: 0xc065944  jal         func_196510
    ctx->pc = 0x1D40A4u;
    SET_GPR_U32(ctx, 31, 0x1D40ACu);
    ctx->pc = 0x1D40A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D40A4u;
            // 0x1d40a8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D40ACu; }
        if (ctx->pc != 0x1D40ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D40ACu; }
        if (ctx->pc != 0x1D40ACu) { return; }
    }
    ctx->pc = 0x1D40ACu;
    // 0x1d40ac: 0x0  nop
    ctx->pc = 0x1d40acu;
    // NOP
label_1d40b0:
    // 0x1d40b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d40b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d40b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d40b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d40b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d40b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d40bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D40BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D40C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D40BCu;
            // 0x1d40c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D40B0u: goto label_1d40b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D40C4u;
}
