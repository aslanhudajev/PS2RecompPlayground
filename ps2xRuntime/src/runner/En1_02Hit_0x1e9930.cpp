#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En1_02Hit
// Address: 0x1e9930 - 0x1e99e4
void En1_02Hit_0x1e9930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En1_02Hit_0x1e9930");
#endif

    ctx->pc = 0x1e9930u;

    // 0x1e9930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e9930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e9934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e9934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e9938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e993c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e993cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e9940: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1e9940u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e9944: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1e9944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1e9948: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1e9948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e994c: 0x18800020  blez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1E994Cu;
    {
        const bool branch_taken_0x1e994c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1E9950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E994Cu;
            // 0x1e9950: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e994c) {
            ctx->pc = 0x1E99D0u;
            goto label_1e99d0;
        }
    }
    ctx->pc = 0x1E9954u;
    // 0x1e9954: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1e9954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1e9958: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1e9958u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e995c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1e995cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1e9960: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1e9960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e9964: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E9964u;
    {
        const bool branch_taken_0x1e9964 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1e9964) {
            ctx->pc = 0x1E99D0u;
            goto label_1e99d0;
        }
    }
    ctx->pc = 0x1E996Cu;
    // 0x1e996c: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1e996cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1e9970: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1e9970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1e9974: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1e9974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e9978: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1e9978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e997c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1e997cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e9980: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1e9980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e9984: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e9984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e9988: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e9988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e998c: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1e998cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1e9990: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1e9990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e9994: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1e9994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e9998: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1e9998u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1e999c: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1E999Cu;
    SET_GPR_U32(ctx, 31, 0x1E99A4u);
    ctx->pc = 0x1E99A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E999Cu;
            // 0x1e99a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E99A4u; }
        if (ctx->pc != 0x1E99A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E99A4u; }
        if (ctx->pc != 0x1E99A4u) { return; }
    }
    ctx->pc = 0x1E99A4u;
    // 0x1e99a4: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1e99a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1e99a8: 0x286300ff  slti        $v1, $v1, 0xFF
    ctx->pc = 0x1e99a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x1e99ac: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E99ACu;
    {
        const bool branch_taken_0x1e99ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e99ac) {
            ctx->pc = 0x1E99D0u;
            goto label_1e99d0;
        }
    }
    ctx->pc = 0x1E99B4u;
    // 0x1e99b4: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1e99b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1e99b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e99b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e99bc: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x1e99bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1e99c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e99c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e99c4: 0xc065944  jal         func_196510
    ctx->pc = 0x1E99C4u;
    SET_GPR_U32(ctx, 31, 0x1E99CCu);
    ctx->pc = 0x1E99C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E99C4u;
            // 0x1e99c8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E99CCu; }
        if (ctx->pc != 0x1E99CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E99CCu; }
        if (ctx->pc != 0x1E99CCu) { return; }
    }
    ctx->pc = 0x1E99CCu;
    // 0x1e99cc: 0x0  nop
    ctx->pc = 0x1e99ccu;
    // NOP
label_1e99d0:
    // 0x1e99d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e99d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e99d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e99d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e99d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e99d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e99dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E99DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E99E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E99DCu;
            // 0x1e99e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E99D0u: goto label_1e99d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E99E4u;
}
