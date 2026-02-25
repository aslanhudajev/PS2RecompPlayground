#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En4_01Hit
// Address: 0x1a42e0 - 0x1a4394
void En4_01Hit_0x1a42e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En4_01Hit_0x1a42e0");
#endif

    ctx->pc = 0x1a42e0u;

    // 0x1a42e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a42e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a42e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a42e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a42e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a42e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a42ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a42ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a42f0: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1a42f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a42f4: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1a42f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1a42f8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1a42f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a42fc: 0x18800020  blez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1A42FCu;
    {
        const bool branch_taken_0x1a42fc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1A4300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A42FCu;
            // 0x1a4300: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a42fc) {
            ctx->pc = 0x1A4380u;
            goto label_1a4380;
        }
    }
    ctx->pc = 0x1A4304u;
    // 0x1a4304: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1a4304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1a4308: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1a4308u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a430c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1a430cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1a4310: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1a4310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a4314: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A4314u;
    {
        const bool branch_taken_0x1a4314 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1a4314) {
            ctx->pc = 0x1A4380u;
            goto label_1a4380;
        }
    }
    ctx->pc = 0x1A431Cu;
    // 0x1a431c: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1a431cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1a4320: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1a4320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1a4324: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x1a4324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1a4328: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1a4328u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a432c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a432cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a4330: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a4330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a4334: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a4334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a4338: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a4338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a433c: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1a433cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1a4340: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1a4340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a4344: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1a4344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a4348: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1a4348u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1a434c: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1A434Cu;
    SET_GPR_U32(ctx, 31, 0x1A4354u);
    ctx->pc = 0x1A4350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A434Cu;
            // 0x1a4350: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4354u; }
        if (ctx->pc != 0x1A4354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4354u; }
        if (ctx->pc != 0x1A4354u) { return; }
    }
    ctx->pc = 0x1A4354u;
    // 0x1a4354: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1a4354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1a4358: 0x286300ff  slti        $v1, $v1, 0xFF
    ctx->pc = 0x1a4358u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x1a435c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A435Cu;
    {
        const bool branch_taken_0x1a435c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a435c) {
            ctx->pc = 0x1A4380u;
            goto label_1a4380;
        }
    }
    ctx->pc = 0x1A4364u;
    // 0x1a4364: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1a4364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1a4368: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a4368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a436c: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x1a436cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1a4370: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a4370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4374: 0xc065944  jal         func_196510
    ctx->pc = 0x1A4374u;
    SET_GPR_U32(ctx, 31, 0x1A437Cu);
    ctx->pc = 0x1A4378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4374u;
            // 0x1a4378: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A437Cu; }
        if (ctx->pc != 0x1A437Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A437Cu; }
        if (ctx->pc != 0x1A437Cu) { return; }
    }
    ctx->pc = 0x1A437Cu;
    // 0x1a437c: 0x0  nop
    ctx->pc = 0x1a437cu;
    // NOP
label_1a4380:
    // 0x1a4380: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a4380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4384: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a4384u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4388: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a4388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a438c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A438Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A438Cu;
            // 0x1a4390: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A4380u: goto label_1a4380;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A4394u;
}
