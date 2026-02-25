#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Enex2_05Hit
// Address: 0x1ceb90 - 0x1cec44
void Enex2_05Hit_0x1ceb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Enex2_05Hit_0x1ceb90");
#endif

    ctx->pc = 0x1ceb90u;

    // 0x1ceb90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ceb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ceb94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ceb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ceb98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ceb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ceb9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ceb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ceba0: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1ceba0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ceba4: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1ceba4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1ceba8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1ceba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cebac: 0x18800020  blez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1CEBACu;
    {
        const bool branch_taken_0x1cebac = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1CEBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEBACu;
            // 0x1cebb0: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cebac) {
            ctx->pc = 0x1CEC30u;
            goto label_1cec30;
        }
    }
    ctx->pc = 0x1CEBB4u;
    // 0x1cebb4: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1cebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1cebb8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1cebb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cebbc: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1cebbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1cebc0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1cebc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cebc4: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1CEBC4u;
    {
        const bool branch_taken_0x1cebc4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1cebc4) {
            ctx->pc = 0x1CEC30u;
            goto label_1cec30;
        }
    }
    ctx->pc = 0x1CEBCCu;
    // 0x1cebcc: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1cebccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1cebd0: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1cebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1cebd4: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1cebd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1cebd8: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x1cebd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cebdc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cebe0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1cebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1cebe4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cebe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cebec: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1cebecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1cebf0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1cebf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cebf4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1cebf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cebf8: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1cebf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1cebfc: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1CEBFCu;
    SET_GPR_U32(ctx, 31, 0x1CEC04u);
    ctx->pc = 0x1CEC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEBFCu;
            // 0x1cec00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC04u; }
        if (ctx->pc != 0x1CEC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC04u; }
        if (ctx->pc != 0x1CEC04u) { return; }
    }
    ctx->pc = 0x1CEC04u;
    // 0x1cec04: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1cec04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1cec08: 0x286300ff  slti        $v1, $v1, 0xFF
    ctx->pc = 0x1cec08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x1cec0c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CEC0Cu;
    {
        const bool branch_taken_0x1cec0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cec0c) {
            ctx->pc = 0x1CEC30u;
            goto label_1cec30;
        }
    }
    ctx->pc = 0x1CEC14u;
    // 0x1cec14: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1cec14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1cec18: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cec18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cec1c: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x1cec1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1cec20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cec20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cec24: 0xc065944  jal         func_196510
    ctx->pc = 0x1CEC24u;
    SET_GPR_U32(ctx, 31, 0x1CEC2Cu);
    ctx->pc = 0x1CEC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEC24u;
            // 0x1cec28: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC2Cu; }
        if (ctx->pc != 0x1CEC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC2Cu; }
        if (ctx->pc != 0x1CEC2Cu) { return; }
    }
    ctx->pc = 0x1CEC2Cu;
    // 0x1cec2c: 0x0  nop
    ctx->pc = 0x1cec2cu;
    // NOP
label_1cec30:
    // 0x1cec30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cec30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cec34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cec34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cec38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cec38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cec3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEC3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEC3Cu;
            // 0x1cec40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CEC30u: goto label_1cec30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CEC44u;
}
