#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage3BossMove3
// Address: 0x1a13b0 - 0x1a179c
void Stage3BossMove3_0x1a13b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage3BossMove3_0x1a13b0");
#endif

    ctx->pc = 0x1a13b0u;

    // 0x1a13b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a13b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a13b4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1a13b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1a13b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a13b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a13bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a13bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a13c0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a13c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a13c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a13c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a13c8: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x1a13c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x1a13cc: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x1A13CCu;
    SET_GPR_U32(ctx, 31, 0x1A13D4u);
    ctx->pc = 0x1A13D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A13CCu;
            // 0x1a13d0: 0xdc25a948  ld          $a1, -0x56B8($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294945096)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A13D4u; }
        if (ctx->pc != 0x1A13D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A13D4u; }
        if (ctx->pc != 0x1A13D4u) { return; }
    }
    ctx->pc = 0x1A13D4u;
    // 0x1a13d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a13d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a13d8: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1A13D8u;
    SET_GPR_U32(ctx, 31, 0x1A13E0u);
    ctx->pc = 0x1A13DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A13D8u;
            // 0x1a13dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A13E0u; }
        if (ctx->pc != 0x1A13E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A13E0u; }
        if (ctx->pc != 0x1A13E0u) { return; }
    }
    ctx->pc = 0x1A13E0u;
    // 0x1a13e0: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1a13e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a13e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a13e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a13e8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A13E8u;
    {
        const bool branch_taken_0x1a13e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A13ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A13E8u;
            // 0x1a13ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a13e8) {
            ctx->pc = 0x1A1420u;
            goto label_1a1420;
        }
    }
    ctx->pc = 0x1A13F0u;
    // 0x1a13f0: 0x1062006d  beq         $v1, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x1A13F0u;
    {
        const bool branch_taken_0x1a13f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a13f0) {
            ctx->pc = 0x1A15A8u;
            goto label_1a15a8;
        }
    }
    ctx->pc = 0x1A13F8u;
    // 0x1a13f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A13F8u;
    {
        const bool branch_taken_0x1a13f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a13f8) {
            ctx->pc = 0x1A1408u;
            goto label_1a1408;
        }
    }
    ctx->pc = 0x1A1400u;
    // 0x1a1400: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1A1400u;
    {
        const bool branch_taken_0x1a1400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1400) {
            ctx->pc = 0x1A15A8u;
            goto label_1a15a8;
        }
    }
    ctx->pc = 0x1A1408u;
label_1a1408:
    // 0x1a1408: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1a1408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a140c: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x1A140Cu;
    {
        const bool branch_taken_0x1a140c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A140Cu;
            // 0x1a1410: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a140c) {
            ctx->pc = 0x1A15A8u;
            goto label_1a15a8;
        }
    }
    ctx->pc = 0x1A1414u;
    // 0x1a1414: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1A1414u;
    {
        const bool branch_taken_0x1a1414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1414u;
            // 0x1a1418: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1414) {
            ctx->pc = 0x1A15A8u;
            goto label_1a15a8;
        }
    }
    ctx->pc = 0x1A141Cu;
    // 0x1a141c: 0x0  nop
    ctx->pc = 0x1a141cu;
    // NOP
label_1a1420:
    // 0x1a1420: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a1420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a1424: 0x18400060  blez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x1A1424u;
    {
        const bool branch_taken_0x1a1424 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a1424) {
            ctx->pc = 0x1A15A8u;
            goto label_1a15a8;
        }
    }
    ctx->pc = 0x1A142Cu;
    // 0x1a142c: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1a142cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1a1430: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1a1430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1a1434: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1438: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1a1438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a143c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1a143cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a1440: 0xc068fec  jal         func_1A3FB0
    ctx->pc = 0x1A1440u;
    SET_GPR_U32(ctx, 31, 0x1A1448u);
    ctx->pc = 0x1A1444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1440u;
            // 0x1a1444: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3FB0u;
    if (runtime->hasFunction(0x1A3FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A3FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1448u; }
        if (ctx->pc != 0x1A1448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D2_0x1a3fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1448u; }
        if (ctx->pc != 0x1A1448u) { return; }
    }
    ctx->pc = 0x1A1448u;
    // 0x1a1448: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1a1448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a144c: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1a144cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1a1450: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1a1450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1a1454: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1458: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1a1458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1a145c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a145cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a1460: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a1460u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a1464: 0x0  nop
    ctx->pc = 0x1a1464u;
    // NOP
    // 0x1a1468: 0x0  nop
    ctx->pc = 0x1a1468u;
    // NOP
    // 0x1a146c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a146cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a1470: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1A1470u;
    {
        const bool branch_taken_0x1a1470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1470) {
            ctx->pc = 0x1A15A8u;
            goto label_1a15a8;
        }
    }
    ctx->pc = 0x1A1478u;
    // 0x1a1478: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1a1478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a147c: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1a147cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a1480: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1484: 0x2463ff4c  addiu       $v1, $v1, -0xB4
    ctx->pc = 0x1a1484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967116));
    // 0x1a1488: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1a1488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1a148c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a148cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a1490: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a1490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1494: 0x0  nop
    ctx->pc = 0x1a1494u;
    // NOP
    // 0x1a1498: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a1498u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1a149c: 0xc05d080  jal         func_174200
    ctx->pc = 0x1A149Cu;
    SET_GPR_U32(ctx, 31, 0x1A14A4u);
    ctx->pc = 0x1A14A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A149Cu;
            // 0x1a14a0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A14A4u; }
        if (ctx->pc != 0x1A14A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A14A4u; }
        if (ctx->pc != 0x1A14A4u) { return; }
    }
    ctx->pc = 0x1A14A4u;
    // 0x1a14a4: 0xc065d00  jal         func_197400
    ctx->pc = 0x1A14A4u;
    SET_GPR_U32(ctx, 31, 0x1A14ACu);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A14ACu; }
        if (ctx->pc != 0x1A14ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A14ACu; }
        if (ctx->pc != 0x1A14ACu) { return; }
    }
    ctx->pc = 0x1A14ACu;
    // 0x1a14ac: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1a14acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a14b0: 0x1420001f  bnez        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A14B0u;
    {
        const bool branch_taken_0x1a14b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a14b0) {
            ctx->pc = 0x1A1530u;
            goto label_1a1530;
        }
    }
    ctx->pc = 0x1A14B8u;
    // 0x1a14b8: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1a14b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a14bc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1a14bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1a14c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a14c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a14c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a14c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a14c8: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1a14c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x1a14cc: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1a14ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1a14d0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a14d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a14d4: 0x2484ff4c  addiu       $a0, $a0, -0xB4
    ctx->pc = 0x1a14d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967116));
    // 0x1a14d8: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1A14D8u;
    SET_GPR_U32(ctx, 31, 0x1A14E0u);
    ctx->pc = 0x1A14DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A14D8u;
            // 0x1a14dc: 0x24650014  addiu       $a1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A14E0u; }
        if (ctx->pc != 0x1A14E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A14E0u; }
        if (ctx->pc != 0x1A14E0u) { return; }
    }
    ctx->pc = 0x1A14E0u;
    // 0x1a14e0: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1a14e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a14e4: 0x3c024013  lui         $v0, 0x4013
    ctx->pc = 0x1a14e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16403 << 16));
    // 0x1a14e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a14e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a14ec: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1a14ecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1a14f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a14f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a14f4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a14f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a14f8: 0x2484ff4c  addiu       $a0, $a0, -0xB4
    ctx->pc = 0x1a14f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967116));
    // 0x1a14fc: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1A14FCu;
    SET_GPR_U32(ctx, 31, 0x1A1504u);
    ctx->pc = 0x1A1500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A14FCu;
            // 0x1a1500: 0x24650014  addiu       $a1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1504u; }
        if (ctx->pc != 0x1A1504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1504u; }
        if (ctx->pc != 0x1A1504u) { return; }
    }
    ctx->pc = 0x1A1504u;
    // 0x1a1504: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1a1504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a1508: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a1508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a150c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a150cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1510: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a1510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1514: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1a1514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x1a1518: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1a1518u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1a151c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a151cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a1520: 0x2484ff4c  addiu       $a0, $a0, -0xB4
    ctx->pc = 0x1a1520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967116));
    // 0x1a1524: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1A1524u;
    SET_GPR_U32(ctx, 31, 0x1A152Cu);
    ctx->pc = 0x1A1528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1524u;
            // 0x1a1528: 0x24650014  addiu       $a1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A152Cu; }
        if (ctx->pc != 0x1A152Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A152Cu; }
        if (ctx->pc != 0x1A152Cu) { return; }
    }
    ctx->pc = 0x1A152Cu;
    // 0x1a152c: 0x0  nop
    ctx->pc = 0x1a152cu;
    // NOP
label_1a1530:
    // 0x1a1530: 0xc065d00  jal         func_197400
    ctx->pc = 0x1A1530u;
    SET_GPR_U32(ctx, 31, 0x1A1538u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1538u; }
        if (ctx->pc != 0x1A1538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1538u; }
        if (ctx->pc != 0x1A1538u) { return; }
    }
    ctx->pc = 0x1A1538u;
    // 0x1a1538: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A1538u;
    {
        const bool branch_taken_0x1a1538 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a1538) {
            ctx->pc = 0x1A1580u;
            goto label_1a1580;
        }
    }
    ctx->pc = 0x1A1540u;
    // 0x1a1540: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a1540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1a1544: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1a1544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a1548: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a1548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a154c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1a154cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a1550: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1554: 0x2464ff42  addiu       $a0, $v1, -0xBE
    ctx->pc = 0x1a1554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967106));
    // 0x1a1558: 0xc065254  jal         func_194950
    ctx->pc = 0x1A1558u;
    SET_GPR_U32(ctx, 31, 0x1A1560u);
    ctx->pc = 0x1A155Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1558u;
            // 0x1a155c: 0x24450032  addiu       $a1, $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1560u; }
        if (ctx->pc != 0x1A1560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1560u; }
        if (ctx->pc != 0x1A1560u) { return; }
    }
    ctx->pc = 0x1A1560u;
    // 0x1a1560: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1a1560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x1a1564: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1a1564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a1568: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a1568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a156c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1a156cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a1570: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1574: 0x2464ff59  addiu       $a0, $v1, -0xA7
    ctx->pc = 0x1a1574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967129));
    // 0x1a1578: 0xc065254  jal         func_194950
    ctx->pc = 0x1A1578u;
    SET_GPR_U32(ctx, 31, 0x1A1580u);
    ctx->pc = 0x1A157Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1578u;
            // 0x1a157c: 0x24450032  addiu       $a1, $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1580u; }
        if (ctx->pc != 0x1A1580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1580u; }
        if (ctx->pc != 0x1A1580u) { return; }
    }
    ctx->pc = 0x1A1580u;
label_1a1580:
    // 0x1a1580: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1a1580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a1584: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1588: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1a1588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
    // 0x1a158c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a158cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1a1590: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a1590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1594: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a1594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a1598: 0x2484ff4c  addiu       $a0, $a0, -0xB4
    ctx->pc = 0x1a1598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967116));
    // 0x1a159c: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1A159Cu;
    SET_GPR_U32(ctx, 31, 0x1A15A4u);
    ctx->pc = 0x1A15A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A159Cu;
            // 0x1a15a0: 0x24650014  addiu       $a1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A15A4u; }
        if (ctx->pc != 0x1A15A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A15A4u; }
        if (ctx->pc != 0x1A15A4u) { return; }
    }
    ctx->pc = 0x1A15A4u;
    // 0x1a15a4: 0x0  nop
    ctx->pc = 0x1a15a4u;
    // NOP
label_1a15a8:
    // 0x1a15a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a15a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a15ac: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1a15acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1a15b0: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1a15b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a15b4: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1a15b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a15b8: 0xc068fec  jal         func_1A3FB0
    ctx->pc = 0x1A15B8u;
    SET_GPR_U32(ctx, 31, 0x1A15C0u);
    ctx->pc = 0x1A15BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A15B8u;
            // 0x1a15bc: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3FB0u;
    if (runtime->hasFunction(0x1A3FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A3FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A15C0u; }
        if (ctx->pc != 0x1A15C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D2_0x1a3fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A15C0u; }
        if (ctx->pc != 0x1A15C0u) { return; }
    }
    ctx->pc = 0x1A15C0u;
    // 0x1a15c0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1a15c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a15c4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1a15c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1a15c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a15c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a15cc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1a15ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1a15d0: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x1A15D0u;
    SET_GPR_U32(ctx, 31, 0x1A15D8u);
    ctx->pc = 0x1A15D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A15D0u;
            // 0x1a15d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A15D8u; }
        if (ctx->pc != 0x1A15D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A15D8u; }
        if (ctx->pc != 0x1A15D8u) { return; }
    }
    ctx->pc = 0x1A15D8u;
    // 0x1a15d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a15d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a15dc: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1a15dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a15e0: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x1A15E0u;
    SET_GPR_U32(ctx, 31, 0x1A15E8u);
    ctx->pc = 0x1A15E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A15E0u;
            // 0x1a15e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A15E8u; }
        if (ctx->pc != 0x1A15E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A15E8u; }
        if (ctx->pc != 0x1A15E8u) { return; }
    }
    ctx->pc = 0x1A15E8u;
    // 0x1a15e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a15e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a15ec: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1a15ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a15f0: 0xc04b804  jal         func_12E010
    ctx->pc = 0x1A15F0u;
    SET_GPR_U32(ctx, 31, 0x1A15F8u);
    ctx->pc = 0x1A15F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A15F0u;
            // 0x1a15f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A15F8u; }
        if (ctx->pc != 0x1A15F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A15F8u; }
        if (ctx->pc != 0x1A15F8u) { return; }
    }
    ctx->pc = 0x1A15F8u;
    // 0x1a15f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a15f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a15fc: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1a15fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a1600: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x1A1600u;
    SET_GPR_U32(ctx, 31, 0x1A1608u);
    ctx->pc = 0x1A1604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1600u;
            // 0x1a1604: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1608u; }
        if (ctx->pc != 0x1A1608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1608u; }
        if (ctx->pc != 0x1A1608u) { return; }
    }
    ctx->pc = 0x1A1608u;
    // 0x1a1608: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a1608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a160c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a160cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1610: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x1A1610u;
    SET_GPR_U32(ctx, 31, 0x1A1618u);
    ctx->pc = 0x1A1614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1610u;
            // 0x1a1614: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1618u; }
        if (ctx->pc != 0x1A1618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1618u; }
        if (ctx->pc != 0x1A1618u) { return; }
    }
    ctx->pc = 0x1A1618u;
    // 0x1a1618: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a1618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a161c: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A161Cu;
    {
        const bool branch_taken_0x1a161c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1a161c) {
            ctx->pc = 0x1A1688u;
            goto label_1a1688;
        }
    }
    ctx->pc = 0x1A1624u;
    // 0x1a1624: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a1624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a1628: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a1628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a162c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a162cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a1630: 0x0  nop
    ctx->pc = 0x1a1630u;
    // NOP
    // 0x1a1634: 0x0  nop
    ctx->pc = 0x1a1634u;
    // NOP
    // 0x1a1638: 0x1010  mfhi        $v0
    ctx->pc = 0x1a1638u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a163c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A163Cu;
    {
        const bool branch_taken_0x1a163c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a163c) {
            ctx->pc = 0x1A1668u;
            goto label_1a1668;
        }
    }
    ctx->pc = 0x1A1644u;
    // 0x1a1644: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1a1644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a1648: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x1a1648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x1a164c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a164cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a1650: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a1650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1654: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a1654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a1658: 0x2484ff4c  addiu       $a0, $a0, -0xB4
    ctx->pc = 0x1a1658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967116));
    // 0x1a165c: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1A165Cu;
    SET_GPR_U32(ctx, 31, 0x1A1664u);
    ctx->pc = 0x1A1660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A165Cu;
            // 0x1a1660: 0x24650014  addiu       $a1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1664u; }
        if (ctx->pc != 0x1A1664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1664u; }
        if (ctx->pc != 0x1A1664u) { return; }
    }
    ctx->pc = 0x1A1664u;
    // 0x1a1664: 0x0  nop
    ctx->pc = 0x1a1664u;
    // NOP
label_1a1668:
    // 0x1a1668: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1a1668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1a166c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a166cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a1670: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x1a1670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x1a1674: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x1a1674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1a1678: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x1A1678u;
    SET_GPR_U32(ctx, 31, 0x1A1680u);
    ctx->pc = 0x1A167Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1678u;
            // 0x1a167c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1680u; }
        if (ctx->pc != 0x1A1680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1680u; }
        if (ctx->pc != 0x1A1680u) { return; }
    }
    ctx->pc = 0x1A1680u;
    // 0x1a1680: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1A1680u;
    {
        const bool branch_taken_0x1a1680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1680u;
            // 0x1a1684: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1680) {
            ctx->pc = 0x1A1780u;
            goto label_1a1780;
        }
    }
    ctx->pc = 0x1A1688u;
label_1a1688:
    // 0x1a1688: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a1688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a168c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1a168cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a1690: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A1690u;
    {
        const bool branch_taken_0x1a1690 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1690) {
            ctx->pc = 0x1A16E8u;
            goto label_1a16e8;
        }
    }
    ctx->pc = 0x1A1698u;
    // 0x1a1698: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1a1698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1a169c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A169Cu;
    {
        const bool branch_taken_0x1a169c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a169c) {
            ctx->pc = 0x1A16B8u;
            goto label_1a16b8;
        }
    }
    ctx->pc = 0x1A16A4u;
    // 0x1a16a4: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x1A16A4u;
    SET_GPR_U32(ctx, 31, 0x1A16ACu);
    ctx->pc = 0x1A16A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A16A4u;
            // 0x1a16a8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A16ACu; }
        if (ctx->pc != 0x1A16ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A16ACu; }
        if (ctx->pc != 0x1A16ACu) { return; }
    }
    ctx->pc = 0x1A16ACu;
    // 0x1a16ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A16ACu;
    {
        const bool branch_taken_0x1a16ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a16ac) {
            ctx->pc = 0x1A16C0u;
            goto label_1a16c0;
        }
    }
    ctx->pc = 0x1A16B4u;
    // 0x1a16b4: 0x0  nop
    ctx->pc = 0x1a16b4u;
    // NOP
label_1a16b8:
    // 0x1a16b8: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1A16B8u;
    SET_GPR_U32(ctx, 31, 0x1A16C0u);
    ctx->pc = 0x1A16BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A16B8u;
            // 0x1a16bc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A16C0u; }
        if (ctx->pc != 0x1A16C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A16C0u; }
        if (ctx->pc != 0x1A16C0u) { return; }
    }
    ctx->pc = 0x1A16C0u;
label_1a16c0:
    // 0x1a16c0: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1a16c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1a16c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A16C4u;
    {
        const bool branch_taken_0x1a16c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a16c4) {
            ctx->pc = 0x1A16D8u;
            goto label_1a16d8;
        }
    }
    ctx->pc = 0x1A16CCu;
    // 0x1a16cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A16CCu;
    {
        const bool branch_taken_0x1a16cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A16D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A16CCu;
            // 0x1a16d0: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a16cc) {
            ctx->pc = 0x1A16F8u;
            goto label_1a16f8;
        }
    }
    ctx->pc = 0x1A16D4u;
    // 0x1a16d4: 0x0  nop
    ctx->pc = 0x1a16d4u;
    // NOP
label_1a16d8:
    // 0x1a16d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a16d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a16dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A16DCu;
    {
        const bool branch_taken_0x1a16dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A16E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A16DCu;
            // 0x1a16e0: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a16dc) {
            ctx->pc = 0x1A16F8u;
            goto label_1a16f8;
        }
    }
    ctx->pc = 0x1A16E4u;
    // 0x1a16e4: 0x0  nop
    ctx->pc = 0x1a16e4u;
    // NOP
label_1a16e8:
    // 0x1a16e8: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1A16E8u;
    SET_GPR_U32(ctx, 31, 0x1A16F0u);
    ctx->pc = 0x1A16ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A16E8u;
            // 0x1a16ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A16F0u; }
        if (ctx->pc != 0x1A16F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A16F0u; }
        if (ctx->pc != 0x1A16F0u) { return; }
    }
    ctx->pc = 0x1A16F0u;
    // 0x1a16f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a16f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a16f4: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1a16f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1a16f8:
    // 0x1a16f8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a16f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a16fc: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a16fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x1a1700: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a1700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a1704: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1a1704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1a1708: 0x24c60790  addiu       $a2, $a2, 0x790
    ctx->pc = 0x1a1708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1936));
    // 0x1a170c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1a170cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1710: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1a1710u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1714: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1a1714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1a1718: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1a1718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a171c: 0x2442ff42  addiu       $v0, $v0, -0xBE
    ctx->pc = 0x1a171cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967106));
    // 0x1a1720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a1720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1724: 0x0  nop
    ctx->pc = 0x1a1724u;
    // NOP
    // 0x1a1728: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a1728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a172c: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1a172cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1a1730: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1734: 0x2442ff92  addiu       $v0, $v0, -0x6E
    ctx->pc = 0x1a1734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967186));
    // 0x1a1738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a1738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a173c: 0x0  nop
    ctx->pc = 0x1a173cu;
    // NOP
    // 0x1a1740: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a1740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a1744: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1a1744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1a1748: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1a1748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a174c: 0x2442ff60  addiu       $v0, $v0, -0xA0
    ctx->pc = 0x1a174cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967136));
    // 0x1a1750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a1750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1754: 0x0  nop
    ctx->pc = 0x1a1754u;
    // NOP
    // 0x1a1758: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a1758u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a175c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1a175cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1a1760: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1764: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1a1764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1a1768: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a1768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a176c: 0x0  nop
    ctx->pc = 0x1a176cu;
    // NOP
    // 0x1a1770: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a1770u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a1774: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1A1774u;
    SET_GPR_U32(ctx, 31, 0x1A177Cu);
    ctx->pc = 0x1A1778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1774u;
            // 0x1a1778: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A177Cu; }
        if (ctx->pc != 0x1A177Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A177Cu; }
        if (ctx->pc != 0x1A177Cu) { return; }
    }
    ctx->pc = 0x1A177Cu;
    // 0x1a177c: 0x0  nop
    ctx->pc = 0x1a177cu;
    // NOP
label_1a1780:
    // 0x1a1780: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a1780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a1784: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a1784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a1788: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1a1788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1a178c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a178cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1790: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a1790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1794: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1794u;
            // 0x1a1798: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1408u: goto label_1a1408;
            case 0x1A1420u: goto label_1a1420;
            case 0x1A1530u: goto label_1a1530;
            case 0x1A1580u: goto label_1a1580;
            case 0x1A15A8u: goto label_1a15a8;
            case 0x1A1668u: goto label_1a1668;
            case 0x1A1688u: goto label_1a1688;
            case 0x1A16B8u: goto label_1a16b8;
            case 0x1A16C0u: goto label_1a16c0;
            case 0x1A16D8u: goto label_1a16d8;
            case 0x1A16E8u: goto label_1a16e8;
            case 0x1A16F8u: goto label_1a16f8;
            case 0x1A1780u: goto label_1a1780;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A179Cu;
}
