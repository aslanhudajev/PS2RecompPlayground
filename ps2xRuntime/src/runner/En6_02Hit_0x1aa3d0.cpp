#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En6_02Hit
// Address: 0x1aa3d0 - 0x1aa484
void En6_02Hit_0x1aa3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En6_02Hit_0x1aa3d0");
#endif

    ctx->pc = 0x1aa3d0u;

    // 0x1aa3d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aa3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aa3d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aa3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1aa3d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1aa3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aa3dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1aa3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aa3e0: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1aa3e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1aa3e4: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1aa3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1aa3e8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1aa3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1aa3ec: 0x18800020  blez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1AA3ECu;
    {
        const bool branch_taken_0x1aa3ec = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1AA3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA3ECu;
            // 0x1aa3f0: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa3ec) {
            ctx->pc = 0x1AA470u;
            goto label_1aa470;
        }
    }
    ctx->pc = 0x1AA3F4u;
    // 0x1aa3f4: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1aa3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1aa3f8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1aa3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1aa3fc: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1aa3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1aa400: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1aa400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1aa404: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1AA404u;
    {
        const bool branch_taken_0x1aa404 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1aa404) {
            ctx->pc = 0x1AA470u;
            goto label_1aa470;
        }
    }
    ctx->pc = 0x1AA40Cu;
    // 0x1aa40c: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1aa40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1aa410: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1aa410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1aa414: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x1aa414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1aa418: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1aa418u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1aa41c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1aa41cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aa420: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1aa420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1aa424: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1aa424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aa428: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aa428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aa42c: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1aa42cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1aa430: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1aa430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1aa434: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1aa434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1aa438: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1aa438u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1aa43c: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1AA43Cu;
    SET_GPR_U32(ctx, 31, 0x1AA444u);
    ctx->pc = 0x1AA440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA43Cu;
            // 0x1aa440: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA444u; }
        if (ctx->pc != 0x1AA444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA444u; }
        if (ctx->pc != 0x1AA444u) { return; }
    }
    ctx->pc = 0x1AA444u;
    // 0x1aa444: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1aa444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1aa448: 0x286300ff  slti        $v1, $v1, 0xFF
    ctx->pc = 0x1aa448u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x1aa44c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AA44Cu;
    {
        const bool branch_taken_0x1aa44c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa44c) {
            ctx->pc = 0x1AA470u;
            goto label_1aa470;
        }
    }
    ctx->pc = 0x1AA454u;
    // 0x1aa454: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1aa454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1aa458: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1aa458u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aa45c: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x1aa45cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1aa460: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1aa460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa464: 0xc065944  jal         func_196510
    ctx->pc = 0x1AA464u;
    SET_GPR_U32(ctx, 31, 0x1AA46Cu);
    ctx->pc = 0x1AA468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA464u;
            // 0x1aa468: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA46Cu; }
        if (ctx->pc != 0x1AA46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA46Cu; }
        if (ctx->pc != 0x1AA46Cu) { return; }
    }
    ctx->pc = 0x1AA46Cu;
    // 0x1aa46c: 0x0  nop
    ctx->pc = 0x1aa46cu;
    // NOP
label_1aa470:
    // 0x1aa470: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aa470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa474: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aa474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa478: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aa478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa47c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA47Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA47Cu;
            // 0x1aa480: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA470u: goto label_1aa470;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AA484u;
}
