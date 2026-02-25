#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFuncStg5_11B
// Address: 0x145350 - 0x145418
void MapMoveingFuncStg5_11B_0x145350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFuncStg5_11B_0x145350");
#endif

    ctx->pc = 0x145350u;

    // 0x145350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x145354: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x145354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x145358: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x145358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14535c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14535cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145360: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145364: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x145364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x145368: 0x3c034516  lui         $v1, 0x4516
    ctx->pc = 0x145368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17686 << 16));
    // 0x14536c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14536cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145370: 0xc4a20124  lwc1        $f2, 0x124($a1)
    ctx->pc = 0x145370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x145374: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x145374u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x145378: 0xe4a10124  swc1        $f1, 0x124($a1)
    ctx->pc = 0x145378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 292), bits); }
    // 0x14537c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x14537cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x145380: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x145380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145384: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x145384u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145388: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x145388u;
    {
        const bool branch_taken_0x145388 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14538Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145388u;
            // 0x14538c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145388) {
            ctx->pc = 0x145398u;
            goto label_145398;
        }
    }
    ctx->pc = 0x145390u;
    // 0x145390: 0xc053348  jal         func_14CD20
    ctx->pc = 0x145390u;
    SET_GPR_U32(ctx, 31, 0x145398u);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145398u; }
        if (ctx->pc != 0x145398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145398u; }
        if (ctx->pc != 0x145398u) { return; }
    }
    ctx->pc = 0x145398u;
label_145398:
    // 0x145398: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x145398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x14539c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x14539cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1453a0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1453a0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1453a4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1453a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1453a8: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x1453a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x1453ac: 0x1810  mfhi        $v1
    ctx->pc = 0x1453acu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1453b0: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1453B0u;
    {
        const bool branch_taken_0x1453b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1453b0) {
            ctx->pc = 0x145408u;
            goto label_145408;
        }
    }
    ctx->pc = 0x1453B8u;
    // 0x1453b8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1453b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1453bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1453bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1453c0: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1453c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1453c4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1453c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1453c8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1453c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1453cc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1453CCu;
    {
        const bool branch_taken_0x1453cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1453cc) {
            ctx->pc = 0x1453D8u;
            goto label_1453d8;
        }
    }
    ctx->pc = 0x1453D4u;
    // 0x1453d4: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1453d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_1453d8:
    // 0x1453d8: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1453d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1453dc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1453dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1453e0: 0x24429500  addiu       $v0, $v0, -0x6B00
    ctx->pc = 0x1453e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939904));
    // 0x1453e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1453e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1453e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1453e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1453ec: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1453ECu;
    SET_GPR_U32(ctx, 31, 0x1453F4u);
    ctx->pc = 0x1453F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1453ECu;
            // 0x1453f0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1453F4u; }
        if (ctx->pc != 0x1453F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1453F4u; }
        if (ctx->pc != 0x1453F4u) { return; }
    }
    ctx->pc = 0x1453F4u;
    // 0x1453f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1453f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1453f8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1453f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1453fc: 0xc05c024  jal         func_170090
    ctx->pc = 0x1453FCu;
    SET_GPR_U32(ctx, 31, 0x145404u);
    ctx->pc = 0x145400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1453FCu;
            // 0x145400: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170090u;
    if (runtime->hasFunction(0x170090u)) {
        auto targetFn = runtime->lookupFunction(0x170090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145404u; }
        if (ctx->pc != 0x145404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setClutInfo_0x170090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145404u; }
        if (ctx->pc != 0x145404u) { return; }
    }
    ctx->pc = 0x145404u;
    // 0x145404: 0x0  nop
    ctx->pc = 0x145404u;
    // NOP
label_145408:
    // 0x145408: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x145408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14540c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14540cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145410: 0x3e00008  jr          $ra
    ctx->pc = 0x145410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145410u;
            // 0x145414: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x145398u: goto label_145398;
            case 0x1453D8u: goto label_1453d8;
            case 0x145408u: goto label_145408;
            default: break;
        }
        return;
    }
    ctx->pc = 0x145418u;
}
