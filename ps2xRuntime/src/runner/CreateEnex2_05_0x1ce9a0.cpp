#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEnex2_05
// Address: 0x1ce9a0 - 0x1ceb4c
void CreateEnex2_05_0x1ce9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEnex2_05_0x1ce9a0");
#endif

    ctx->pc = 0x1ce9a0u;

    // 0x1ce9a0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1ce9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1ce9a4: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1ce9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1ce9a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ce9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ce9ac: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1ce9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1ce9b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ce9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ce9b4: 0x2463eb80  addiu       $v1, $v1, -0x1480
    ctx->pc = 0x1ce9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962048));
    // 0x1ce9b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ce9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ce9bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ce9bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce9c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ce9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ce9c4: 0x2442edd0  addiu       $v0, $v0, -0x1230
    ctx->pc = 0x1ce9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962640));
    // 0x1ce9c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ce9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ce9cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ce9ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce9d0: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1ce9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1ce9d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ce9d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce9d8: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1ce9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1ce9dc: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1ce9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1ce9e0: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1ce9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1ce9e4: 0x2463f590  addiu       $v1, $v1, -0xA70
    ctx->pc = 0x1ce9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964624));
    // 0x1ce9e8: 0x2442eb50  addiu       $v0, $v0, -0x14B0
    ctx->pc = 0x1ce9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962000));
    // 0x1ce9ec: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1ce9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1ce9f0: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x1ce9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1ce9f4: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1ce9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1ce9f8: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1ce9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1ce9fc: 0xc060694  jal         func_181A50
    ctx->pc = 0x1CE9FCu;
    SET_GPR_U32(ctx, 31, 0x1CEA04u);
    ctx->pc = 0x1CEA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE9FCu;
            // 0x1cea00: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA04u; }
        if (ctx->pc != 0x1CEA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA04u; }
        if (ctx->pc != 0x1CEA04u) { return; }
    }
    ctx->pc = 0x1CEA04u;
    // 0x1cea04: 0xc060544  jal         func_181510
    ctx->pc = 0x1CEA04u;
    SET_GPR_U32(ctx, 31, 0x1CEA0Cu);
    ctx->pc = 0x1CEA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEA04u;
            // 0x1cea08: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA0Cu; }
        if (ctx->pc != 0x1CEA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA0Cu; }
        if (ctx->pc != 0x1CEA0Cu) { return; }
    }
    ctx->pc = 0x1CEA0Cu;
    // 0x1cea0c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1cea0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1cea10: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1cea10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1cea14: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1cea14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cea18: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1cea18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1cea1c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1cea1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1cea20: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1cea20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cea24: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1cea24u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cea28: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1cea28u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cea2c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1cea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cea30: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cea30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1cea34: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1cea34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1cea38: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cea38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1cea3c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x1cea3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1cea40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cea40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cea44: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1cea44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1cea48: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1cea48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1cea4c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1cea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cea50: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1cea50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1cea54: 0x1262001e  beq         $s3, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1CEA54u;
    {
        const bool branch_taken_0x1cea54 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CEA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEA54u;
            // 0x1cea58: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea54) {
            ctx->pc = 0x1CEAD0u;
            goto label_1cead0;
        }
    }
    ctx->pc = 0x1CEA5Cu;
    // 0x1cea5c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1cea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cea60: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CEA60u;
    {
        const bool branch_taken_0x1cea60 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cea60) {
            ctx->pc = 0x1CEA70u;
            goto label_1cea70;
        }
    }
    ctx->pc = 0x1CEA68u;
    // 0x1cea68: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1CEA68u;
    {
        const bool branch_taken_0x1cea68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cea68) {
            ctx->pc = 0x1CEB28u;
            goto label_1ceb28;
        }
    }
    ctx->pc = 0x1CEA70u;
label_1cea70:
    // 0x1cea70: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1CEA70u;
    SET_GPR_U32(ctx, 31, 0x1CEA78u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA78u; }
        if (ctx->pc != 0x1CEA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA78u; }
        if (ctx->pc != 0x1CEA78u) { return; }
    }
    ctx->pc = 0x1CEA78u;
    // 0x1cea78: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1CEA78u;
    SET_GPR_U32(ctx, 31, 0x1CEA80u);
    ctx->pc = 0x1CEA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEA78u;
            // 0x1cea7c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA80u; }
        if (ctx->pc != 0x1CEA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA80u; }
        if (ctx->pc != 0x1CEA80u) { return; }
    }
    ctx->pc = 0x1CEA80u;
    // 0x1cea80: 0x3c033fe0  lui         $v1, 0x3FE0
    ctx->pc = 0x1cea80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16352 << 16));
    // 0x1cea84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cea84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea88: 0xc040880  jal         func_102200
    ctx->pc = 0x1CEA88u;
    SET_GPR_U32(ctx, 31, 0x1CEA90u);
    ctx->pc = 0x1CEA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEA88u;
            // 0x1cea8c: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA90u; }
        if (ctx->pc != 0x1CEA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA90u; }
        if (ctx->pc != 0x1CEA90u) { return; }
    }
    ctx->pc = 0x1CEA90u;
    // 0x1cea90: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1CEA90u;
    SET_GPR_U32(ctx, 31, 0x1CEA98u);
    ctx->pc = 0x1CEA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEA90u;
            // 0x1cea94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA98u; }
        if (ctx->pc != 0x1CEA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA98u; }
        if (ctx->pc != 0x1CEA98u) { return; }
    }
    ctx->pc = 0x1CEA98u;
    // 0x1cea98: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1CEA98u;
    SET_GPR_U32(ctx, 31, 0x1CEAA0u);
    ctx->pc = 0x1CEA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEA98u;
            // 0x1cea9c: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEAA0u; }
        if (ctx->pc != 0x1CEAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEAA0u; }
        if (ctx->pc != 0x1CEAA0u) { return; }
    }
    ctx->pc = 0x1CEAA0u;
    // 0x1ceaa0: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1ceaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1ceaa4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1ceaa4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1ceaa8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ceaa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ceaac: 0x0  nop
    ctx->pc = 0x1ceaacu;
    // NOP
    // 0x1ceab0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ceab0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ceab4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ceab4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ceab8: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1ceab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1ceabc: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1ceabcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1ceac0: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1ceac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1ceac4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1CEAC4u;
    {
        const bool branch_taken_0x1ceac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEAC4u;
            // 0x1ceac8: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceac4) {
            ctx->pc = 0x1CEB28u;
            goto label_1ceb28;
        }
    }
    ctx->pc = 0x1CEACCu;
    // 0x1ceacc: 0x0  nop
    ctx->pc = 0x1ceaccu;
    // NOP
label_1cead0:
    // 0x1cead0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1CEAD0u;
    SET_GPR_U32(ctx, 31, 0x1CEAD8u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEAD8u; }
        if (ctx->pc != 0x1CEAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEAD8u; }
        if (ctx->pc != 0x1CEAD8u) { return; }
    }
    ctx->pc = 0x1CEAD8u;
    // 0x1cead8: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1CEAD8u;
    SET_GPR_U32(ctx, 31, 0x1CEAE0u);
    ctx->pc = 0x1CEADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEAD8u;
            // 0x1ceadc: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEAE0u; }
        if (ctx->pc != 0x1CEAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEAE0u; }
        if (ctx->pc != 0x1CEAE0u) { return; }
    }
    ctx->pc = 0x1CEAE0u;
    // 0x1ceae0: 0x3c033fe0  lui         $v1, 0x3FE0
    ctx->pc = 0x1ceae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16352 << 16));
    // 0x1ceae4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ceae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceae8: 0xc040880  jal         func_102200
    ctx->pc = 0x1CEAE8u;
    SET_GPR_U32(ctx, 31, 0x1CEAF0u);
    ctx->pc = 0x1CEAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEAE8u;
            // 0x1ceaec: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEAF0u; }
        if (ctx->pc != 0x1CEAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEAF0u; }
        if (ctx->pc != 0x1CEAF0u) { return; }
    }
    ctx->pc = 0x1CEAF0u;
    // 0x1ceaf0: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1CEAF0u;
    SET_GPR_U32(ctx, 31, 0x1CEAF8u);
    ctx->pc = 0x1CEAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEAF0u;
            // 0x1ceaf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEAF8u; }
        if (ctx->pc != 0x1CEAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEAF8u; }
        if (ctx->pc != 0x1CEAF8u) { return; }
    }
    ctx->pc = 0x1CEAF8u;
    // 0x1ceaf8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1CEAF8u;
    SET_GPR_U32(ctx, 31, 0x1CEB00u);
    ctx->pc = 0x1CEAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEAF8u;
            // 0x1ceafc: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEB00u; }
        if (ctx->pc != 0x1CEB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEB00u; }
        if (ctx->pc != 0x1CEB00u) { return; }
    }
    ctx->pc = 0x1CEB00u;
    // 0x1ceb00: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1ceb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1ceb04: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1ceb04u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1ceb08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ceb08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ceb0c: 0x0  nop
    ctx->pc = 0x1ceb0cu;
    // NOP
    // 0x1ceb10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ceb10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ceb14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ceb14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ceb18: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1ceb18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1ceb1c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1ceb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1ceb20: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1ceb20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1ceb24: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1ceb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_1ceb28:
    // 0x1ceb28: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1CEB28u;
    SET_GPR_U32(ctx, 31, 0x1CEB30u);
    ctx->pc = 0x1CEB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEB28u;
            // 0x1ceb2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEB30u; }
        if (ctx->pc != 0x1CEB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEB30u; }
        if (ctx->pc != 0x1CEB30u) { return; }
    }
    ctx->pc = 0x1CEB30u;
    // 0x1ceb30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ceb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ceb34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ceb34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ceb38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ceb38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ceb3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ceb3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ceb40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ceb40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ceb44: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEB44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEB44u;
            // 0x1ceb48: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CEA70u: goto label_1cea70;
            case 0x1CEAD0u: goto label_1cead0;
            case 0x1CEB28u: goto label_1ceb28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CEB4Cu;
}
