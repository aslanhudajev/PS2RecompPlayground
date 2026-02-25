#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn7_03
// Address: 0x1b1380 - 0x1b14e4
void CreateEn7_03_0x1b1380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn7_03_0x1b1380");
#endif

    ctx->pc = 0x1b1380u;

    // 0x1b1380: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1b1380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1b1384: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1b1384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1b1388: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b1388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b138c: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1b138cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1b1390: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b1390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b1394: 0x24631520  addiu       $v1, $v1, 0x1520
    ctx->pc = 0x1b1394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5408));
    // 0x1b1398: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b1398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b139c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b139cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b13a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b13a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b13a4: 0x24421820  addiu       $v0, $v0, 0x1820
    ctx->pc = 0x1b13a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6176));
    // 0x1b13a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b13a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b13ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b13acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b13b0: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1b13b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1b13b4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b13b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b13b8: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1b13b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1b13bc: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1b13bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1b13c0: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1b13c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1b13c4: 0x24633840  addiu       $v1, $v1, 0x3840
    ctx->pc = 0x1b13c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14400));
    // 0x1b13c8: 0x244214f0  addiu       $v0, $v0, 0x14F0
    ctx->pc = 0x1b13c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5360));
    // 0x1b13cc: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1b13ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1b13d0: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x1b13d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1b13d4: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1b13d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1b13d8: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1b13d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1b13dc: 0xc060694  jal         func_181A50
    ctx->pc = 0x1B13DCu;
    SET_GPR_U32(ctx, 31, 0x1B13E4u);
    ctx->pc = 0x1B13E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B13DCu;
            // 0x1b13e0: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B13E4u; }
        if (ctx->pc != 0x1B13E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B13E4u; }
        if (ctx->pc != 0x1B13E4u) { return; }
    }
    ctx->pc = 0x1B13E4u;
    // 0x1b13e4: 0xc060544  jal         func_181510
    ctx->pc = 0x1B13E4u;
    SET_GPR_U32(ctx, 31, 0x1B13ECu);
    ctx->pc = 0x1B13E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B13E4u;
            // 0x1b13e8: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B13ECu; }
        if (ctx->pc != 0x1B13ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B13ECu; }
        if (ctx->pc != 0x1B13ECu) { return; }
    }
    ctx->pc = 0x1B13ECu;
    // 0x1b13ec: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1b13ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1b13f0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1b13f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1b13f4: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1b13f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b13f8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1b13f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1b13fc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b13fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b1400: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1b1400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b1404: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1b1404u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b1408: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1b1408u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b140c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b140cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b1410: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b1410u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b1414: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1b1414u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1b1418: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b1418u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1b141c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x1b141cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1b1420: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b1420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b1424: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1b1424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1b1428: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1b1428u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1b142c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1b142cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b1430: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b1430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1b1434: 0x1262001a  beq         $s3, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B1434u;
    {
        const bool branch_taken_0x1b1434 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B1438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1434u;
            // 0x1b1438: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1434) {
            ctx->pc = 0x1B14A0u;
            goto label_1b14a0;
        }
    }
    ctx->pc = 0x1B143Cu;
    // 0x1b143c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b143cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b1440: 0x1262000f  beq         $s3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B1440u;
    {
        const bool branch_taken_0x1b1440 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B1444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1440u;
            // 0x1b1444: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1440) {
            ctx->pc = 0x1B1480u;
            goto label_1b1480;
        }
    }
    ctx->pc = 0x1B1448u;
    // 0x1b1448: 0x12620005  beq         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1448u;
    {
        const bool branch_taken_0x1b1448 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b1448) {
            ctx->pc = 0x1B1460u;
            goto label_1b1460;
        }
    }
    ctx->pc = 0x1B1450u;
    // 0x1b1450: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1450u;
    {
        const bool branch_taken_0x1b1450 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1450) {
            ctx->pc = 0x1B1460u;
            goto label_1b1460;
        }
    }
    ctx->pc = 0x1B1458u;
    // 0x1b1458: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1B1458u;
    {
        const bool branch_taken_0x1b1458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1458) {
            ctx->pc = 0x1B14C0u;
            goto label_1b14c0;
        }
    }
    ctx->pc = 0x1B1460u;
label_1b1460:
    // 0x1b1460: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1b1460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1b1464: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b1464u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1b1468: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1b1468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1b146c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1b146cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1b1470: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1b1470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1b1474: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1b1474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1b1478: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B1478u;
    {
        const bool branch_taken_0x1b1478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B147Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1478u;
            // 0x1b147c: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1478) {
            ctx->pc = 0x1B14C0u;
            goto label_1b14c0;
        }
    }
    ctx->pc = 0x1B1480u;
label_1b1480:
    // 0x1b1480: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1b1480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1b1484: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1b1484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1b1488: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b1488u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1b148c: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1b148cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1b1490: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1b1490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1b1494: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1b1494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1b1498: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B1498u;
    {
        const bool branch_taken_0x1b1498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B149Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1498u;
            // 0x1b149c: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1498) {
            ctx->pc = 0x1B14C0u;
            goto label_1b14c0;
        }
    }
    ctx->pc = 0x1B14A0u;
label_1b14a0:
    // 0x1b14a0: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x1b14a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
    // 0x1b14a4: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1b14a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1b14a8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b14a8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1b14ac: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1b14acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1b14b0: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1b14b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1b14b4: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1b14b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1b14b8: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1b14b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1b14bc: 0x0  nop
    ctx->pc = 0x1b14bcu;
    // NOP
label_1b14c0:
    // 0x1b14c0: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1B14C0u;
    SET_GPR_U32(ctx, 31, 0x1B14C8u);
    ctx->pc = 0x1B14C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B14C0u;
            // 0x1b14c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B14C8u; }
        if (ctx->pc != 0x1B14C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B14C8u; }
        if (ctx->pc != 0x1B14C8u) { return; }
    }
    ctx->pc = 0x1B14C8u;
    // 0x1b14c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b14c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b14cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b14ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b14d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b14d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b14d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b14d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b14d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b14d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b14dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B14DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B14E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B14DCu;
            // 0x1b14e0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1460u: goto label_1b1460;
            case 0x1B1480u: goto label_1b1480;
            case 0x1B14A0u: goto label_1b14a0;
            case 0x1B14C0u: goto label_1b14c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B14E4u;
}
