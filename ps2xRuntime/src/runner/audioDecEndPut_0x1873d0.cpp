#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: audioDecEndPut
// Address: 0x1873d0 - 0x1874f8
void audioDecEndPut_0x1873d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("audioDecEndPut_0x1873d0");
#endif

    ctx->pc = 0x1873d0u;

    // 0x1873d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1873d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1873d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1873d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1873d8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1873d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1873dc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1873dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1873e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1873e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1873e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1873e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1873e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1873e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1873ec: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1873ECu;
    {
        const bool branch_taken_0x1873ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1873F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1873ECu;
            // 0x1873f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1873ec) {
            ctx->pc = 0x1874A8u;
            goto label_1874a8;
        }
    }
    ctx->pc = 0x1873F4u;
    // 0x1873f4: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x1873f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1873f8: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1873f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1873fc: 0x648023  subu        $s0, $v1, $a0
    ctx->pc = 0x1873fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x187400: 0x211082b  sltu        $at, $s0, $s1
    ctx->pc = 0x187400u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x187404: 0x221800a  movz        $s0, $s1, $at
    ctx->pc = 0x187404u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    // 0x187408: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x187408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x18740c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x18740cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x187410: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x187410u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
    // 0x187414: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x187414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x187418: 0x2c630028  sltiu       $v1, $v1, 0x28
    ctx->pc = 0x187418u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
    // 0x18741c: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x18741Cu;
    {
        const bool branch_taken_0x18741c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18741c) {
            ctx->pc = 0x1874A0u;
            goto label_1874a0;
        }
    }
    ctx->pc = 0x187424u;
    // 0x187424: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187428: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x187428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x18742c: 0x24842340  addiu       $a0, $a0, 0x2340
    ctx->pc = 0x18742cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9024));
    // 0x187430: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x187430u;
    SET_GPR_U32(ctx, 31, 0x187438u);
    ctx->pc = 0x187434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187430u;
            // 0x187434: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187438u; }
        if (ctx->pc != 0x187438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187438u; }
        if (ctx->pc != 0x187438u) { return; }
    }
    ctx->pc = 0x187438u;
    // 0x187438: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x187438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x18743c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x18743cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x187440: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x187440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x187444: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x187444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x187448: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x187448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x18744c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x18744cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x187450: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x187450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x187454: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x187454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x187458: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x187458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x18745c: 0x82450004  lb          $a1, 0x4($s2)
    ctx->pc = 0x18745cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x187460: 0x82460005  lb          $a2, 0x5($s2)
    ctx->pc = 0x187460u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x187464: 0x82470006  lb          $a3, 0x6($s2)
    ctx->pc = 0x187464u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x187468: 0x82480007  lb          $t0, 0x7($s2)
    ctx->pc = 0x187468u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    // 0x18746c: 0x8e490008  lw          $t1, 0x8($s2)
    ctx->pc = 0x18746cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x187470: 0x8e4a000c  lw          $t2, 0xC($s2)
    ctx->pc = 0x187470u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x187474: 0x8e4b0010  lw          $t3, 0x10($s2)
    ctx->pc = 0x187474u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x187478: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x187478u;
    SET_GPR_U32(ctx, 31, 0x187480u);
    ctx->pc = 0x18747Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187478u;
            // 0x18747c: 0x24842380  addiu       $a0, $a0, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187480u; }
        if (ctx->pc != 0x187480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187480u; }
        if (ctx->pc != 0x187480u) { return; }
    }
    ctx->pc = 0x187480u;
    // 0x187480: 0x82450024  lb          $a1, 0x24($s2)
    ctx->pc = 0x187480u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x187484: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x187484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x187488: 0x82460025  lb          $a2, 0x25($s2)
    ctx->pc = 0x187488u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 37)));
    // 0x18748c: 0x82470026  lb          $a3, 0x26($s2)
    ctx->pc = 0x18748cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 38)));
    // 0x187490: 0x82480027  lb          $t0, 0x27($s2)
    ctx->pc = 0x187490u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 39)));
    // 0x187494: 0x8e490028  lw          $t1, 0x28($s2)
    ctx->pc = 0x187494u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x187498: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x187498u;
    SET_GPR_U32(ctx, 31, 0x1874A0u);
    ctx->pc = 0x18749Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187498u;
            // 0x18749c: 0x248424c0  addiu       $a0, $a0, 0x24C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1874A0u; }
        if (ctx->pc != 0x1874A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1874A0u; }
        if (ctx->pc != 0x1874A0u) { return; }
    }
    ctx->pc = 0x1874A0u;
label_1874a0:
    // 0x1874a0: 0x2308823  subu        $s1, $s1, $s0
    ctx->pc = 0x1874a0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1874a4: 0x0  nop
    ctx->pc = 0x1874a4u;
    // NOP
label_1874a8:
    // 0x1874a8: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x1874a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1874ac: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x1874acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1874b0: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1874b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1874b4: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1874b4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1874b8: 0x0  nop
    ctx->pc = 0x1874b8u;
    // NOP
    // 0x1874bc: 0x0  nop
    ctx->pc = 0x1874bcu;
    // NOP
    // 0x1874c0: 0x1810  mfhi        $v1
    ctx->pc = 0x1874c0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1874c4: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x1874c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x1874c8: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x1874c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1874cc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1874ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1874d0: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x1874d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
    // 0x1874d4: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x1874d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1874d8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1874d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1874dc: 0xae430040  sw          $v1, 0x40($s2)
    ctx->pc = 0x1874dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
    // 0x1874e0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1874e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1874e4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1874e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1874e8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1874e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1874ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1874ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1874f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1874F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1874F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1874F0u;
            // 0x1874f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1874A0u: goto label_1874a0;
            case 0x1874A8u: goto label_1874a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1874F8u;
}
