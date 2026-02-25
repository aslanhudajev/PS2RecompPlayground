#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn6_01
// Address: 0x1a9500 - 0x1a9614
void CreateEn6_01_0x1a9500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn6_01_0x1a9500");
#endif

    ctx->pc = 0x1a9500u;

    // 0x1a9500: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1a9500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1a9504: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1a9504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1a9508: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a9508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a950c: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1a950cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1a9510: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a9510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a9514: 0x24639650  addiu       $v1, $v1, -0x69B0
    ctx->pc = 0x1a9514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940240));
    // 0x1a9518: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a9518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a951c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a951cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9520: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a9520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a9524: 0x244298d0  addiu       $v0, $v0, -0x6730
    ctx->pc = 0x1a9524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940880));
    // 0x1a9528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a9528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a952c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a952cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9530: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1a9530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1a9534: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a9534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9538: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1a9538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1a953c: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1a953cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1a9540: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1a9540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1a9544: 0x2463a0c0  addiu       $v1, $v1, -0x5F40
    ctx->pc = 0x1a9544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942912));
    // 0x1a9548: 0x24429620  addiu       $v0, $v0, -0x69E0
    ctx->pc = 0x1a9548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940192));
    // 0x1a954c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1a954cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1a9550: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x1a9550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1a9554: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1a9554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1a9558: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1a9558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1a955c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1A955Cu;
    SET_GPR_U32(ctx, 31, 0x1A9564u);
    ctx->pc = 0x1A9560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A955Cu;
            // 0x1a9560: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9564u; }
        if (ctx->pc != 0x1A9564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9564u; }
        if (ctx->pc != 0x1A9564u) { return; }
    }
    ctx->pc = 0x1A9564u;
    // 0x1a9564: 0xc060544  jal         func_181510
    ctx->pc = 0x1A9564u;
    SET_GPR_U32(ctx, 31, 0x1A956Cu);
    ctx->pc = 0x1A9568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9564u;
            // 0x1a9568: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A956Cu; }
        if (ctx->pc != 0x1A956Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A956Cu; }
        if (ctx->pc != 0x1A956Cu) { return; }
    }
    ctx->pc = 0x1A956Cu;
    // 0x1a956c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1a956cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1a9570: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1a9570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1a9574: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1a9574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a9578: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x1a9578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x1a957c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a957cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a9580: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1a9580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a9584: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1a9584u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a9588: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1a9588u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a958c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a958cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9590: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a9590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a9594: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1a9594u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1a9598: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a9598u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1a959c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x1a959cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1a95a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a95a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a95a4: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1a95a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1a95a8: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1a95a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1a95ac: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1a95acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a95b0: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1a95b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1a95b4: 0x12620006  beq         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A95B4u;
    {
        const bool branch_taken_0x1a95b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A95B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A95B4u;
            // 0x1a95b8: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a95b4) {
            ctx->pc = 0x1A95D0u;
            goto label_1a95d0;
        }
    }
    ctx->pc = 0x1A95BCu;
    // 0x1a95bc: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A95BCu;
    {
        const bool branch_taken_0x1a95bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a95bc) {
            ctx->pc = 0x1A95D0u;
            goto label_1a95d0;
        }
    }
    ctx->pc = 0x1A95C4u;
    // 0x1a95c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A95C4u;
    {
        const bool branch_taken_0x1a95c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a95c4) {
            ctx->pc = 0x1A95F0u;
            goto label_1a95f0;
        }
    }
    ctx->pc = 0x1A95CCu;
    // 0x1a95cc: 0x0  nop
    ctx->pc = 0x1a95ccu;
    // NOP
label_1a95d0:
    // 0x1a95d0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1a95d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1a95d4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a95d4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1a95d8: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1a95d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1a95dc: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1a95dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1a95e0: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1a95e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1a95e4: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1a95e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1a95e8: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1a95e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1a95ec: 0x0  nop
    ctx->pc = 0x1a95ecu;
    // NOP
label_1a95f0:
    // 0x1a95f0: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1A95F0u;
    SET_GPR_U32(ctx, 31, 0x1A95F8u);
    ctx->pc = 0x1A95F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A95F0u;
            // 0x1a95f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A95F8u; }
        if (ctx->pc != 0x1A95F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A95F8u; }
        if (ctx->pc != 0x1A95F8u) { return; }
    }
    ctx->pc = 0x1A95F8u;
    // 0x1a95f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a95f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a95fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a95fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a9600: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a9600u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9604: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a9604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9608: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a9608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a960c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A960Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A960Cu;
            // 0x1a9610: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A95D0u: goto label_1a95d0;
            case 0x1A95F0u: goto label_1a95f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A9614u;
}
