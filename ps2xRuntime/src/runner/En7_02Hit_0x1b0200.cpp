#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En7_02Hit
// Address: 0x1b0200 - 0x1b02b4
void En7_02Hit_0x1b0200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En7_02Hit_0x1b0200");
#endif

    ctx->pc = 0x1b0200u;

    // 0x1b0200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b0200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b0204: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b0204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b0208: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b0208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b020c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b020cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b0210: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1b0210u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b0214: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1b0214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1b0218: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1b0218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b021c: 0x18800020  blez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1B021Cu;
    {
        const bool branch_taken_0x1b021c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1B0220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B021Cu;
            // 0x1b0220: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b021c) {
            ctx->pc = 0x1B02A0u;
            goto label_1b02a0;
        }
    }
    ctx->pc = 0x1B0224u;
    // 0x1b0224: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1b0224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1b0228: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1b0228u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b022c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1b022cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1b0230: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1b0230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b0234: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B0234u;
    {
        const bool branch_taken_0x1b0234 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1b0234) {
            ctx->pc = 0x1B02A0u;
            goto label_1b02a0;
        }
    }
    ctx->pc = 0x1B023Cu;
    // 0x1b023c: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1b023cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b0240: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1b0240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1b0244: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1b0244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1b0248: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x1b0248u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b024c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1b024cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b0250: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1b0250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1b0254: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1b0254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1b0258: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b0258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b025c: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1b025cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1b0260: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1b0260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b0264: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1b0264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b0268: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1b0268u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b026c: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1B026Cu;
    SET_GPR_U32(ctx, 31, 0x1B0274u);
    ctx->pc = 0x1B0270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B026Cu;
            // 0x1b0270: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0274u; }
        if (ctx->pc != 0x1B0274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0274u; }
        if (ctx->pc != 0x1B0274u) { return; }
    }
    ctx->pc = 0x1B0274u;
    // 0x1b0274: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1b0274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b0278: 0x286300ff  slti        $v1, $v1, 0xFF
    ctx->pc = 0x1b0278u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x1b027c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B027Cu;
    {
        const bool branch_taken_0x1b027c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b027c) {
            ctx->pc = 0x1B02A0u;
            goto label_1b02a0;
        }
    }
    ctx->pc = 0x1B0284u;
    // 0x1b0284: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1b0284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1b0288: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b0288u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b028c: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x1b028cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1b0290: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0294: 0xc065944  jal         func_196510
    ctx->pc = 0x1B0294u;
    SET_GPR_U32(ctx, 31, 0x1B029Cu);
    ctx->pc = 0x1B0298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0294u;
            // 0x1b0298: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B029Cu; }
        if (ctx->pc != 0x1B029Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B029Cu; }
        if (ctx->pc != 0x1B029Cu) { return; }
    }
    ctx->pc = 0x1B029Cu;
    // 0x1b029c: 0x0  nop
    ctx->pc = 0x1b029cu;
    // NOP
label_1b02a0:
    // 0x1b02a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b02a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b02a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b02a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b02a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b02a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b02ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1B02ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B02B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B02ACu;
            // 0x1b02b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B02A0u: goto label_1b02a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B02B4u;
}
