#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En7_01Hit
// Address: 0x1af2d0 - 0x1af374
void En7_01Hit_0x1af2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En7_01Hit_0x1af2d0");
#endif

    ctx->pc = 0x1af2d0u;

    // 0x1af2d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1af2d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1af2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1af2d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1af2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1af2dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1af2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1af2e0: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1af2e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1af2e4: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1af2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1af2e8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1af2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1af2ec: 0x1880001c  blez        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1AF2ECu;
    {
        const bool branch_taken_0x1af2ec = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1AF2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF2ECu;
            // 0x1af2f0: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af2ec) {
            ctx->pc = 0x1AF360u;
            goto label_1af360;
        }
    }
    ctx->pc = 0x1AF2F4u;
    // 0x1af2f4: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1af2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1af2f8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1af2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1af2fc: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1af2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1af300: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1af300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1af304: 0x1c600016  bgtz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1AF304u;
    {
        const bool branch_taken_0x1af304 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1af304) {
            ctx->pc = 0x1AF360u;
            goto label_1af360;
        }
    }
    ctx->pc = 0x1AF30Cu;
    // 0x1af30c: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1af30cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1af310: 0x240302bc  addiu       $v1, $zero, 0x2BC
    ctx->pc = 0x1af310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
    // 0x1af314: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1af314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1af318: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1af318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1af31c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1af31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1af320: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1af320u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1af324: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1af324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1af328: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1af328u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1af32c: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1af32cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1af330: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1AF330u;
    SET_GPR_U32(ctx, 31, 0x1AF338u);
    ctx->pc = 0x1AF334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF330u;
            // 0x1af334: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF338u; }
        if (ctx->pc != 0x1AF338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF338u; }
        if (ctx->pc != 0x1AF338u) { return; }
    }
    ctx->pc = 0x1AF338u;
    // 0x1af338: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1af338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1af33c: 0x286300ff  slti        $v1, $v1, 0xFF
    ctx->pc = 0x1af33cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x1af340: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AF340u;
    {
        const bool branch_taken_0x1af340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af340) {
            ctx->pc = 0x1AF360u;
            goto label_1af360;
        }
    }
    ctx->pc = 0x1AF348u;
    // 0x1af348: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1af348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1af34c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1af34cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1af350: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x1af350u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1af354: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1af354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af358: 0xc065944  jal         func_196510
    ctx->pc = 0x1AF358u;
    SET_GPR_U32(ctx, 31, 0x1AF360u);
    ctx->pc = 0x1AF35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF358u;
            // 0x1af35c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF360u; }
        if (ctx->pc != 0x1AF360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF360u; }
        if (ctx->pc != 0x1AF360u) { return; }
    }
    ctx->pc = 0x1AF360u;
label_1af360:
    // 0x1af360: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1af360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af364: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1af368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af36c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF36Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF36Cu;
            // 0x1af370: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF360u: goto label_1af360;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AF374u;
}
