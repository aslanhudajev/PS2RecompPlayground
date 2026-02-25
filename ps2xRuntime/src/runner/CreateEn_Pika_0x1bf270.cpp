#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn_Pika
// Address: 0x1bf270 - 0x1bf57c
void CreateEn_Pika_0x1bf270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn_Pika_0x1bf270");
#endif

    ctx->pc = 0x1bf270u;

label_1bf270:
    // 0x1bf270: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1bf270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_1bf274:
    // 0x1bf274: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x1bf274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
label_1bf278:
    // 0x1bf278: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1bf278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1bf27c:
    // 0x1bf27c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1bf27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
label_1bf280:
    // 0x1bf280: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bf280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1bf284:
    // 0x1bf284: 0x2463f5b0  addiu       $v1, $v1, -0xA50
    ctx->pc = 0x1bf284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964656));
label_1bf288:
    // 0x1bf288: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bf288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1bf28c:
    // 0x1bf28c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1bf28cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bf290:
    // 0x1bf290: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bf290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bf294:
    // 0x1bf294: 0x2442f740  addiu       $v0, $v0, -0x8C0
    ctx->pc = 0x1bf294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965056));
label_1bf298:
    // 0x1bf298: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bf298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bf29c:
    // 0x1bf29c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1bf29cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bf2a0:
    // 0x1bf2a0: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1bf2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
label_1bf2a4:
    // 0x1bf2a4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1bf2a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1bf2a8:
    // 0x1bf2a8: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1bf2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
label_1bf2ac:
    // 0x1bf2ac: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x1bf2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
label_1bf2b0:
    // 0x1bf2b0: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1bf2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
label_1bf2b4:
    // 0x1bf2b4: 0x2463f970  addiu       $v1, $v1, -0x690
    ctx->pc = 0x1bf2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965616));
label_1bf2b8:
    // 0x1bf2b8: 0x2442f580  addiu       $v0, $v0, -0xA80
    ctx->pc = 0x1bf2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964608));
label_1bf2bc:
    // 0x1bf2bc: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1bf2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
label_1bf2c0:
    // 0x1bf2c0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1bf2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1bf2c4:
    // 0x1bf2c4: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1bf2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
label_1bf2c8:
    // 0x1bf2c8: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1bf2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
label_1bf2cc:
    // 0x1bf2cc: 0xc060694  jal         func_181A50
label_1bf2d0:
    if (ctx->pc == 0x1BF2D0u) {
        ctx->pc = 0x1BF2D0u;
            // 0x1bf2d0: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1BF2D4u;
        goto label_1bf2d4;
    }
    ctx->pc = 0x1BF2CCu;
    SET_GPR_U32(ctx, 31, 0x1BF2D4u);
    ctx->pc = 0x1BF2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF2CCu;
            // 0x1bf2d0: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF2D4u; }
        if (ctx->pc != 0x1BF2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF2D4u; }
        if (ctx->pc != 0x1BF2D4u) { return; }
    }
    ctx->pc = 0x1BF2D4u;
label_1bf2d4:
    // 0x1bf2d4: 0xc060544  jal         func_181510
label_1bf2d8:
    if (ctx->pc == 0x1BF2D8u) {
        ctx->pc = 0x1BF2D8u;
            // 0x1bf2d8: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x1BF2DCu;
        goto label_1bf2dc;
    }
    ctx->pc = 0x1BF2D4u;
    SET_GPR_U32(ctx, 31, 0x1BF2DCu);
    ctx->pc = 0x1BF2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF2D4u;
            // 0x1bf2d8: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF2DCu; }
        if (ctx->pc != 0x1BF2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF2DCu; }
        if (ctx->pc != 0x1BF2DCu) { return; }
    }
    ctx->pc = 0x1BF2DCu;
label_1bf2dc:
    // 0x1bf2dc: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1bf2dcu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bf2e0:
    // 0x1bf2e0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1bf2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_1bf2e4:
    // 0x1bf2e4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1bf2e4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf2e8:
    // 0x1bf2e8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1bf2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1bf2ec:
    // 0x1bf2ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1bf2ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1bf2f0:
    // 0x1bf2f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bf2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bf2f4:
    // 0x1bf2f4: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1bf2f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1bf2f8:
    // 0x1bf2f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bf2f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1bf2fc:
    // 0x1bf2fc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1bf2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1bf300:
    // 0x1bf300: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1bf300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_1bf304:
    // 0x1bf304: 0x12620046  beq         $s3, $v0, . + 4 + (0x46 << 2)
label_1bf308:
    if (ctx->pc == 0x1BF308u) {
        ctx->pc = 0x1BF308u;
            // 0x1bf308: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->pc = 0x1BF30Cu;
        goto label_1bf30c;
    }
    ctx->pc = 0x1BF304u;
    {
        const bool branch_taken_0x1bf304 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BF308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF304u;
            // 0x1bf308: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf304) {
            ctx->pc = 0x1BF420u;
            goto label_1bf420;
        }
    }
    ctx->pc = 0x1BF30Cu;
label_1bf30c:
    // 0x1bf30c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_1bf310:
    if (ctx->pc == 0x1BF310u) {
        ctx->pc = 0x1BF314u;
        goto label_1bf314;
    }
    ctx->pc = 0x1BF30Cu;
    {
        const bool branch_taken_0x1bf30c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf30c) {
            ctx->pc = 0x1BF320u;
            goto label_1bf320;
        }
    }
    ctx->pc = 0x1BF314u;
label_1bf314:
    // 0x1bf314: 0x1000008a  b           . + 4 + (0x8A << 2)
label_1bf318:
    if (ctx->pc == 0x1BF318u) {
        ctx->pc = 0x1BF31Cu;
        goto label_1bf31c;
    }
    ctx->pc = 0x1BF314u;
    {
        const bool branch_taken_0x1bf314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf314) {
            ctx->pc = 0x1BF540u;
            goto label_1bf540;
        }
    }
    ctx->pc = 0x1BF31Cu;
label_1bf31c:
    // 0x1bf31c: 0x0  nop
    ctx->pc = 0x1bf31cu;
    // NOP
label_1bf320:
    // 0x1bf320: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1bf320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1bf324:
    // 0x1bf324: 0xc050ba4  jal         func_142E90
label_1bf328:
    if (ctx->pc == 0x1BF328u) {
        ctx->pc = 0x1BF328u;
            // 0x1bf328: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x1BF32Cu;
        goto label_1bf32c;
    }
    ctx->pc = 0x1BF324u;
    SET_GPR_U32(ctx, 31, 0x1BF32Cu);
    ctx->pc = 0x1BF328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF324u;
            // 0x1bf328: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF32Cu; }
        if (ctx->pc != 0x1BF32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF32Cu; }
        if (ctx->pc != 0x1BF32Cu) { return; }
    }
    ctx->pc = 0x1BF32Cu;
label_1bf32c:
    // 0x1bf32c: 0xc040d72  jal         func_1035C8
label_1bf330:
    if (ctx->pc == 0x1BF330u) {
        ctx->pc = 0x1BF330u;
            // 0x1bf330: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1BF334u;
        goto label_1bf334;
    }
    ctx->pc = 0x1BF32Cu;
    SET_GPR_U32(ctx, 31, 0x1BF334u);
    ctx->pc = 0x1BF330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF32Cu;
            // 0x1bf330: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF334u; }
        if (ctx->pc != 0x1BF334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF334u; }
        if (ctx->pc != 0x1BF334u) { return; }
    }
    ctx->pc = 0x1BF334u;
label_1bf334:
    // 0x1bf334: 0x3c043fa9  lui         $a0, 0x3FA9
    ctx->pc = 0x1bf334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16297 << 16));
label_1bf338:
    // 0x1bf338: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1bf338u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
label_1bf33c:
    // 0x1bf33c: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1bf33cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
label_1bf340:
    // 0x1bf340: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1bf340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1bf344:
    // 0x1bf344: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1bf344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1bf348:
    // 0x1bf348: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1bf348u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
label_1bf34c:
    // 0x1bf34c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1bf34cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1bf350:
    // 0x1bf350: 0xc040880  jal         func_102200
label_1bf354:
    if (ctx->pc == 0x1BF354u) {
        ctx->pc = 0x1BF354u;
            // 0x1bf354: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BF358u;
        goto label_1bf358;
    }
    ctx->pc = 0x1BF350u;
    SET_GPR_U32(ctx, 31, 0x1BF358u);
    ctx->pc = 0x1BF354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF350u;
            // 0x1bf354: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF358u; }
        if (ctx->pc != 0x1BF358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF358u; }
        if (ctx->pc != 0x1BF358u) { return; }
    }
    ctx->pc = 0x1BF358u;
label_1bf358:
    // 0x1bf358: 0xc040a74  jal         func_1029D0
label_1bf35c:
    if (ctx->pc == 0x1BF35Cu) {
        ctx->pc = 0x1BF35Cu;
            // 0x1bf35c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BF360u;
        goto label_1bf360;
    }
    ctx->pc = 0x1BF358u;
    SET_GPR_U32(ctx, 31, 0x1BF360u);
    ctx->pc = 0x1BF35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF358u;
            // 0x1bf35c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF360u; }
        if (ctx->pc != 0x1BF360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF360u; }
        if (ctx->pc != 0x1BF360u) { return; }
    }
    ctx->pc = 0x1BF360u;
label_1bf360:
    // 0x1bf360: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1bf360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1bf364:
    // 0x1bf364: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1bf364u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1bf368:
    // 0x1bf368: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bf368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bf36c:
    // 0x1bf36c: 0x0  nop
    ctx->pc = 0x1bf36cu;
    // NOP
label_1bf370:
    // 0x1bf370: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1bf370u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1bf374:
    // 0x1bf374: 0xc050ba4  jal         func_142E90
label_1bf378:
    if (ctx->pc == 0x1BF378u) {
        ctx->pc = 0x1BF378u;
            // 0x1bf378: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->pc = 0x1BF37Cu;
        goto label_1bf37c;
    }
    ctx->pc = 0x1BF374u;
    SET_GPR_U32(ctx, 31, 0x1BF37Cu);
    ctx->pc = 0x1BF378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF374u;
            // 0x1bf378: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF37Cu; }
        if (ctx->pc != 0x1BF37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF37Cu; }
        if (ctx->pc != 0x1BF37Cu) { return; }
    }
    ctx->pc = 0x1BF37Cu;
label_1bf37c:
    // 0x1bf37c: 0xc040d72  jal         func_1035C8
label_1bf380:
    if (ctx->pc == 0x1BF380u) {
        ctx->pc = 0x1BF380u;
            // 0x1bf380: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1BF384u;
        goto label_1bf384;
    }
    ctx->pc = 0x1BF37Cu;
    SET_GPR_U32(ctx, 31, 0x1BF384u);
    ctx->pc = 0x1BF380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF37Cu;
            // 0x1bf380: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF384u; }
        if (ctx->pc != 0x1BF384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF384u; }
        if (ctx->pc != 0x1BF384u) { return; }
    }
    ctx->pc = 0x1BF384u;
label_1bf384:
    // 0x1bf384: 0x3c043fa9  lui         $a0, 0x3FA9
    ctx->pc = 0x1bf384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16297 << 16));
label_1bf388:
    // 0x1bf388: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1bf388u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
label_1bf38c:
    // 0x1bf38c: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1bf38cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
label_1bf390:
    // 0x1bf390: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1bf390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1bf394:
    // 0x1bf394: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1bf394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1bf398:
    // 0x1bf398: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1bf398u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
label_1bf39c:
    // 0x1bf39c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1bf39cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1bf3a0:
    // 0x1bf3a0: 0xc040880  jal         func_102200
label_1bf3a4:
    if (ctx->pc == 0x1BF3A4u) {
        ctx->pc = 0x1BF3A4u;
            // 0x1bf3a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BF3A8u;
        goto label_1bf3a8;
    }
    ctx->pc = 0x1BF3A0u;
    SET_GPR_U32(ctx, 31, 0x1BF3A8u);
    ctx->pc = 0x1BF3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF3A0u;
            // 0x1bf3a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF3A8u; }
        if (ctx->pc != 0x1BF3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF3A8u; }
        if (ctx->pc != 0x1BF3A8u) { return; }
    }
    ctx->pc = 0x1BF3A8u;
label_1bf3a8:
    // 0x1bf3a8: 0xc040a74  jal         func_1029D0
label_1bf3ac:
    if (ctx->pc == 0x1BF3ACu) {
        ctx->pc = 0x1BF3ACu;
            // 0x1bf3ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BF3B0u;
        goto label_1bf3b0;
    }
    ctx->pc = 0x1BF3A8u;
    SET_GPR_U32(ctx, 31, 0x1BF3B0u);
    ctx->pc = 0x1BF3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF3A8u;
            // 0x1bf3ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF3B0u; }
        if (ctx->pc != 0x1BF3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF3B0u; }
        if (ctx->pc != 0x1BF3B0u) { return; }
    }
    ctx->pc = 0x1BF3B0u;
label_1bf3b0:
    // 0x1bf3b0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1bf3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1bf3b4:
    // 0x1bf3b4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1bf3b4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1bf3b8:
    // 0x1bf3b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bf3b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bf3bc:
    // 0x1bf3bc: 0x0  nop
    ctx->pc = 0x1bf3bcu;
    // NOP
label_1bf3c0:
    // 0x1bf3c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1bf3c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1bf3c4:
    // 0x1bf3c4: 0xc050ba4  jal         func_142E90
label_1bf3c8:
    if (ctx->pc == 0x1BF3C8u) {
        ctx->pc = 0x1BF3C8u;
            // 0x1bf3c8: 0xe60000e0  swc1        $f0, 0xE0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
        ctx->pc = 0x1BF3CCu;
        goto label_1bf3cc;
    }
    ctx->pc = 0x1BF3C4u;
    SET_GPR_U32(ctx, 31, 0x1BF3CCu);
    ctx->pc = 0x1BF3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF3C4u;
            // 0x1bf3c8: 0xe60000e0  swc1        $f0, 0xE0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF3CCu; }
        if (ctx->pc != 0x1BF3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF3CCu; }
        if (ctx->pc != 0x1BF3CCu) { return; }
    }
    ctx->pc = 0x1BF3CCu;
label_1bf3cc:
    // 0x1bf3cc: 0xc040d72  jal         func_1035C8
label_1bf3d0:
    if (ctx->pc == 0x1BF3D0u) {
        ctx->pc = 0x1BF3D0u;
            // 0x1bf3d0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1BF3D4u;
        goto label_1bf3d4;
    }
    ctx->pc = 0x1BF3CCu;
    SET_GPR_U32(ctx, 31, 0x1BF3D4u);
    ctx->pc = 0x1BF3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF3CCu;
            // 0x1bf3d0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF3D4u; }
        if (ctx->pc != 0x1BF3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF3D4u; }
        if (ctx->pc != 0x1BF3D4u) { return; }
    }
    ctx->pc = 0x1BF3D4u;
label_1bf3d4:
    // 0x1bf3d4: 0x3c043fa9  lui         $a0, 0x3FA9
    ctx->pc = 0x1bf3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16297 << 16));
label_1bf3d8:
    // 0x1bf3d8: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1bf3d8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
label_1bf3dc:
    // 0x1bf3dc: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1bf3dcu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
label_1bf3e0:
    // 0x1bf3e0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1bf3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1bf3e4:
    // 0x1bf3e4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1bf3e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1bf3e8:
    // 0x1bf3e8: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1bf3e8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
label_1bf3ec:
    // 0x1bf3ec: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1bf3ecu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1bf3f0:
    // 0x1bf3f0: 0xc040880  jal         func_102200
label_1bf3f4:
    if (ctx->pc == 0x1BF3F4u) {
        ctx->pc = 0x1BF3F4u;
            // 0x1bf3f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BF3F8u;
        goto label_1bf3f8;
    }
    ctx->pc = 0x1BF3F0u;
    SET_GPR_U32(ctx, 31, 0x1BF3F8u);
    ctx->pc = 0x1BF3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF3F0u;
            // 0x1bf3f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF3F8u; }
        if (ctx->pc != 0x1BF3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF3F8u; }
        if (ctx->pc != 0x1BF3F8u) { return; }
    }
    ctx->pc = 0x1BF3F8u;
label_1bf3f8:
    // 0x1bf3f8: 0xc040a74  jal         func_1029D0
label_1bf3fc:
    if (ctx->pc == 0x1BF3FCu) {
        ctx->pc = 0x1BF3FCu;
            // 0x1bf3fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BF400u;
        goto label_1bf400;
    }
    ctx->pc = 0x1BF3F8u;
    SET_GPR_U32(ctx, 31, 0x1BF400u);
    ctx->pc = 0x1BF3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF3F8u;
            // 0x1bf3fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF400u; }
        if (ctx->pc != 0x1BF400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF400u; }
        if (ctx->pc != 0x1BF400u) { return; }
    }
    ctx->pc = 0x1BF400u;
label_1bf400:
    // 0x1bf400: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1bf400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1bf404:
    // 0x1bf404: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1bf404u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1bf408:
    // 0x1bf408: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bf408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bf40c:
    // 0x1bf40c: 0x0  nop
    ctx->pc = 0x1bf40cu;
    // NOP
label_1bf410:
    // 0x1bf410: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1bf410u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1bf414:
    // 0x1bf414: 0x1000004a  b           . + 4 + (0x4A << 2)
label_1bf418:
    if (ctx->pc == 0x1BF418u) {
        ctx->pc = 0x1BF418u;
            // 0x1bf418: 0xe60000e8  swc1        $f0, 0xE8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
        ctx->pc = 0x1BF41Cu;
        goto label_1bf41c;
    }
    ctx->pc = 0x1BF414u;
    {
        const bool branch_taken_0x1bf414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF414u;
            // 0x1bf418: 0xe60000e8  swc1        $f0, 0xE8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf414) {
            ctx->pc = 0x1BF540u;
            goto label_1bf540;
        }
    }
    ctx->pc = 0x1BF41Cu;
label_1bf41c:
    // 0x1bf41c: 0x0  nop
    ctx->pc = 0x1bf41cu;
    // NOP
label_1bf420:
    // 0x1bf420: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1bf420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1bf424:
    // 0x1bf424: 0xc050ba4  jal         func_142E90
label_1bf428:
    if (ctx->pc == 0x1BF428u) {
        ctx->pc = 0x1BF428u;
            // 0x1bf428: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x1BF42Cu;
        goto label_1bf42c;
    }
    ctx->pc = 0x1BF424u;
    SET_GPR_U32(ctx, 31, 0x1BF42Cu);
    ctx->pc = 0x1BF428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF424u;
            // 0x1bf428: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF42Cu; }
        if (ctx->pc != 0x1BF42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF42Cu; }
        if (ctx->pc != 0x1BF42Cu) { return; }
    }
    ctx->pc = 0x1BF42Cu;
label_1bf42c:
    // 0x1bf42c: 0xc040d72  jal         func_1035C8
label_1bf430:
    if (ctx->pc == 0x1BF430u) {
        ctx->pc = 0x1BF430u;
            // 0x1bf430: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1BF434u;
        goto label_1bf434;
    }
    ctx->pc = 0x1BF42Cu;
    SET_GPR_U32(ctx, 31, 0x1BF434u);
    ctx->pc = 0x1BF430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF42Cu;
            // 0x1bf430: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF434u; }
        if (ctx->pc != 0x1BF434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF434u; }
        if (ctx->pc != 0x1BF434u) { return; }
    }
    ctx->pc = 0x1BF434u;
label_1bf434:
    // 0x1bf434: 0x3c043fa9  lui         $a0, 0x3FA9
    ctx->pc = 0x1bf434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16297 << 16));
label_1bf438:
    // 0x1bf438: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1bf438u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
label_1bf43c:
    // 0x1bf43c: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1bf43cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
label_1bf440:
    // 0x1bf440: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1bf440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1bf444:
    // 0x1bf444: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1bf444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1bf448:
    // 0x1bf448: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1bf448u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
label_1bf44c:
    // 0x1bf44c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1bf44cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1bf450:
    // 0x1bf450: 0xc040880  jal         func_102200
label_1bf454:
    if (ctx->pc == 0x1BF454u) {
        ctx->pc = 0x1BF454u;
            // 0x1bf454: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BF458u;
        goto label_1bf458;
    }
    ctx->pc = 0x1BF450u;
    SET_GPR_U32(ctx, 31, 0x1BF458u);
    ctx->pc = 0x1BF454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF450u;
            // 0x1bf454: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF458u; }
        if (ctx->pc != 0x1BF458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF458u; }
        if (ctx->pc != 0x1BF458u) { return; }
    }
    ctx->pc = 0x1BF458u;
label_1bf458:
    // 0x1bf458: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1bf458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1bf45c:
    // 0x1bf45c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bf45cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1bf460:
    // 0x1bf460: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1bf460u;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
label_1bf464:
    // 0x1bf464: 0xc040a74  jal         func_1029D0
label_1bf468:
    if (ctx->pc == 0x1BF468u) {
        ctx->pc = 0x1BF468u;
            // 0x1bf468: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1BF46Cu;
        goto label_1bf46c;
    }
    ctx->pc = 0x1BF464u;
    SET_GPR_U32(ctx, 31, 0x1BF46Cu);
    ctx->pc = 0x1BF468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF464u;
            // 0x1bf468: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF46Cu; }
        if (ctx->pc != 0x1BF46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF46Cu; }
        if (ctx->pc != 0x1BF46Cu) { return; }
    }
    ctx->pc = 0x1BF46Cu;
label_1bf46c:
    // 0x1bf46c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1bf46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1bf470:
    // 0x1bf470: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1bf470u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1bf474:
    // 0x1bf474: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bf474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bf478:
    // 0x1bf478: 0x0  nop
    ctx->pc = 0x1bf478u;
    // NOP
label_1bf47c:
    // 0x1bf47c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bf47cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1bf480:
    // 0x1bf480: 0xc050ba4  jal         func_142E90
label_1bf484:
    if (ctx->pc == 0x1BF484u) {
        ctx->pc = 0x1BF484u;
            // 0x1bf484: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->pc = 0x1BF488u;
        goto label_1bf488;
    }
    ctx->pc = 0x1BF480u;
    SET_GPR_U32(ctx, 31, 0x1BF488u);
    ctx->pc = 0x1BF484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF480u;
            // 0x1bf484: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF488u; }
        if (ctx->pc != 0x1BF488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF488u; }
        if (ctx->pc != 0x1BF488u) { return; }
    }
    ctx->pc = 0x1BF488u;
label_1bf488:
    // 0x1bf488: 0xc040d72  jal         func_1035C8
label_1bf48c:
    if (ctx->pc == 0x1BF48Cu) {
        ctx->pc = 0x1BF48Cu;
            // 0x1bf48c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1BF490u;
        goto label_1bf490;
    }
    ctx->pc = 0x1BF488u;
    SET_GPR_U32(ctx, 31, 0x1BF490u);
    ctx->pc = 0x1BF48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF488u;
            // 0x1bf48c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF490u; }
        if (ctx->pc != 0x1BF490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF490u; }
        if (ctx->pc != 0x1BF490u) { return; }
    }
    ctx->pc = 0x1BF490u;
label_1bf490:
    // 0x1bf490: 0x3c043fa9  lui         $a0, 0x3FA9
    ctx->pc = 0x1bf490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16297 << 16));
label_1bf494:
    // 0x1bf494: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1bf494u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
label_1bf498:
    // 0x1bf498: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1bf498u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
label_1bf49c:
    // 0x1bf49c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1bf49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1bf4a0:
    // 0x1bf4a0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1bf4a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1bf4a4:
    // 0x1bf4a4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1bf4a4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
label_1bf4a8:
    // 0x1bf4a8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1bf4a8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1bf4ac:
    // 0x1bf4ac: 0xc040880  jal         func_102200
label_1bf4b0:
    if (ctx->pc == 0x1BF4B0u) {
        ctx->pc = 0x1BF4B0u;
            // 0x1bf4b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BF4B4u;
        goto label_1bf4b4;
    }
    ctx->pc = 0x1BF4ACu;
    SET_GPR_U32(ctx, 31, 0x1BF4B4u);
    ctx->pc = 0x1BF4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF4ACu;
            // 0x1bf4b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF4B4u; }
        if (ctx->pc != 0x1BF4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF4B4u; }
        if (ctx->pc != 0x1BF4B4u) { return; }
    }
    ctx->pc = 0x1BF4B4u;
label_1bf4b4:
    // 0x1bf4b4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1bf4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1bf4b8:
    // 0x1bf4b8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bf4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1bf4bc:
    // 0x1bf4bc: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1bf4bcu;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
label_1bf4c0:
    // 0x1bf4c0: 0xc040a74  jal         func_1029D0
label_1bf4c4:
    if (ctx->pc == 0x1BF4C4u) {
        ctx->pc = 0x1BF4C4u;
            // 0x1bf4c4: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1BF4C8u;
        goto label_1bf4c8;
    }
    ctx->pc = 0x1BF4C0u;
    SET_GPR_U32(ctx, 31, 0x1BF4C8u);
    ctx->pc = 0x1BF4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF4C0u;
            // 0x1bf4c4: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF4C8u; }
        if (ctx->pc != 0x1BF4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF4C8u; }
        if (ctx->pc != 0x1BF4C8u) { return; }
    }
    ctx->pc = 0x1BF4C8u;
label_1bf4c8:
    // 0x1bf4c8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1bf4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1bf4cc:
    // 0x1bf4cc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1bf4ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1bf4d0:
    // 0x1bf4d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bf4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bf4d4:
    // 0x1bf4d4: 0x0  nop
    ctx->pc = 0x1bf4d4u;
    // NOP
label_1bf4d8:
    // 0x1bf4d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bf4d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1bf4dc:
    // 0x1bf4dc: 0xc050ba4  jal         func_142E90
label_1bf4e0:
    if (ctx->pc == 0x1BF4E0u) {
        ctx->pc = 0x1BF4E0u;
            // 0x1bf4e0: 0xe60000e0  swc1        $f0, 0xE0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
        ctx->pc = 0x1BF4E4u;
        goto label_1bf4e4;
    }
    ctx->pc = 0x1BF4DCu;
    SET_GPR_U32(ctx, 31, 0x1BF4E4u);
    ctx->pc = 0x1BF4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF4DCu;
            // 0x1bf4e0: 0xe60000e0  swc1        $f0, 0xE0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF4E4u; }
        if (ctx->pc != 0x1BF4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF4E4u; }
        if (ctx->pc != 0x1BF4E4u) { return; }
    }
    ctx->pc = 0x1BF4E4u;
label_1bf4e4:
    // 0x1bf4e4: 0xc040d72  jal         func_1035C8
label_1bf4e8:
    if (ctx->pc == 0x1BF4E8u) {
        ctx->pc = 0x1BF4E8u;
            // 0x1bf4e8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1BF4ECu;
        goto label_1bf4ec;
    }
    ctx->pc = 0x1BF4E4u;
    SET_GPR_U32(ctx, 31, 0x1BF4ECu);
    ctx->pc = 0x1BF4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF4E4u;
            // 0x1bf4e8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF4ECu; }
        if (ctx->pc != 0x1BF4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF4ECu; }
        if (ctx->pc != 0x1BF4ECu) { return; }
    }
    ctx->pc = 0x1BF4ECu;
label_1bf4ec:
    // 0x1bf4ec: 0x3c043fa9  lui         $a0, 0x3FA9
    ctx->pc = 0x1bf4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16297 << 16));
label_1bf4f0:
    // 0x1bf4f0: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1bf4f0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
label_1bf4f4:
    // 0x1bf4f4: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1bf4f4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
label_1bf4f8:
    // 0x1bf4f8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1bf4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1bf4fc:
    // 0x1bf4fc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1bf4fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1bf500:
    // 0x1bf500: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1bf500u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
label_1bf504:
    // 0x1bf504: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1bf504u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1bf508:
    // 0x1bf508: 0xc040880  jal         func_102200
label_1bf50c:
    if (ctx->pc == 0x1BF50Cu) {
        ctx->pc = 0x1BF50Cu;
            // 0x1bf50c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BF510u;
        goto label_1bf510;
    }
    ctx->pc = 0x1BF508u;
    SET_GPR_U32(ctx, 31, 0x1BF510u);
    ctx->pc = 0x1BF50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF508u;
            // 0x1bf50c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF510u; }
        if (ctx->pc != 0x1BF510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF510u; }
        if (ctx->pc != 0x1BF510u) { return; }
    }
    ctx->pc = 0x1BF510u;
label_1bf510:
    // 0x1bf510: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1bf510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1bf514:
    // 0x1bf514: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bf514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1bf518:
    // 0x1bf518: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1bf518u;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
label_1bf51c:
    // 0x1bf51c: 0xc040a74  jal         func_1029D0
label_1bf520:
    if (ctx->pc == 0x1BF520u) {
        ctx->pc = 0x1BF520u;
            // 0x1bf520: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1BF524u;
        goto label_1bf524;
    }
    ctx->pc = 0x1BF51Cu;
    SET_GPR_U32(ctx, 31, 0x1BF524u);
    ctx->pc = 0x1BF520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF51Cu;
            // 0x1bf520: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF524u; }
        if (ctx->pc != 0x1BF524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF524u; }
        if (ctx->pc != 0x1BF524u) { return; }
    }
    ctx->pc = 0x1BF524u;
label_1bf524:
    // 0x1bf524: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1bf524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1bf528:
    // 0x1bf528: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1bf528u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1bf52c:
    // 0x1bf52c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bf52cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bf530:
    // 0x1bf530: 0x0  nop
    ctx->pc = 0x1bf530u;
    // NOP
label_1bf534:
    // 0x1bf534: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bf534u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1bf538:
    // 0x1bf538: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x1bf538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
label_1bf53c:
    // 0x1bf53c: 0x0  nop
    ctx->pc = 0x1bf53cu;
    // NOP
label_1bf540:
    // 0x1bf540: 0xc05ba20  jal         func_16E880
label_1bf544:
    if (ctx->pc == 0x1BF544u) {
        ctx->pc = 0x1BF544u;
            // 0x1bf544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BF548u;
        goto label_1bf548;
    }
    ctx->pc = 0x1BF540u;
    SET_GPR_U32(ctx, 31, 0x1BF548u);
    ctx->pc = 0x1BF544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF540u;
            // 0x1bf544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF548u; }
        if (ctx->pc != 0x1BF548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF548u; }
        if (ctx->pc != 0x1BF548u) { return; }
    }
    ctx->pc = 0x1BF548u;
label_1bf548:
    // 0x1bf548: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1bf548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1bf54c:
    // 0x1bf54c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bf54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bf550:
    // 0x1bf550: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x1bf550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
label_1bf554:
    // 0x1bf554: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x1bf554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
label_1bf558:
    // 0x1bf558: 0x40f809  jalr        $v0
label_1bf55c:
    if (ctx->pc == 0x1BF55Cu) {
        ctx->pc = 0x1BF560u;
        goto label_1bf560;
    }
    ctx->pc = 0x1BF558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BF560u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BF270u: goto label_1bf270;
            case 0x1BF274u: goto label_1bf274;
            case 0x1BF278u: goto label_1bf278;
            case 0x1BF27Cu: goto label_1bf27c;
            case 0x1BF280u: goto label_1bf280;
            case 0x1BF284u: goto label_1bf284;
            case 0x1BF288u: goto label_1bf288;
            case 0x1BF28Cu: goto label_1bf28c;
            case 0x1BF290u: goto label_1bf290;
            case 0x1BF294u: goto label_1bf294;
            case 0x1BF298u: goto label_1bf298;
            case 0x1BF29Cu: goto label_1bf29c;
            case 0x1BF2A0u: goto label_1bf2a0;
            case 0x1BF2A4u: goto label_1bf2a4;
            case 0x1BF2A8u: goto label_1bf2a8;
            case 0x1BF2ACu: goto label_1bf2ac;
            case 0x1BF2B0u: goto label_1bf2b0;
            case 0x1BF2B4u: goto label_1bf2b4;
            case 0x1BF2B8u: goto label_1bf2b8;
            case 0x1BF2BCu: goto label_1bf2bc;
            case 0x1BF2C0u: goto label_1bf2c0;
            case 0x1BF2C4u: goto label_1bf2c4;
            case 0x1BF2C8u: goto label_1bf2c8;
            case 0x1BF2CCu: goto label_1bf2cc;
            case 0x1BF2D0u: goto label_1bf2d0;
            case 0x1BF2D4u: goto label_1bf2d4;
            case 0x1BF2D8u: goto label_1bf2d8;
            case 0x1BF2DCu: goto label_1bf2dc;
            case 0x1BF2E0u: goto label_1bf2e0;
            case 0x1BF2E4u: goto label_1bf2e4;
            case 0x1BF2E8u: goto label_1bf2e8;
            case 0x1BF2ECu: goto label_1bf2ec;
            case 0x1BF2F0u: goto label_1bf2f0;
            case 0x1BF2F4u: goto label_1bf2f4;
            case 0x1BF2F8u: goto label_1bf2f8;
            case 0x1BF2FCu: goto label_1bf2fc;
            case 0x1BF300u: goto label_1bf300;
            case 0x1BF304u: goto label_1bf304;
            case 0x1BF308u: goto label_1bf308;
            case 0x1BF30Cu: goto label_1bf30c;
            case 0x1BF310u: goto label_1bf310;
            case 0x1BF314u: goto label_1bf314;
            case 0x1BF318u: goto label_1bf318;
            case 0x1BF31Cu: goto label_1bf31c;
            case 0x1BF320u: goto label_1bf320;
            case 0x1BF324u: goto label_1bf324;
            case 0x1BF328u: goto label_1bf328;
            case 0x1BF32Cu: goto label_1bf32c;
            case 0x1BF330u: goto label_1bf330;
            case 0x1BF334u: goto label_1bf334;
            case 0x1BF338u: goto label_1bf338;
            case 0x1BF33Cu: goto label_1bf33c;
            case 0x1BF340u: goto label_1bf340;
            case 0x1BF344u: goto label_1bf344;
            case 0x1BF348u: goto label_1bf348;
            case 0x1BF34Cu: goto label_1bf34c;
            case 0x1BF350u: goto label_1bf350;
            case 0x1BF354u: goto label_1bf354;
            case 0x1BF358u: goto label_1bf358;
            case 0x1BF35Cu: goto label_1bf35c;
            case 0x1BF360u: goto label_1bf360;
            case 0x1BF364u: goto label_1bf364;
            case 0x1BF368u: goto label_1bf368;
            case 0x1BF36Cu: goto label_1bf36c;
            case 0x1BF370u: goto label_1bf370;
            case 0x1BF374u: goto label_1bf374;
            case 0x1BF378u: goto label_1bf378;
            case 0x1BF37Cu: goto label_1bf37c;
            case 0x1BF380u: goto label_1bf380;
            case 0x1BF384u: goto label_1bf384;
            case 0x1BF388u: goto label_1bf388;
            case 0x1BF38Cu: goto label_1bf38c;
            case 0x1BF390u: goto label_1bf390;
            case 0x1BF394u: goto label_1bf394;
            case 0x1BF398u: goto label_1bf398;
            case 0x1BF39Cu: goto label_1bf39c;
            case 0x1BF3A0u: goto label_1bf3a0;
            case 0x1BF3A4u: goto label_1bf3a4;
            case 0x1BF3A8u: goto label_1bf3a8;
            case 0x1BF3ACu: goto label_1bf3ac;
            case 0x1BF3B0u: goto label_1bf3b0;
            case 0x1BF3B4u: goto label_1bf3b4;
            case 0x1BF3B8u: goto label_1bf3b8;
            case 0x1BF3BCu: goto label_1bf3bc;
            case 0x1BF3C0u: goto label_1bf3c0;
            case 0x1BF3C4u: goto label_1bf3c4;
            case 0x1BF3C8u: goto label_1bf3c8;
            case 0x1BF3CCu: goto label_1bf3cc;
            case 0x1BF3D0u: goto label_1bf3d0;
            case 0x1BF3D4u: goto label_1bf3d4;
            case 0x1BF3D8u: goto label_1bf3d8;
            case 0x1BF3DCu: goto label_1bf3dc;
            case 0x1BF3E0u: goto label_1bf3e0;
            case 0x1BF3E4u: goto label_1bf3e4;
            case 0x1BF3E8u: goto label_1bf3e8;
            case 0x1BF3ECu: goto label_1bf3ec;
            case 0x1BF3F0u: goto label_1bf3f0;
            case 0x1BF3F4u: goto label_1bf3f4;
            case 0x1BF3F8u: goto label_1bf3f8;
            case 0x1BF3FCu: goto label_1bf3fc;
            case 0x1BF400u: goto label_1bf400;
            case 0x1BF404u: goto label_1bf404;
            case 0x1BF408u: goto label_1bf408;
            case 0x1BF40Cu: goto label_1bf40c;
            case 0x1BF410u: goto label_1bf410;
            case 0x1BF414u: goto label_1bf414;
            case 0x1BF418u: goto label_1bf418;
            case 0x1BF41Cu: goto label_1bf41c;
            case 0x1BF420u: goto label_1bf420;
            case 0x1BF424u: goto label_1bf424;
            case 0x1BF428u: goto label_1bf428;
            case 0x1BF42Cu: goto label_1bf42c;
            case 0x1BF430u: goto label_1bf430;
            case 0x1BF434u: goto label_1bf434;
            case 0x1BF438u: goto label_1bf438;
            case 0x1BF43Cu: goto label_1bf43c;
            case 0x1BF440u: goto label_1bf440;
            case 0x1BF444u: goto label_1bf444;
            case 0x1BF448u: goto label_1bf448;
            case 0x1BF44Cu: goto label_1bf44c;
            case 0x1BF450u: goto label_1bf450;
            case 0x1BF454u: goto label_1bf454;
            case 0x1BF458u: goto label_1bf458;
            case 0x1BF45Cu: goto label_1bf45c;
            case 0x1BF460u: goto label_1bf460;
            case 0x1BF464u: goto label_1bf464;
            case 0x1BF468u: goto label_1bf468;
            case 0x1BF46Cu: goto label_1bf46c;
            case 0x1BF470u: goto label_1bf470;
            case 0x1BF474u: goto label_1bf474;
            case 0x1BF478u: goto label_1bf478;
            case 0x1BF47Cu: goto label_1bf47c;
            case 0x1BF480u: goto label_1bf480;
            case 0x1BF484u: goto label_1bf484;
            case 0x1BF488u: goto label_1bf488;
            case 0x1BF48Cu: goto label_1bf48c;
            case 0x1BF490u: goto label_1bf490;
            case 0x1BF494u: goto label_1bf494;
            case 0x1BF498u: goto label_1bf498;
            case 0x1BF49Cu: goto label_1bf49c;
            case 0x1BF4A0u: goto label_1bf4a0;
            case 0x1BF4A4u: goto label_1bf4a4;
            case 0x1BF4A8u: goto label_1bf4a8;
            case 0x1BF4ACu: goto label_1bf4ac;
            case 0x1BF4B0u: goto label_1bf4b0;
            case 0x1BF4B4u: goto label_1bf4b4;
            case 0x1BF4B8u: goto label_1bf4b8;
            case 0x1BF4BCu: goto label_1bf4bc;
            case 0x1BF4C0u: goto label_1bf4c0;
            case 0x1BF4C4u: goto label_1bf4c4;
            case 0x1BF4C8u: goto label_1bf4c8;
            case 0x1BF4CCu: goto label_1bf4cc;
            case 0x1BF4D0u: goto label_1bf4d0;
            case 0x1BF4D4u: goto label_1bf4d4;
            case 0x1BF4D8u: goto label_1bf4d8;
            case 0x1BF4DCu: goto label_1bf4dc;
            case 0x1BF4E0u: goto label_1bf4e0;
            case 0x1BF4E4u: goto label_1bf4e4;
            case 0x1BF4E8u: goto label_1bf4e8;
            case 0x1BF4ECu: goto label_1bf4ec;
            case 0x1BF4F0u: goto label_1bf4f0;
            case 0x1BF4F4u: goto label_1bf4f4;
            case 0x1BF4F8u: goto label_1bf4f8;
            case 0x1BF4FCu: goto label_1bf4fc;
            case 0x1BF500u: goto label_1bf500;
            case 0x1BF504u: goto label_1bf504;
            case 0x1BF508u: goto label_1bf508;
            case 0x1BF50Cu: goto label_1bf50c;
            case 0x1BF510u: goto label_1bf510;
            case 0x1BF514u: goto label_1bf514;
            case 0x1BF518u: goto label_1bf518;
            case 0x1BF51Cu: goto label_1bf51c;
            case 0x1BF520u: goto label_1bf520;
            case 0x1BF524u: goto label_1bf524;
            case 0x1BF528u: goto label_1bf528;
            case 0x1BF52Cu: goto label_1bf52c;
            case 0x1BF530u: goto label_1bf530;
            case 0x1BF534u: goto label_1bf534;
            case 0x1BF538u: goto label_1bf538;
            case 0x1BF53Cu: goto label_1bf53c;
            case 0x1BF540u: goto label_1bf540;
            case 0x1BF544u: goto label_1bf544;
            case 0x1BF548u: goto label_1bf548;
            case 0x1BF54Cu: goto label_1bf54c;
            case 0x1BF550u: goto label_1bf550;
            case 0x1BF554u: goto label_1bf554;
            case 0x1BF558u: goto label_1bf558;
            case 0x1BF55Cu: goto label_1bf55c;
            case 0x1BF560u: goto label_1bf560;
            case 0x1BF564u: goto label_1bf564;
            case 0x1BF568u: goto label_1bf568;
            case 0x1BF56Cu: goto label_1bf56c;
            case 0x1BF570u: goto label_1bf570;
            case 0x1BF574u: goto label_1bf574;
            case 0x1BF578u: goto label_1bf578;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BF560u; }
            if (ctx->pc != 0x1BF560u) { return; }
        }
    }
    ctx->pc = 0x1BF560u;
label_1bf560:
    // 0x1bf560: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1bf560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1bf564:
    // 0x1bf564: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bf564u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bf568:
    // 0x1bf568: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bf568u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bf56c:
    // 0x1bf56c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bf56cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bf570:
    // 0x1bf570: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bf570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf574:
    // 0x1bf574: 0x3e00008  jr          $ra
label_1bf578:
    if (ctx->pc == 0x1BF578u) {
        ctx->pc = 0x1BF578u;
            // 0x1bf578: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x1BF57Cu;
        goto label_fallthrough_0x1bf574;
    }
    ctx->pc = 0x1BF574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF574u;
            // 0x1bf578: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BF270u: goto label_1bf270;
            case 0x1BF274u: goto label_1bf274;
            case 0x1BF278u: goto label_1bf278;
            case 0x1BF27Cu: goto label_1bf27c;
            case 0x1BF280u: goto label_1bf280;
            case 0x1BF284u: goto label_1bf284;
            case 0x1BF288u: goto label_1bf288;
            case 0x1BF28Cu: goto label_1bf28c;
            case 0x1BF290u: goto label_1bf290;
            case 0x1BF294u: goto label_1bf294;
            case 0x1BF298u: goto label_1bf298;
            case 0x1BF29Cu: goto label_1bf29c;
            case 0x1BF2A0u: goto label_1bf2a0;
            case 0x1BF2A4u: goto label_1bf2a4;
            case 0x1BF2A8u: goto label_1bf2a8;
            case 0x1BF2ACu: goto label_1bf2ac;
            case 0x1BF2B0u: goto label_1bf2b0;
            case 0x1BF2B4u: goto label_1bf2b4;
            case 0x1BF2B8u: goto label_1bf2b8;
            case 0x1BF2BCu: goto label_1bf2bc;
            case 0x1BF2C0u: goto label_1bf2c0;
            case 0x1BF2C4u: goto label_1bf2c4;
            case 0x1BF2C8u: goto label_1bf2c8;
            case 0x1BF2CCu: goto label_1bf2cc;
            case 0x1BF2D0u: goto label_1bf2d0;
            case 0x1BF2D4u: goto label_1bf2d4;
            case 0x1BF2D8u: goto label_1bf2d8;
            case 0x1BF2DCu: goto label_1bf2dc;
            case 0x1BF2E0u: goto label_1bf2e0;
            case 0x1BF2E4u: goto label_1bf2e4;
            case 0x1BF2E8u: goto label_1bf2e8;
            case 0x1BF2ECu: goto label_1bf2ec;
            case 0x1BF2F0u: goto label_1bf2f0;
            case 0x1BF2F4u: goto label_1bf2f4;
            case 0x1BF2F8u: goto label_1bf2f8;
            case 0x1BF2FCu: goto label_1bf2fc;
            case 0x1BF300u: goto label_1bf300;
            case 0x1BF304u: goto label_1bf304;
            case 0x1BF308u: goto label_1bf308;
            case 0x1BF30Cu: goto label_1bf30c;
            case 0x1BF310u: goto label_1bf310;
            case 0x1BF314u: goto label_1bf314;
            case 0x1BF318u: goto label_1bf318;
            case 0x1BF31Cu: goto label_1bf31c;
            case 0x1BF320u: goto label_1bf320;
            case 0x1BF324u: goto label_1bf324;
            case 0x1BF328u: goto label_1bf328;
            case 0x1BF32Cu: goto label_1bf32c;
            case 0x1BF330u: goto label_1bf330;
            case 0x1BF334u: goto label_1bf334;
            case 0x1BF338u: goto label_1bf338;
            case 0x1BF33Cu: goto label_1bf33c;
            case 0x1BF340u: goto label_1bf340;
            case 0x1BF344u: goto label_1bf344;
            case 0x1BF348u: goto label_1bf348;
            case 0x1BF34Cu: goto label_1bf34c;
            case 0x1BF350u: goto label_1bf350;
            case 0x1BF354u: goto label_1bf354;
            case 0x1BF358u: goto label_1bf358;
            case 0x1BF35Cu: goto label_1bf35c;
            case 0x1BF360u: goto label_1bf360;
            case 0x1BF364u: goto label_1bf364;
            case 0x1BF368u: goto label_1bf368;
            case 0x1BF36Cu: goto label_1bf36c;
            case 0x1BF370u: goto label_1bf370;
            case 0x1BF374u: goto label_1bf374;
            case 0x1BF378u: goto label_1bf378;
            case 0x1BF37Cu: goto label_1bf37c;
            case 0x1BF380u: goto label_1bf380;
            case 0x1BF384u: goto label_1bf384;
            case 0x1BF388u: goto label_1bf388;
            case 0x1BF38Cu: goto label_1bf38c;
            case 0x1BF390u: goto label_1bf390;
            case 0x1BF394u: goto label_1bf394;
            case 0x1BF398u: goto label_1bf398;
            case 0x1BF39Cu: goto label_1bf39c;
            case 0x1BF3A0u: goto label_1bf3a0;
            case 0x1BF3A4u: goto label_1bf3a4;
            case 0x1BF3A8u: goto label_1bf3a8;
            case 0x1BF3ACu: goto label_1bf3ac;
            case 0x1BF3B0u: goto label_1bf3b0;
            case 0x1BF3B4u: goto label_1bf3b4;
            case 0x1BF3B8u: goto label_1bf3b8;
            case 0x1BF3BCu: goto label_1bf3bc;
            case 0x1BF3C0u: goto label_1bf3c0;
            case 0x1BF3C4u: goto label_1bf3c4;
            case 0x1BF3C8u: goto label_1bf3c8;
            case 0x1BF3CCu: goto label_1bf3cc;
            case 0x1BF3D0u: goto label_1bf3d0;
            case 0x1BF3D4u: goto label_1bf3d4;
            case 0x1BF3D8u: goto label_1bf3d8;
            case 0x1BF3DCu: goto label_1bf3dc;
            case 0x1BF3E0u: goto label_1bf3e0;
            case 0x1BF3E4u: goto label_1bf3e4;
            case 0x1BF3E8u: goto label_1bf3e8;
            case 0x1BF3ECu: goto label_1bf3ec;
            case 0x1BF3F0u: goto label_1bf3f0;
            case 0x1BF3F4u: goto label_1bf3f4;
            case 0x1BF3F8u: goto label_1bf3f8;
            case 0x1BF3FCu: goto label_1bf3fc;
            case 0x1BF400u: goto label_1bf400;
            case 0x1BF404u: goto label_1bf404;
            case 0x1BF408u: goto label_1bf408;
            case 0x1BF40Cu: goto label_1bf40c;
            case 0x1BF410u: goto label_1bf410;
            case 0x1BF414u: goto label_1bf414;
            case 0x1BF418u: goto label_1bf418;
            case 0x1BF41Cu: goto label_1bf41c;
            case 0x1BF420u: goto label_1bf420;
            case 0x1BF424u: goto label_1bf424;
            case 0x1BF428u: goto label_1bf428;
            case 0x1BF42Cu: goto label_1bf42c;
            case 0x1BF430u: goto label_1bf430;
            case 0x1BF434u: goto label_1bf434;
            case 0x1BF438u: goto label_1bf438;
            case 0x1BF43Cu: goto label_1bf43c;
            case 0x1BF440u: goto label_1bf440;
            case 0x1BF444u: goto label_1bf444;
            case 0x1BF448u: goto label_1bf448;
            case 0x1BF44Cu: goto label_1bf44c;
            case 0x1BF450u: goto label_1bf450;
            case 0x1BF454u: goto label_1bf454;
            case 0x1BF458u: goto label_1bf458;
            case 0x1BF45Cu: goto label_1bf45c;
            case 0x1BF460u: goto label_1bf460;
            case 0x1BF464u: goto label_1bf464;
            case 0x1BF468u: goto label_1bf468;
            case 0x1BF46Cu: goto label_1bf46c;
            case 0x1BF470u: goto label_1bf470;
            case 0x1BF474u: goto label_1bf474;
            case 0x1BF478u: goto label_1bf478;
            case 0x1BF47Cu: goto label_1bf47c;
            case 0x1BF480u: goto label_1bf480;
            case 0x1BF484u: goto label_1bf484;
            case 0x1BF488u: goto label_1bf488;
            case 0x1BF48Cu: goto label_1bf48c;
            case 0x1BF490u: goto label_1bf490;
            case 0x1BF494u: goto label_1bf494;
            case 0x1BF498u: goto label_1bf498;
            case 0x1BF49Cu: goto label_1bf49c;
            case 0x1BF4A0u: goto label_1bf4a0;
            case 0x1BF4A4u: goto label_1bf4a4;
            case 0x1BF4A8u: goto label_1bf4a8;
            case 0x1BF4ACu: goto label_1bf4ac;
            case 0x1BF4B0u: goto label_1bf4b0;
            case 0x1BF4B4u: goto label_1bf4b4;
            case 0x1BF4B8u: goto label_1bf4b8;
            case 0x1BF4BCu: goto label_1bf4bc;
            case 0x1BF4C0u: goto label_1bf4c0;
            case 0x1BF4C4u: goto label_1bf4c4;
            case 0x1BF4C8u: goto label_1bf4c8;
            case 0x1BF4CCu: goto label_1bf4cc;
            case 0x1BF4D0u: goto label_1bf4d0;
            case 0x1BF4D4u: goto label_1bf4d4;
            case 0x1BF4D8u: goto label_1bf4d8;
            case 0x1BF4DCu: goto label_1bf4dc;
            case 0x1BF4E0u: goto label_1bf4e0;
            case 0x1BF4E4u: goto label_1bf4e4;
            case 0x1BF4E8u: goto label_1bf4e8;
            case 0x1BF4ECu: goto label_1bf4ec;
            case 0x1BF4F0u: goto label_1bf4f0;
            case 0x1BF4F4u: goto label_1bf4f4;
            case 0x1BF4F8u: goto label_1bf4f8;
            case 0x1BF4FCu: goto label_1bf4fc;
            case 0x1BF500u: goto label_1bf500;
            case 0x1BF504u: goto label_1bf504;
            case 0x1BF508u: goto label_1bf508;
            case 0x1BF50Cu: goto label_1bf50c;
            case 0x1BF510u: goto label_1bf510;
            case 0x1BF514u: goto label_1bf514;
            case 0x1BF518u: goto label_1bf518;
            case 0x1BF51Cu: goto label_1bf51c;
            case 0x1BF520u: goto label_1bf520;
            case 0x1BF524u: goto label_1bf524;
            case 0x1BF528u: goto label_1bf528;
            case 0x1BF52Cu: goto label_1bf52c;
            case 0x1BF530u: goto label_1bf530;
            case 0x1BF534u: goto label_1bf534;
            case 0x1BF538u: goto label_1bf538;
            case 0x1BF53Cu: goto label_1bf53c;
            case 0x1BF540u: goto label_1bf540;
            case 0x1BF544u: goto label_1bf544;
            case 0x1BF548u: goto label_1bf548;
            case 0x1BF54Cu: goto label_1bf54c;
            case 0x1BF550u: goto label_1bf550;
            case 0x1BF554u: goto label_1bf554;
            case 0x1BF558u: goto label_1bf558;
            case 0x1BF55Cu: goto label_1bf55c;
            case 0x1BF560u: goto label_1bf560;
            case 0x1BF564u: goto label_1bf564;
            case 0x1BF568u: goto label_1bf568;
            case 0x1BF56Cu: goto label_1bf56c;
            case 0x1BF570u: goto label_1bf570;
            case 0x1BF574u: goto label_1bf574;
            case 0x1BF578u: goto label_1bf578;
            default: break;
        }
        return;
    }
label_fallthrough_0x1bf574:
    ctx->pc = 0x1BF57Cu;
}
