#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn5_03
// Address: 0x1b5680 - 0x1b5824
void CreateEn5_03_0x1b5680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn5_03_0x1b5680");
#endif

    ctx->pc = 0x1b5680u;

    // 0x1b5680: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1b5680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1b5684: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1b5684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1b5688: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b5688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b568c: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1b568cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1b5690: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b5690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b5694: 0x24635860  addiu       $v1, $v1, 0x5860
    ctx->pc = 0x1b5694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22624));
    // 0x1b5698: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b5698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b569c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b569cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b56a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b56a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b56a4: 0x24425b60  addiu       $v0, $v0, 0x5B60
    ctx->pc = 0x1b56a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23392));
    // 0x1b56a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b56a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b56ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b56acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b56b0: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1b56b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1b56b4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b56b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b56b8: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1b56b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1b56bc: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1b56bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1b56c0: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1b56c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1b56c4: 0x24637170  addiu       $v1, $v1, 0x7170
    ctx->pc = 0x1b56c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29040));
    // 0x1b56c8: 0x24425830  addiu       $v0, $v0, 0x5830
    ctx->pc = 0x1b56c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22576));
    // 0x1b56cc: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1b56ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1b56d0: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x1b56d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1b56d4: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1b56d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1b56d8: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1b56d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1b56dc: 0xc060694  jal         func_181A50
    ctx->pc = 0x1B56DCu;
    SET_GPR_U32(ctx, 31, 0x1B56E4u);
    ctx->pc = 0x1B56E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B56DCu;
            // 0x1b56e0: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B56E4u; }
        if (ctx->pc != 0x1B56E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B56E4u; }
        if (ctx->pc != 0x1B56E4u) { return; }
    }
    ctx->pc = 0x1B56E4u;
    // 0x1b56e4: 0xc060544  jal         func_181510
    ctx->pc = 0x1B56E4u;
    SET_GPR_U32(ctx, 31, 0x1B56ECu);
    ctx->pc = 0x1B56E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B56E4u;
            // 0x1b56e8: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B56ECu; }
        if (ctx->pc != 0x1B56ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B56ECu; }
        if (ctx->pc != 0x1B56ECu) { return; }
    }
    ctx->pc = 0x1B56ECu;
    // 0x1b56ec: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1b56ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1b56f0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1b56f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1b56f4: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1b56f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b56f8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1b56f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1b56fc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b56fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b5700: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1b5700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b5704: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1b5704u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b5708: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1b5708u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b570c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b570cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b5710: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b5710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b5714: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1b5714u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1b5718: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b5718u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1b571c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x1b571cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1b5720: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b5720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b5724: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1b5724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1b5728: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1b5728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1b572c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1b572cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b5730: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b5730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1b5734: 0x12620022  beq         $s3, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1B5734u;
    {
        const bool branch_taken_0x1b5734 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B5738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5734u;
            // 0x1b5738: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5734) {
            ctx->pc = 0x1B57C0u;
            goto label_1b57c0;
        }
    }
    ctx->pc = 0x1B573Cu;
    // 0x1b573c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b573cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5740: 0x1262000d  beq         $s3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B5740u;
    {
        const bool branch_taken_0x1b5740 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b5740) {
            ctx->pc = 0x1B5778u;
            goto label_1b5778;
        }
    }
    ctx->pc = 0x1B5748u;
    // 0x1b5748: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5748u;
    {
        const bool branch_taken_0x1b5748 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5748) {
            ctx->pc = 0x1B5758u;
            goto label_1b5758;
        }
    }
    ctx->pc = 0x1B5750u;
    // 0x1b5750: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1B5750u;
    {
        const bool branch_taken_0x1b5750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5750) {
            ctx->pc = 0x1B5800u;
            goto label_1b5800;
        }
    }
    ctx->pc = 0x1B5758u;
label_1b5758:
    // 0x1b5758: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1b5758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1b575c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b575cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1b5760: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1b5760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1b5764: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1b5764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1b5768: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1b5768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1b576c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1b576cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1b5770: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1B5770u;
    {
        const bool branch_taken_0x1b5770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5770u;
            // 0x1b5774: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5770) {
            ctx->pc = 0x1B5800u;
            goto label_1b5800;
        }
    }
    ctx->pc = 0x1B5778u;
label_1b5778:
    // 0x1b5778: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b5778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b577c: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1b577cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1b5780: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x1b5780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
    // 0x1b5784: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1b5784u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1b5788: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1b5788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1b578c: 0x3c02c016  lui         $v0, 0xC016
    ctx->pc = 0x1b578cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49174 << 16));
    // 0x1b5790: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1b5790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1b5794: 0x3443cbe4  ori         $v1, $v0, 0xCBE4
    ctx->pc = 0x1b5794u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52196u)));
    // 0x1b5798: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1b5798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1b579c: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1b579cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1b57a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b57a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b57a4: 0xac400114  sw          $zero, 0x114($v0)
    ctx->pc = 0x1b57a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 0));
    // 0x1b57a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b57a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b57ac: 0xac400110  sw          $zero, 0x110($v0)
    ctx->pc = 0x1b57acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 0));
    // 0x1b57b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b57b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b57b4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B57B4u;
    {
        const bool branch_taken_0x1b57b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B57B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B57B4u;
            // 0x1b57b8: 0xac430118  sw          $v1, 0x118($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b57b4) {
            ctx->pc = 0x1B5800u;
            goto label_1b5800;
        }
    }
    ctx->pc = 0x1B57BCu;
    // 0x1b57bc: 0x0  nop
    ctx->pc = 0x1b57bcu;
    // NOP
label_1b57c0:
    // 0x1b57c0: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1b57c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x1b57c4: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1b57c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1b57c8: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x1b57c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
    // 0x1b57cc: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1b57ccu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1b57d0: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1b57d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1b57d4: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x1b57d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
    // 0x1b57d8: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1b57d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1b57dc: 0x3443cbe4  ori         $v1, $v0, 0xCBE4
    ctx->pc = 0x1b57dcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52196u)));
    // 0x1b57e0: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1b57e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1b57e4: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1b57e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1b57e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b57e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b57ec: 0xac400114  sw          $zero, 0x114($v0)
    ctx->pc = 0x1b57ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 0));
    // 0x1b57f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b57f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b57f4: 0xac400110  sw          $zero, 0x110($v0)
    ctx->pc = 0x1b57f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 0));
    // 0x1b57f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b57f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b57fc: 0xac430118  sw          $v1, 0x118($v0)
    ctx->pc = 0x1b57fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 3));
label_1b5800:
    // 0x1b5800: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1B5800u;
    SET_GPR_U32(ctx, 31, 0x1B5808u);
    ctx->pc = 0x1B5804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5800u;
            // 0x1b5804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5808u; }
        if (ctx->pc != 0x1B5808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5808u; }
        if (ctx->pc != 0x1B5808u) { return; }
    }
    ctx->pc = 0x1B5808u;
    // 0x1b5808: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b5808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b580c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b580cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5810: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b5810u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5814: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b5814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b5818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b581c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B581Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B581Cu;
            // 0x1b5820: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B5758u: goto label_1b5758;
            case 0x1B5778u: goto label_1b5778;
            case 0x1B57C0u: goto label_1b57c0;
            case 0x1B5800u: goto label_1b5800;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B5824u;
}
