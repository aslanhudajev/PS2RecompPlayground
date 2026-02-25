#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsDualShockPool
// Address: 0x154300 - 0x15445c
void wrsDualShockPool_0x154300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsDualShockPool_0x154300");
#endif

    ctx->pc = 0x154300u;

    // 0x154300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x154300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x154304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x154308: 0xc065cf0  jal         func_1973C0
    ctx->pc = 0x154308u;
    SET_GPR_U32(ctx, 31, 0x154310u);
    ctx->pc = 0x1973C0u;
    if (runtime->hasFunction(0x1973C0u)) {
        auto targetFn = runtime->lookupFunction(0x1973C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154310u; }
        if (ctx->pc != 0x154310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVibrate_0x1973c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154310u; }
        if (ctx->pc != 0x154310u) { return; }
    }
    ctx->pc = 0x154310u;
    // 0x154310: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x154310u;
    {
        const bool branch_taken_0x154310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154310u;
            // 0x154314: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154310) {
            ctx->pc = 0x154320u;
            goto label_154320;
        }
    }
    ctx->pc = 0x154318u;
    // 0x154318: 0xc055118  jal         func_154460
    ctx->pc = 0x154318u;
    SET_GPR_U32(ctx, 31, 0x154320u);
    ctx->pc = 0x15431Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154318u;
            // 0x15431c: 0x8c242168  lw          $a0, 0x2168($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8552)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154460u;
    if (runtime->hasFunction(0x154460u)) {
        auto targetFn = runtime->lookupFunction(0x154460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154320u; }
        if (ctx->pc != 0x154320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShockStop_0x154460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154320u; }
        if (ctx->pc != 0x154320u) { return; }
    }
    ctx->pc = 0x154320u;
label_154320:
    // 0x154320: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154324: 0x8c242168  lw          $a0, 0x2168($at)
    ctx->pc = 0x154324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8552)));
    // 0x154328: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x154328u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x15432c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x15432cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x154330: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x154330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x154334: 0x24c62170  addiu       $a2, $a2, 0x2170
    ctx->pc = 0x154334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8560));
    // 0x154338: 0x24a52178  addiu       $a1, $a1, 0x2178
    ctx->pc = 0x154338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8568));
    // 0x15433c: 0x24639b40  addiu       $v1, $v1, -0x64C0
    ctx->pc = 0x15433cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941504));
    // 0x154340: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x154340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x154344: 0x44080  sll         $t0, $a0, 2
    ctx->pc = 0x154344u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x154348: 0xc83821  addu        $a3, $a2, $t0
    ctx->pc = 0x154348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x15434c: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x15434cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x154350: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x154350u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x154354: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x154354u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x154358: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x154358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15435c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x15435cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x154360: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x154360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x154364: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x154364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x154368: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x154368u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15436c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15436Cu;
    {
        const bool branch_taken_0x15436c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15436c) {
            ctx->pc = 0x154388u;
            goto label_154388;
        }
    }
    ctx->pc = 0x154374u;
    // 0x154374: 0xc055118  jal         func_154460
    ctx->pc = 0x154374u;
    SET_GPR_U32(ctx, 31, 0x15437Cu);
    ctx->pc = 0x154460u;
    if (runtime->hasFunction(0x154460u)) {
        auto targetFn = runtime->lookupFunction(0x154460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15437Cu; }
        if (ctx->pc != 0x15437Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShockStop_0x154460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15437Cu; }
        if (ctx->pc != 0x15437Cu) { return; }
    }
    ctx->pc = 0x15437Cu;
    // 0x15437c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15437Cu;
    {
        const bool branch_taken_0x15437c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15437Cu;
            // 0x154380: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15437c) {
            ctx->pc = 0x154390u;
            goto label_154390;
        }
    }
    ctx->pc = 0x154384u;
    // 0x154384: 0x0  nop
    ctx->pc = 0x154384u;
    // NOP
label_154388:
    // 0x154388: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x154388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15438c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x15438cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_154390:
    // 0x154390: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154394: 0x8c2c2168  lw          $t4, 0x2168($at)
    ctx->pc = 0x154394u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8552)));
    // 0x154398: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x154398u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x15439c: 0x24c625f0  addiu       $a2, $a2, 0x25F0
    ctx->pc = 0x15439cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9712));
    // 0x1543a0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1543a0u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)255u)));
    // 0x1543a4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1543a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1543a8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1543a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1543ac: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1543acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1543b0: 0x24429ba4  addiu       $v0, $v0, -0x645C
    ctx->pc = 0x1543b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941604));
    // 0x1543b4: 0x455021  addu        $t2, $v0, $a1
    ctx->pc = 0x1543b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1543b8: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1543b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1543bc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1543bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1543c0: 0x248425e8  addiu       $a0, $a0, 0x25E8
    ctx->pc = 0x1543c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9704));
    // 0x1543c4: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x1543c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x1543c8: 0x24429b90  addiu       $v0, $v0, -0x6470
    ctx->pc = 0x1543c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941584));
    // 0x1543cc: 0xc5840  sll         $t3, $t4, 1
    ctx->pc = 0x1543ccu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x1543d0: 0xa0c80000  sb          $t0, 0x0($a2)
    ctx->pc = 0x1543d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x1543d4: 0x246325e9  addiu       $v1, $v1, 0x25E9
    ctx->pc = 0x1543d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9705));
    // 0x1543d8: 0x8b4021  addu        $t0, $a0, $t3
    ctx->pc = 0x1543d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1543dc: 0x6b2021  addu        $a0, $v1, $t3
    ctx->pc = 0x1543dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1543e0: 0x454821  addu        $t1, $v0, $a1
    ctx->pc = 0x1543e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1543e4: 0x914b0000  lbu         $t3, 0x0($t2)
    ctx->pc = 0x1543e4u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1543e8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1543e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1543ec: 0x24422a10  addiu       $v0, $v0, 0x2A10
    ctx->pc = 0x1543ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10768));
    // 0x1543f0: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x1543f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x1543f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1543f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1543f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1543f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1543fc: 0x912a0000  lbu         $t2, 0x0($t1)
    ctx->pc = 0x1543fcu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x154400: 0xb19c3  sra         $v1, $t3, 7
    ctx->pc = 0x154400u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), 7));
    // 0x154404: 0xb4840  sll         $t1, $t3, 1
    ctx->pc = 0x154404u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x154408: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x154408u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x15440c: 0xa1090000  sb          $t1, 0x0($t0)
    ctx->pc = 0x15440cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x154410: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x154410u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x154414: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x154414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154418: 0xc04b682  jal         func_12DA08
    ctx->pc = 0x154418u;
    SET_GPR_U32(ctx, 31, 0x154420u);
    ctx->pc = 0x15441Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154418u;
            // 0x15441c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA08u;
    if (runtime->hasFunction(0x12DA08u)) {
        auto targetFn = runtime->lookupFunction(0x12DA08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154420u; }
        if (ctx->pc != 0x154420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVibSetActParam_0x12da08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154420u; }
        if (ctx->pc != 0x154420u) { return; }
    }
    ctx->pc = 0x154420u;
    // 0x154420: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154424: 0x8c232168  lw          $v1, 0x2168($at)
    ctx->pc = 0x154424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8552)));
    // 0x154428: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x154428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15442c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15442cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154430: 0xac232168  sw          $v1, 0x2168($at)
    ctx->pc = 0x154430u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8552), GPR_U32(ctx, 3));
    // 0x154434: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154438: 0x8c232168  lw          $v1, 0x2168($at)
    ctx->pc = 0x154438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8552)));
    // 0x15443c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x15443cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x154440: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x154440u;
    {
        const bool branch_taken_0x154440 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x154444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154440u;
            // 0x154444: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154440) {
            ctx->pc = 0x154450u;
            goto label_154450;
        }
    }
    ctx->pc = 0x154448u;
    // 0x154448: 0xac202168  sw          $zero, 0x2168($at)
    ctx->pc = 0x154448u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8552), GPR_U32(ctx, 0));
    // 0x15444c: 0x0  nop
    ctx->pc = 0x15444cu;
    // NOP
label_154450:
    // 0x154450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154454: 0x3e00008  jr          $ra
    ctx->pc = 0x154454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154454u;
            // 0x154458: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x154320u: goto label_154320;
            case 0x154388u: goto label_154388;
            case 0x154390u: goto label_154390;
            case 0x154450u: goto label_154450;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15445Cu;
}
