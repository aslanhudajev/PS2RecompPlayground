#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEnex1_04
// Address: 0x1cda30 - 0x1cdcac
void CreateEnex1_04_0x1cda30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEnex1_04_0x1cda30");
#endif

    ctx->pc = 0x1cda30u;

    // 0x1cda30: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1cda30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1cda34: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1cda34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1cda38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cda38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cda3c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1cda3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1cda40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cda40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cda44: 0x2463dce0  addiu       $v1, $v1, -0x2320
    ctx->pc = 0x1cda44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x1cda48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cda48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cda4c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1cda4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cda50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cda50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cda54: 0x2442df30  addiu       $v0, $v0, -0x20D0
    ctx->pc = 0x1cda54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958896));
    // 0x1cda58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cda58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cda5c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cda5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cda60: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1cda60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1cda64: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1cda64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cda68: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1cda68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1cda6c: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1cda6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1cda70: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1cda70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1cda74: 0x2463e990  addiu       $v1, $v1, -0x1670
    ctx->pc = 0x1cda74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961552));
    // 0x1cda78: 0x2442dcb0  addiu       $v0, $v0, -0x2350
    ctx->pc = 0x1cda78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958256));
    // 0x1cda7c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1cda7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1cda80: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x1cda80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1cda84: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1cda84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1cda88: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1cda88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1cda8c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1CDA8Cu;
    SET_GPR_U32(ctx, 31, 0x1CDA94u);
    ctx->pc = 0x1CDA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDA8Cu;
            // 0x1cda90: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDA94u; }
        if (ctx->pc != 0x1CDA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDA94u; }
        if (ctx->pc != 0x1CDA94u) { return; }
    }
    ctx->pc = 0x1CDA94u;
    // 0x1cda94: 0xc060544  jal         func_181510
    ctx->pc = 0x1CDA94u;
    SET_GPR_U32(ctx, 31, 0x1CDA9Cu);
    ctx->pc = 0x1CDA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDA94u;
            // 0x1cda98: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDA9Cu; }
        if (ctx->pc != 0x1CDA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDA9Cu; }
        if (ctx->pc != 0x1CDA9Cu) { return; }
    }
    ctx->pc = 0x1CDA9Cu;
    // 0x1cda9c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1cda9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1cdaa0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1cdaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1cdaa4: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1cdaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cdaa8: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1cdaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1cdaac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1cdaacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1cdab0: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1cdab0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cdab4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1cdab4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdab8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1cdab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cdabc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cdabcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1cdac0: 0x2e610006  sltiu       $at, $s3, 0x6
    ctx->pc = 0x1cdac0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1cdac4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1cdac4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1cdac8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cdac8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1cdacc: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1cdaccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1cdad0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cdad0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cdad4: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x1cdad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x1cdad8: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1cdad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1cdadc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1cdadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cdae0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1cdae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1cdae4: 0x10200068  beqz        $at, . + 4 + (0x68 << 2)
    ctx->pc = 0x1CDAE4u;
    {
        const bool branch_taken_0x1cdae4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDAE4u;
            // 0x1cdae8: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdae4) {
            ctx->pc = 0x1CDC88u;
            goto label_1cdc88;
        }
    }
    ctx->pc = 0x1CDAECu;
    // 0x1cdaec: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1cdaecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1cdaf0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1cdaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1cdaf4: 0x24632c50  addiu       $v1, $v1, 0x2C50
    ctx->pc = 0x1cdaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11344));
    // 0x1cdaf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cdaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cdafc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cdafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cdb00: 0x400008  jr          $v0
    ctx->pc = 0x1CDB00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CDB08u: goto label_1cdb08;
            case 0x1CDB48u: goto label_1cdb48;
            case 0x1CDB88u: goto label_1cdb88;
            case 0x1CDBD8u: goto label_1cdbd8;
            case 0x1CDC28u: goto label_1cdc28;
            case 0x1CDC58u: goto label_1cdc58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CDB08u;
label_1cdb08:
    // 0x1cdb08: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1cdb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1cdb0c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1cdb0cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cdb10: 0x3c02bf33  lui         $v0, 0xBF33
    ctx->pc = 0x1cdb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48947 << 16));
    // 0x1cdb14: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1cdb14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1cdb18: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1cdb18u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1cdb1c: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1cdb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1cdb20: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x1cdb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
    // 0x1cdb24: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1cdb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1cdb28: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1cdb28u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1cdb2c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1cdb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1cdb30: 0x3c023fc8  lui         $v0, 0x3FC8
    ctx->pc = 0x1cdb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16328 << 16));
    // 0x1cdb34: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x1cdb34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x1cdb38: 0x3443f5c3  ori         $v1, $v0, 0xF5C3
    ctx->pc = 0x1cdb38u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62915u)));
    // 0x1cdb3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cdb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cdb40: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1CDB40u;
    {
        const bool branch_taken_0x1cdb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDB40u;
            // 0x1cdb44: 0xac430118  sw          $v1, 0x118($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdb40) {
            ctx->pc = 0x1CDC88u;
            goto label_1cdc88;
        }
    }
    ctx->pc = 0x1CDB48u;
label_1cdb48:
    // 0x1cdb48: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1cdb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1cdb4c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1cdb4cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cdb50: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1cdb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1cdb54: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1cdb54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1cdb58: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1cdb58u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1cdb5c: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1cdb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1cdb60: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1cdb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1cdb64: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1cdb64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1cdb68: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1cdb68u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1cdb6c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1cdb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1cdb70: 0x3c02bfc8  lui         $v0, 0xBFC8
    ctx->pc = 0x1cdb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49096 << 16));
    // 0x1cdb74: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x1cdb74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x1cdb78: 0x3443f5c3  ori         $v1, $v0, 0xF5C3
    ctx->pc = 0x1cdb78u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62915u)));
    // 0x1cdb7c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cdb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cdb80: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1CDB80u;
    {
        const bool branch_taken_0x1cdb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDB80u;
            // 0x1cdb84: 0xac430118  sw          $v1, 0x118($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdb80) {
            ctx->pc = 0x1CDC88u;
            goto label_1cdc88;
        }
    }
    ctx->pc = 0x1CDB88u;
label_1cdb88:
    // 0x1cdb88: 0x3c02bca3  lui         $v0, 0xBCA3
    ctx->pc = 0x1cdb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
    // 0x1cdb8c: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1cdb8cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1cdb90: 0x3c02bf33  lui         $v0, 0xBF33
    ctx->pc = 0x1cdb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48947 << 16));
    // 0x1cdb94: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1cdb94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1cdb98: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1cdb98u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1cdb9c: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1cdb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1cdba0: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x1cdba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
    // 0x1cdba4: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1cdba4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1cdba8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1cdba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1cdbac: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x1cdbacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x1cdbb0: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x1cdbb0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1cdbb4: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1cdbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1cdbb8: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x1cdbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x1cdbbc: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1cdbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1cdbc0: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x1cdbc0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1cdbc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cdbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cdbc8: 0xac440118  sw          $a0, 0x118($v0)
    ctx->pc = 0x1cdbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 4));
    // 0x1cdbcc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cdbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cdbd0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1CDBD0u;
    {
        const bool branch_taken_0x1cdbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDBD0u;
            // 0x1cdbd4: 0xac430114  sw          $v1, 0x114($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdbd0) {
            ctx->pc = 0x1CDC88u;
            goto label_1cdc88;
        }
    }
    ctx->pc = 0x1CDBD8u;
label_1cdbd8:
    // 0x1cdbd8: 0x3c02bca3  lui         $v0, 0xBCA3
    ctx->pc = 0x1cdbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
    // 0x1cdbdc: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1cdbdcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1cdbe0: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1cdbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1cdbe4: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1cdbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1cdbe8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1cdbe8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1cdbec: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1cdbecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1cdbf0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1cdbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1cdbf4: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1cdbf4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1cdbf8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1cdbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1cdbfc: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x1cdbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x1cdc00: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x1cdc00u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1cdc04: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1cdc04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1cdc08: 0x3c02bf66  lui         $v0, 0xBF66
    ctx->pc = 0x1cdc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48998 << 16));
    // 0x1cdc0c: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1cdc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1cdc10: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x1cdc10u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1cdc14: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cdc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cdc18: 0xac440118  sw          $a0, 0x118($v0)
    ctx->pc = 0x1cdc18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 4));
    // 0x1cdc1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cdc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cdc20: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1CDC20u;
    {
        const bool branch_taken_0x1cdc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDC20u;
            // 0x1cdc24: 0xac430114  sw          $v1, 0x114($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc20) {
            ctx->pc = 0x1CDC88u;
            goto label_1cdc88;
        }
    }
    ctx->pc = 0x1CDC28u;
label_1cdc28:
    // 0x1cdc28: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1cdc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1cdc2c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1cdc2cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cdc30: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1cdc30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1cdc34: 0x3c02bba3  lui         $v0, 0xBBA3
    ctx->pc = 0x1cdc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
    // 0x1cdc38: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1cdc38u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1cdc3c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1cdc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1cdc40: 0x3c02ba83  lui         $v0, 0xBA83
    ctx->pc = 0x1cdc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47747 << 16));
    // 0x1cdc44: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x1cdc44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x1cdc48: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1cdc48u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1cdc4c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1cdc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1cdc50: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CDC50u;
    {
        const bool branch_taken_0x1cdc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDC50u;
            // 0x1cdc54: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc50) {
            ctx->pc = 0x1CDC88u;
            goto label_1cdc88;
        }
    }
    ctx->pc = 0x1CDC58u;
label_1cdc58:
    // 0x1cdc58: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1cdc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1cdc5c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1cdc5cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cdc60: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1cdc60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1cdc64: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1cdc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x1cdc68: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1cdc68u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1cdc6c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1cdc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1cdc70: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1cdc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x1cdc74: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x1cdc74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x1cdc78: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1cdc78u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1cdc7c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1cdc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1cdc80: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1cdc80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    // 0x1cdc84: 0x0  nop
    ctx->pc = 0x1cdc84u;
    // NOP
label_1cdc88:
    // 0x1cdc88: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1CDC88u;
    SET_GPR_U32(ctx, 31, 0x1CDC90u);
    ctx->pc = 0x1CDC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDC88u;
            // 0x1cdc8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDC90u; }
        if (ctx->pc != 0x1CDC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDC90u; }
        if (ctx->pc != 0x1CDC90u) { return; }
    }
    ctx->pc = 0x1CDC90u;
    // 0x1cdc90: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cdc90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cdc94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cdc94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cdc98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cdc98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cdc9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cdc9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdca0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cdca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdca4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDCA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDCA4u;
            // 0x1cdca8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CDB08u: goto label_1cdb08;
            case 0x1CDB48u: goto label_1cdb48;
            case 0x1CDB88u: goto label_1cdb88;
            case 0x1CDBD8u: goto label_1cdbd8;
            case 0x1CDC28u: goto label_1cdc28;
            case 0x1CDC58u: goto label_1cdc58;
            case 0x1CDC88u: goto label_1cdc88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CDCACu;
}
