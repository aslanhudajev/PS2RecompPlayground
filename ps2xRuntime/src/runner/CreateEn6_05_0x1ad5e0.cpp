#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn6_05
// Address: 0x1ad5e0 - 0x1ad89c
void CreateEn6_05_0x1ad5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn6_05_0x1ad5e0");
#endif

    ctx->pc = 0x1ad5e0u;

    // 0x1ad5e0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1ad5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1ad5e4: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1ad5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1ad5e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ad5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ad5ec: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1ad5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1ad5f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ad5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ad5f4: 0x2463d8d0  addiu       $v1, $v1, -0x2730
    ctx->pc = 0x1ad5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957264));
    // 0x1ad5f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ad5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ad5fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ad5fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad600: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ad600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ad604: 0x2442dae0  addiu       $v0, $v0, -0x2520
    ctx->pc = 0x1ad604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957792));
    // 0x1ad608: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ad608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ad60c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ad60cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad610: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1ad610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1ad614: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ad614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad618: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1ad618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1ad61c: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1ad61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1ad620: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1ad620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1ad624: 0x2463e0e0  addiu       $v1, $v1, -0x1F20
    ctx->pc = 0x1ad624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959328));
    // 0x1ad628: 0x2442d8a0  addiu       $v0, $v0, -0x2760
    ctx->pc = 0x1ad628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957216));
    // 0x1ad62c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1ad62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1ad630: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x1ad630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1ad634: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1ad634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1ad638: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1ad638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1ad63c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1AD63Cu;
    SET_GPR_U32(ctx, 31, 0x1AD644u);
    ctx->pc = 0x1AD640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD63Cu;
            // 0x1ad640: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD644u; }
        if (ctx->pc != 0x1AD644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD644u; }
        if (ctx->pc != 0x1AD644u) { return; }
    }
    ctx->pc = 0x1AD644u;
    // 0x1ad644: 0xc060544  jal         func_181510
    ctx->pc = 0x1AD644u;
    SET_GPR_U32(ctx, 31, 0x1AD64Cu);
    ctx->pc = 0x1AD648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD644u;
            // 0x1ad648: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD64Cu; }
        if (ctx->pc != 0x1AD64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD64Cu; }
        if (ctx->pc != 0x1AD64Cu) { return; }
    }
    ctx->pc = 0x1AD64Cu;
    // 0x1ad64c: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1ad64cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad650: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1ad650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1ad654: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1ad654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ad658: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1ad658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ad65c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ad65cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ad660: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1ad660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x1ad664: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ad664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad668: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1ad668u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ad66c: 0x0  nop
    ctx->pc = 0x1ad66cu;
    // NOP
    // 0x1ad670: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1ad670u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1ad674: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ad674u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ad678: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1ad678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ad67c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1ad67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1ad680: 0x12620057  beq         $s3, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x1AD680u;
    {
        const bool branch_taken_0x1ad680 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AD684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD680u;
            // 0x1ad684: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad680) {
            ctx->pc = 0x1AD7E0u;
            goto label_1ad7e0;
        }
    }
    ctx->pc = 0x1AD688u;
    // 0x1ad688: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad68c: 0x1262002c  beq         $s3, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1AD68Cu;
    {
        const bool branch_taken_0x1ad68c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad68c) {
            ctx->pc = 0x1AD740u;
            goto label_1ad740;
        }
    }
    ctx->pc = 0x1AD694u;
    // 0x1ad694: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD694u;
    {
        const bool branch_taken_0x1ad694 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad694) {
            ctx->pc = 0x1AD6A8u;
            goto label_1ad6a8;
        }
    }
    ctx->pc = 0x1AD69Cu;
    // 0x1ad69c: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x1AD69Cu;
    {
        const bool branch_taken_0x1ad69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad69c) {
            ctx->pc = 0x1AD878u;
            goto label_1ad878;
        }
    }
    ctx->pc = 0x1AD6A4u;
    // 0x1ad6a4: 0x0  nop
    ctx->pc = 0x1ad6a4u;
    // NOP
label_1ad6a8:
    // 0x1ad6a8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1AD6A8u;
    SET_GPR_U32(ctx, 31, 0x1AD6B0u);
    ctx->pc = 0x1AD6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD6A8u;
            // 0x1ad6ac: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD6B0u; }
        if (ctx->pc != 0x1AD6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD6B0u; }
        if (ctx->pc != 0x1AD6B0u) { return; }
    }
    ctx->pc = 0x1AD6B0u;
    // 0x1ad6b0: 0x3c023fa9  lui         $v0, 0x3FA9
    ctx->pc = 0x1ad6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16297 << 16));
    // 0x1ad6b4: 0x34439999  ori         $v1, $v0, 0x9999
    ctx->pc = 0x1ad6b4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39321u)));
    // 0x1ad6b8: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x1ad6b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1ad6bc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ad6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ad6c0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ad6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ad6c4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1ad6c4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1ad6c8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1ad6c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1ad6cc: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1AD6CCu;
    SET_GPR_U32(ctx, 31, 0x1AD6D4u);
    ctx->pc = 0x1AD6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD6CCu;
            // 0x1ad6d0: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD6D4u; }
        if (ctx->pc != 0x1AD6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD6D4u; }
        if (ctx->pc != 0x1AD6D4u) { return; }
    }
    ctx->pc = 0x1AD6D4u;
    // 0x1ad6d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad6d8: 0xc040880  jal         func_102200
    ctx->pc = 0x1AD6D8u;
    SET_GPR_U32(ctx, 31, 0x1AD6E0u);
    ctx->pc = 0x1AD6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD6D8u;
            // 0x1ad6dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD6E0u; }
        if (ctx->pc != 0x1AD6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD6E0u; }
        if (ctx->pc != 0x1AD6E0u) { return; }
    }
    ctx->pc = 0x1AD6E0u;
    // 0x1ad6e0: 0x3c033fe0  lui         $v1, 0x3FE0
    ctx->pc = 0x1ad6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16352 << 16));
    // 0x1ad6e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ad6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad6e8: 0xc040850  jal         func_102140
    ctx->pc = 0x1AD6E8u;
    SET_GPR_U32(ctx, 31, 0x1AD6F0u);
    ctx->pc = 0x1AD6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD6E8u;
            // 0x1ad6ec: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD6F0u; }
        if (ctx->pc != 0x1AD6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD6F0u; }
        if (ctx->pc != 0x1AD6F0u) { return; }
    }
    ctx->pc = 0x1AD6F0u;
    // 0x1ad6f0: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1AD6F0u;
    SET_GPR_U32(ctx, 31, 0x1AD6F8u);
    ctx->pc = 0x1AD6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD6F0u;
            // 0x1ad6f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD6F8u; }
        if (ctx->pc != 0x1AD6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD6F8u; }
        if (ctx->pc != 0x1AD6F8u) { return; }
    }
    ctx->pc = 0x1AD6F8u;
    // 0x1ad6f8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1AD6F8u;
    SET_GPR_U32(ctx, 31, 0x1AD700u);
    ctx->pc = 0x1AD6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD6F8u;
            // 0x1ad6fc: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD700u; }
        if (ctx->pc != 0x1AD700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD700u; }
        if (ctx->pc != 0x1AD700u) { return; }
    }
    ctx->pc = 0x1AD700u;
    // 0x1ad700: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1ad700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x1ad704: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ad704u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1ad708: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad70c: 0x0  nop
    ctx->pc = 0x1ad70cu;
    // NOP
    // 0x1ad710: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad714: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1AD714u;
    SET_GPR_U32(ctx, 31, 0x1AD71Cu);
    ctx->pc = 0x1AD718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD714u;
            // 0x1ad718: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD71Cu; }
        if (ctx->pc != 0x1AD71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD71Cu; }
        if (ctx->pc != 0x1AD71Cu) { return; }
    }
    ctx->pc = 0x1AD71Cu;
    // 0x1ad71c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1ad71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x1ad720: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ad720u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1ad724: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad728: 0x0  nop
    ctx->pc = 0x1ad728u;
    // NOP
    // 0x1ad72c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad72cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad730: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1ad730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1ad734: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1AD734u;
    {
        const bool branch_taken_0x1ad734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD734u;
            // 0x1ad738: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad734) {
            ctx->pc = 0x1AD878u;
            goto label_1ad878;
        }
    }
    ctx->pc = 0x1AD73Cu;
    // 0x1ad73c: 0x0  nop
    ctx->pc = 0x1ad73cu;
    // NOP
label_1ad740:
    // 0x1ad740: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x1ad740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
    // 0x1ad744: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ad744u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1ad748: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1AD748u;
    SET_GPR_U32(ctx, 31, 0x1AD750u);
    ctx->pc = 0x1AD74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD748u;
            // 0x1ad74c: 0xae0200d0  sw          $v0, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD750u; }
        if (ctx->pc != 0x1AD750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD750u; }
        if (ctx->pc != 0x1AD750u) { return; }
    }
    ctx->pc = 0x1AD750u;
    // 0x1ad750: 0x3c023fa9  lui         $v0, 0x3FA9
    ctx->pc = 0x1ad750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16297 << 16));
    // 0x1ad754: 0x34439999  ori         $v1, $v0, 0x9999
    ctx->pc = 0x1ad754u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39321u)));
    // 0x1ad758: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x1ad758u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1ad75c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ad75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ad760: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ad760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ad764: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1ad764u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1ad768: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1ad768u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1ad76c: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1AD76Cu;
    SET_GPR_U32(ctx, 31, 0x1AD774u);
    ctx->pc = 0x1AD770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD76Cu;
            // 0x1ad770: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD774u; }
        if (ctx->pc != 0x1AD774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD774u; }
        if (ctx->pc != 0x1AD774u) { return; }
    }
    ctx->pc = 0x1AD774u;
    // 0x1ad774: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad778: 0xc040880  jal         func_102200
    ctx->pc = 0x1AD778u;
    SET_GPR_U32(ctx, 31, 0x1AD780u);
    ctx->pc = 0x1AD77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD778u;
            // 0x1ad77c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD780u; }
        if (ctx->pc != 0x1AD780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD780u; }
        if (ctx->pc != 0x1AD780u) { return; }
    }
    ctx->pc = 0x1AD780u;
    // 0x1ad780: 0x3c033fe0  lui         $v1, 0x3FE0
    ctx->pc = 0x1ad780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16352 << 16));
    // 0x1ad784: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ad784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad788: 0xc040850  jal         func_102140
    ctx->pc = 0x1AD788u;
    SET_GPR_U32(ctx, 31, 0x1AD790u);
    ctx->pc = 0x1AD78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD788u;
            // 0x1ad78c: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD790u; }
        if (ctx->pc != 0x1AD790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD790u; }
        if (ctx->pc != 0x1AD790u) { return; }
    }
    ctx->pc = 0x1AD790u;
    // 0x1ad790: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1AD790u;
    SET_GPR_U32(ctx, 31, 0x1AD798u);
    ctx->pc = 0x1AD794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD790u;
            // 0x1ad794: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD798u; }
        if (ctx->pc != 0x1AD798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD798u; }
        if (ctx->pc != 0x1AD798u) { return; }
    }
    ctx->pc = 0x1AD798u;
    // 0x1ad798: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1AD798u;
    SET_GPR_U32(ctx, 31, 0x1AD7A0u);
    ctx->pc = 0x1AD79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD798u;
            // 0x1ad79c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD7A0u; }
        if (ctx->pc != 0x1AD7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD7A0u; }
        if (ctx->pc != 0x1AD7A0u) { return; }
    }
    ctx->pc = 0x1AD7A0u;
    // 0x1ad7a0: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1ad7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x1ad7a4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ad7a4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1ad7a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad7a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad7ac: 0x0  nop
    ctx->pc = 0x1ad7acu;
    // NOP
    // 0x1ad7b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad7b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad7b4: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1AD7B4u;
    SET_GPR_U32(ctx, 31, 0x1AD7BCu);
    ctx->pc = 0x1AD7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD7B4u;
            // 0x1ad7b8: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD7BCu; }
        if (ctx->pc != 0x1AD7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD7BCu; }
        if (ctx->pc != 0x1AD7BCu) { return; }
    }
    ctx->pc = 0x1AD7BCu;
    // 0x1ad7bc: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1ad7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x1ad7c0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ad7c0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1ad7c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad7c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad7c8: 0x0  nop
    ctx->pc = 0x1ad7c8u;
    // NOP
    // 0x1ad7cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad7ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad7d0: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1ad7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1ad7d4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1AD7D4u;
    {
        const bool branch_taken_0x1ad7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD7D4u;
            // 0x1ad7d8: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad7d4) {
            ctx->pc = 0x1AD878u;
            goto label_1ad878;
        }
    }
    ctx->pc = 0x1AD7DCu;
    // 0x1ad7dc: 0x0  nop
    ctx->pc = 0x1ad7dcu;
    // NOP
label_1ad7e0:
    // 0x1ad7e0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1ad7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1ad7e4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ad7e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1ad7e8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1AD7E8u;
    SET_GPR_U32(ctx, 31, 0x1AD7F0u);
    ctx->pc = 0x1AD7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD7E8u;
            // 0x1ad7ec: 0xae0200d0  sw          $v0, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD7F0u; }
        if (ctx->pc != 0x1AD7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD7F0u; }
        if (ctx->pc != 0x1AD7F0u) { return; }
    }
    ctx->pc = 0x1AD7F0u;
    // 0x1ad7f0: 0x3c023fa9  lui         $v0, 0x3FA9
    ctx->pc = 0x1ad7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16297 << 16));
    // 0x1ad7f4: 0x34439999  ori         $v1, $v0, 0x9999
    ctx->pc = 0x1ad7f4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39321u)));
    // 0x1ad7f8: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x1ad7f8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1ad7fc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ad7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ad800: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ad800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ad804: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1ad804u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1ad808: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1ad808u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1ad80c: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1AD80Cu;
    SET_GPR_U32(ctx, 31, 0x1AD814u);
    ctx->pc = 0x1AD810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD80Cu;
            // 0x1ad810: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD814u; }
        if (ctx->pc != 0x1AD814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD814u; }
        if (ctx->pc != 0x1AD814u) { return; }
    }
    ctx->pc = 0x1AD814u;
    // 0x1ad814: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad818: 0xc040880  jal         func_102200
    ctx->pc = 0x1AD818u;
    SET_GPR_U32(ctx, 31, 0x1AD820u);
    ctx->pc = 0x1AD81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD818u;
            // 0x1ad81c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD820u; }
        if (ctx->pc != 0x1AD820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD820u; }
        if (ctx->pc != 0x1AD820u) { return; }
    }
    ctx->pc = 0x1AD820u;
    // 0x1ad820: 0x3c033fe0  lui         $v1, 0x3FE0
    ctx->pc = 0x1ad820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16352 << 16));
    // 0x1ad824: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ad824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad828: 0xc040850  jal         func_102140
    ctx->pc = 0x1AD828u;
    SET_GPR_U32(ctx, 31, 0x1AD830u);
    ctx->pc = 0x1AD82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD828u;
            // 0x1ad82c: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD830u; }
        if (ctx->pc != 0x1AD830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD830u; }
        if (ctx->pc != 0x1AD830u) { return; }
    }
    ctx->pc = 0x1AD830u;
    // 0x1ad830: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1AD830u;
    SET_GPR_U32(ctx, 31, 0x1AD838u);
    ctx->pc = 0x1AD834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD830u;
            // 0x1ad834: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD838u; }
        if (ctx->pc != 0x1AD838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD838u; }
        if (ctx->pc != 0x1AD838u) { return; }
    }
    ctx->pc = 0x1AD838u;
    // 0x1ad838: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1AD838u;
    SET_GPR_U32(ctx, 31, 0x1AD840u);
    ctx->pc = 0x1AD83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD838u;
            // 0x1ad83c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD840u; }
        if (ctx->pc != 0x1AD840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD840u; }
        if (ctx->pc != 0x1AD840u) { return; }
    }
    ctx->pc = 0x1AD840u;
    // 0x1ad840: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1ad840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x1ad844: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ad844u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1ad848: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad84c: 0x0  nop
    ctx->pc = 0x1ad84cu;
    // NOP
    // 0x1ad850: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad850u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad854: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1AD854u;
    SET_GPR_U32(ctx, 31, 0x1AD85Cu);
    ctx->pc = 0x1AD858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD854u;
            // 0x1ad858: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD85Cu; }
        if (ctx->pc != 0x1AD85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD85Cu; }
        if (ctx->pc != 0x1AD85Cu) { return; }
    }
    ctx->pc = 0x1AD85Cu;
    // 0x1ad85c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1ad85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x1ad860: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ad860u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1ad864: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad868: 0x0  nop
    ctx->pc = 0x1ad868u;
    // NOP
    // 0x1ad86c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad86cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad870: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1ad870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1ad874: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1ad874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_1ad878:
    // 0x1ad878: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1AD878u;
    SET_GPR_U32(ctx, 31, 0x1AD880u);
    ctx->pc = 0x1AD87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD878u;
            // 0x1ad87c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD880u; }
        if (ctx->pc != 0x1AD880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD880u; }
        if (ctx->pc != 0x1AD880u) { return; }
    }
    ctx->pc = 0x1AD880u;
    // 0x1ad880: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ad880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad884: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ad884u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ad888: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ad888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad88c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ad88cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ad890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad894: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD894u;
            // 0x1ad898: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD6A8u: goto label_1ad6a8;
            case 0x1AD740u: goto label_1ad740;
            case 0x1AD7E0u: goto label_1ad7e0;
            case 0x1AD878u: goto label_1ad878;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AD89Cu;
}
