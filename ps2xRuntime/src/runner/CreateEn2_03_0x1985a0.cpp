#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn2_03
// Address: 0x1985a0 - 0x1988dc
void CreateEn2_03_0x1985a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn2_03_0x1985a0");
#endif

    ctx->pc = 0x1985a0u;

    // 0x1985a0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1985a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1985a4: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1985a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x1985a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1985a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1985ac: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1985acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1985b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1985b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1985b4: 0x24638910  addiu       $v1, $v1, -0x76F0
    ctx->pc = 0x1985b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936848));
    // 0x1985b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1985b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1985bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1985bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1985c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1985c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1985c4: 0x24428b60  addiu       $v0, $v0, -0x74A0
    ctx->pc = 0x1985c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937440));
    // 0x1985c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1985c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1985cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1985ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1985d0: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1985d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1985d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1985d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1985d8: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1985d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1985dc: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1985dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x1985e0: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1985e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1985e4: 0x246396b0  addiu       $v1, $v1, -0x6950
    ctx->pc = 0x1985e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940336));
    // 0x1985e8: 0x244288e0  addiu       $v0, $v0, -0x7720
    ctx->pc = 0x1985e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936800));
    // 0x1985ec: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1985ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1985f0: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x1985f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1985f4: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1985f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1985f8: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1985f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1985fc: 0xc060694  jal         func_181A50
    ctx->pc = 0x1985FCu;
    SET_GPR_U32(ctx, 31, 0x198604u);
    ctx->pc = 0x198600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1985FCu;
            // 0x198600: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198604u; }
        if (ctx->pc != 0x198604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198604u; }
        if (ctx->pc != 0x198604u) { return; }
    }
    ctx->pc = 0x198604u;
    // 0x198604: 0xc060544  jal         func_181510
    ctx->pc = 0x198604u;
    SET_GPR_U32(ctx, 31, 0x19860Cu);
    ctx->pc = 0x198608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198604u;
            // 0x198608: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19860Cu; }
        if (ctx->pc != 0x19860Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19860Cu; }
        if (ctx->pc != 0x19860Cu) { return; }
    }
    ctx->pc = 0x19860Cu;
    // 0x19860c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x19860cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x198610: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x198610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x198614: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x198614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x198618: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x198618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x19861c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x19861cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x198620: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x198620u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x198624: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x198624u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198628: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x198628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19862c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19862cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198630: 0x2e610006  sltiu       $at, $s3, 0x6
    ctx->pc = 0x198630u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x198634: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x198634u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x198638: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x198638u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x19863c: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x19863cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x198640: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x198640u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x198644: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x198644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x198648: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x198648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x19864c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x19864cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x198650: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x198650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x198654: 0x10200098  beqz        $at, . + 4 + (0x98 << 2)
    ctx->pc = 0x198654u;
    {
        const bool branch_taken_0x198654 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x198658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198654u;
            // 0x198658: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198654) {
            ctx->pc = 0x1988B8u;
            goto label_1988b8;
        }
    }
    ctx->pc = 0x19865Cu;
    // 0x19865c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19865cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x198660: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x198660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x198664: 0x246328b0  addiu       $v1, $v1, 0x28B0
    ctx->pc = 0x198664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10416));
    // 0x198668: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x198668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19866c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19866cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x198670: 0x400008  jr          $v0
    ctx->pc = 0x198670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198678u: goto label_198678;
            case 0x1986B0u: goto label_1986b0;
            case 0x1986E0u: goto label_1986e0;
            case 0x198738u: goto label_198738;
            case 0x198790u: goto label_198790;
            case 0x198828u: goto label_198828;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198678u;
label_198678:
    // 0x198678: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x198678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x19867c: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x19867cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x198680: 0x3c02becc  lui         $v0, 0xBECC
    ctx->pc = 0x198680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48844 << 16));
    // 0x198684: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x198684u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x198688: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x198688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x19868c: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x19868cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x198690: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x198690u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x198694: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x198694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x198698: 0x3c02bba3  lui         $v0, 0xBBA3
    ctx->pc = 0x198698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
    // 0x19869c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19869cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1986a0: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1986a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x1986a4: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1986A4u;
    {
        const bool branch_taken_0x1986a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1986A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1986A4u;
            // 0x1986a8: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1986a4) {
            ctx->pc = 0x1988B8u;
            goto label_1988b8;
        }
    }
    ctx->pc = 0x1986ACu;
    // 0x1986ac: 0x0  nop
    ctx->pc = 0x1986acu;
    // NOP
label_1986b0:
    // 0x1986b0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1986b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1986b4: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1986b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1986b8: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1986b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1986bc: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1986bcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1986c0: 0x3c02bba3  lui         $v0, 0xBBA3
    ctx->pc = 0x1986c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
    // 0x1986c4: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1986c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1986c8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1986c8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1986cc: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x1986ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x1986d0: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1986d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x1986d4: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x1986D4u;
    {
        const bool branch_taken_0x1986d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1986D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1986D4u;
            // 0x1986d8: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1986d4) {
            ctx->pc = 0x1988B8u;
            goto label_1988b8;
        }
    }
    ctx->pc = 0x1986DCu;
    // 0x1986dc: 0x0  nop
    ctx->pc = 0x1986dcu;
    // NOP
label_1986e0:
    // 0x1986e0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1986e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1986e4: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1986e4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1986e8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1986e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1986ec: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1986ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1986f0: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1986f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1986f4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1986f4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1986f8: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1986f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1986fc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1986fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x198700: 0x3c02bfd5  lui         $v0, 0xBFD5
    ctx->pc = 0x198700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49109 << 16));
    // 0x198704: 0x3446c28f  ori         $a2, $v0, 0xC28F
    ctx->pc = 0x198704u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x198708: 0x3c023c75  lui         $v0, 0x3C75
    ctx->pc = 0x198708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
    // 0x19870c: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x19870cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x198710: 0x3c02bd4c  lui         $v0, 0xBD4C
    ctx->pc = 0x198710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48460 << 16));
    // 0x198714: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x198714u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x198718: 0xac860118  sw          $a2, 0x118($a0)
    ctx->pc = 0x198718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 6));
    // 0x19871c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19871cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x198720: 0xac850114  sw          $a1, 0x114($a0)
    ctx->pc = 0x198720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 5));
    // 0x198724: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x198724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x198728: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x198728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x19872c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x19872Cu;
    {
        const bool branch_taken_0x19872c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19872Cu;
            // 0x198730: 0xae0200e4  sw          $v0, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19872c) {
            ctx->pc = 0x1988B8u;
            goto label_1988b8;
        }
    }
    ctx->pc = 0x198734u;
    // 0x198734: 0x0  nop
    ctx->pc = 0x198734u;
    // NOP
label_198738:
    // 0x198738: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x198738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x19873c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x19873cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x198740: 0x3c05bf80  lui         $a1, 0xBF80
    ctx->pc = 0x198740u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49024 << 16));
    // 0x198744: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x198744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
    // 0x198748: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x198748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x19874c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x19874cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x198750: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x198750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x198754: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x198754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x198758: 0x3c023fd5  lui         $v0, 0x3FD5
    ctx->pc = 0x198758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16341 << 16));
    // 0x19875c: 0x3446c28f  ori         $a2, $v0, 0xC28F
    ctx->pc = 0x19875cu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x198760: 0x3c02bc75  lui         $v0, 0xBC75
    ctx->pc = 0x198760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48245 << 16));
    // 0x198764: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x198764u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x198768: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x198768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x19876c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19876cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x198770: 0xac860118  sw          $a2, 0x118($a0)
    ctx->pc = 0x198770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 6));
    // 0x198774: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x198774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x198778: 0xac850114  sw          $a1, 0x114($a0)
    ctx->pc = 0x198778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 5));
    // 0x19877c: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x19877cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x198780: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x198780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x198784: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x198784u;
    {
        const bool branch_taken_0x198784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198784u;
            // 0x198788: 0xae0200e4  sw          $v0, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198784) {
            ctx->pc = 0x1988B8u;
            goto label_1988b8;
        }
    }
    ctx->pc = 0x19878Cu;
    // 0x19878c: 0x0  nop
    ctx->pc = 0x19878cu;
    // NOP
label_198790:
    // 0x198790: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x198790u;
    SET_GPR_U32(ctx, 31, 0x198798u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198798u; }
        if (ctx->pc != 0x198798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198798u; }
        if (ctx->pc != 0x198798u) { return; }
    }
    ctx->pc = 0x198798u;
    // 0x198798: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x198798u;
    SET_GPR_U32(ctx, 31, 0x1987A0u);
    ctx->pc = 0x19879Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198798u;
            // 0x19879c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987A0u; }
        if (ctx->pc != 0x1987A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987A0u; }
        if (ctx->pc != 0x1987A0u) { return; }
    }
    ctx->pc = 0x1987A0u;
    // 0x1987a0: 0x3c033fe0  lui         $v1, 0x3FE0
    ctx->pc = 0x1987a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16352 << 16));
    // 0x1987a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1987a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1987a8: 0xc040880  jal         func_102200
    ctx->pc = 0x1987A8u;
    SET_GPR_U32(ctx, 31, 0x1987B0u);
    ctx->pc = 0x1987ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1987A8u;
            // 0x1987ac: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987B0u; }
        if (ctx->pc != 0x1987B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987B0u; }
        if (ctx->pc != 0x1987B0u) { return; }
    }
    ctx->pc = 0x1987B0u;
    // 0x1987b0: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1987B0u;
    SET_GPR_U32(ctx, 31, 0x1987B8u);
    ctx->pc = 0x1987B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1987B0u;
            // 0x1987b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987B8u; }
        if (ctx->pc != 0x1987B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987B8u; }
        if (ctx->pc != 0x1987B8u) { return; }
    }
    ctx->pc = 0x1987B8u;
    // 0x1987b8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1987B8u;
    SET_GPR_U32(ctx, 31, 0x1987C0u);
    ctx->pc = 0x1987BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1987B8u;
            // 0x1987bc: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987C0u; }
        if (ctx->pc != 0x1987C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987C0u; }
        if (ctx->pc != 0x1987C0u) { return; }
    }
    ctx->pc = 0x1987C0u;
    // 0x1987c0: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1987C0u;
    SET_GPR_U32(ctx, 31, 0x1987C8u);
    ctx->pc = 0x1987C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1987C0u;
            // 0x1987c4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987C8u; }
        if (ctx->pc != 0x1987C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987C8u; }
        if (ctx->pc != 0x1987C8u) { return; }
    }
    ctx->pc = 0x1987C8u;
    // 0x1987c8: 0x3c043fd3  lui         $a0, 0x3FD3
    ctx->pc = 0x1987c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16339 << 16));
    // 0x1987cc: 0x3c033333  lui         $v1, 0x3333
    ctx->pc = 0x1987ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13107 << 16));
    // 0x1987d0: 0x34843333  ori         $a0, $a0, 0x3333
    ctx->pc = 0x1987d0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)13107u)));
    // 0x1987d4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1987d4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)13107u)));
    // 0x1987d8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1987d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1987dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1987dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1987e0: 0xc040880  jal         func_102200
    ctx->pc = 0x1987E0u;
    SET_GPR_U32(ctx, 31, 0x1987E8u);
    ctx->pc = 0x1987E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1987E0u;
            // 0x1987e4: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987E8u; }
        if (ctx->pc != 0x1987E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987E8u; }
        if (ctx->pc != 0x1987E8u) { return; }
    }
    ctx->pc = 0x1987E8u;
    // 0x1987e8: 0x3c043fd9  lui         $a0, 0x3FD9
    ctx->pc = 0x1987e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16345 << 16));
    // 0x1987ec: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x1987ecu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)40960u)));
    // 0x1987f0: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1987f0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1987f4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1987f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1987f8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1987f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1987fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1987fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198800: 0xc040850  jal         func_102140
    ctx->pc = 0x198800u;
    SET_GPR_U32(ctx, 31, 0x198808u);
    ctx->pc = 0x198804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198800u;
            // 0x198804: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198808u; }
        if (ctx->pc != 0x198808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198808u; }
        if (ctx->pc != 0x198808u) { return; }
    }
    ctx->pc = 0x198808u;
    // 0x198808: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x198808u;
    SET_GPR_U32(ctx, 31, 0x198810u);
    ctx->pc = 0x19880Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198808u;
            // 0x19880c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198810u; }
        if (ctx->pc != 0x198810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198810u; }
        if (ctx->pc != 0x198810u) { return; }
    }
    ctx->pc = 0x198810u;
    // 0x198810: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x198810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x198814: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x198814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x198818: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x198818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x19881c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x19881Cu;
    {
        const bool branch_taken_0x19881c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19881Cu;
            // 0x198820: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19881c) {
            ctx->pc = 0x1988B8u;
            goto label_1988b8;
        }
    }
    ctx->pc = 0x198824u;
    // 0x198824: 0x0  nop
    ctx->pc = 0x198824u;
    // NOP
label_198828:
    // 0x198828: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x198828u;
    SET_GPR_U32(ctx, 31, 0x198830u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198830u; }
        if (ctx->pc != 0x198830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198830u; }
        if (ctx->pc != 0x198830u) { return; }
    }
    ctx->pc = 0x198830u;
    // 0x198830: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x198830u;
    SET_GPR_U32(ctx, 31, 0x198838u);
    ctx->pc = 0x198834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198830u;
            // 0x198834: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198838u; }
        if (ctx->pc != 0x198838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198838u; }
        if (ctx->pc != 0x198838u) { return; }
    }
    ctx->pc = 0x198838u;
    // 0x198838: 0x3c033fe0  lui         $v1, 0x3FE0
    ctx->pc = 0x198838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16352 << 16));
    // 0x19883c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19883cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198840: 0xc040880  jal         func_102200
    ctx->pc = 0x198840u;
    SET_GPR_U32(ctx, 31, 0x198848u);
    ctx->pc = 0x198844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198840u;
            // 0x198844: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198848u; }
        if (ctx->pc != 0x198848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198848u; }
        if (ctx->pc != 0x198848u) { return; }
    }
    ctx->pc = 0x198848u;
    // 0x198848: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x198848u;
    SET_GPR_U32(ctx, 31, 0x198850u);
    ctx->pc = 0x19884Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198848u;
            // 0x19884c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198850u; }
        if (ctx->pc != 0x198850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198850u; }
        if (ctx->pc != 0x198850u) { return; }
    }
    ctx->pc = 0x198850u;
    // 0x198850: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x198850u;
    SET_GPR_U32(ctx, 31, 0x198858u);
    ctx->pc = 0x198854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198850u;
            // 0x198854: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198858u; }
        if (ctx->pc != 0x198858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198858u; }
        if (ctx->pc != 0x198858u) { return; }
    }
    ctx->pc = 0x198858u;
    // 0x198858: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x198858u;
    SET_GPR_U32(ctx, 31, 0x198860u);
    ctx->pc = 0x19885Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198858u;
            // 0x19885c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198860u; }
        if (ctx->pc != 0x198860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198860u; }
        if (ctx->pc != 0x198860u) { return; }
    }
    ctx->pc = 0x198860u;
    // 0x198860: 0x3c043fd3  lui         $a0, 0x3FD3
    ctx->pc = 0x198860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16339 << 16));
    // 0x198864: 0x3c033333  lui         $v1, 0x3333
    ctx->pc = 0x198864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13107 << 16));
    // 0x198868: 0x34843333  ori         $a0, $a0, 0x3333
    ctx->pc = 0x198868u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)13107u)));
    // 0x19886c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x19886cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)13107u)));
    // 0x198870: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x198870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x198874: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x198874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198878: 0xc040880  jal         func_102200
    ctx->pc = 0x198878u;
    SET_GPR_U32(ctx, 31, 0x198880u);
    ctx->pc = 0x19887Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198878u;
            // 0x19887c: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198880u; }
        if (ctx->pc != 0x198880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198880u; }
        if (ctx->pc != 0x198880u) { return; }
    }
    ctx->pc = 0x198880u;
    // 0x198880: 0x3c043fd9  lui         $a0, 0x3FD9
    ctx->pc = 0x198880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16345 << 16));
    // 0x198884: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x198884u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)40960u)));
    // 0x198888: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x198888u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x19888c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x19888cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x198890: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x198890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x198894: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x198894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198898: 0xc040850  jal         func_102140
    ctx->pc = 0x198898u;
    SET_GPR_U32(ctx, 31, 0x1988A0u);
    ctx->pc = 0x19889Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198898u;
            // 0x19889c: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1988A0u; }
        if (ctx->pc != 0x1988A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1988A0u; }
        if (ctx->pc != 0x1988A0u) { return; }
    }
    ctx->pc = 0x1988A0u;
    // 0x1988a0: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1988A0u;
    SET_GPR_U32(ctx, 31, 0x1988A8u);
    ctx->pc = 0x1988A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1988A0u;
            // 0x1988a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1988A8u; }
        if (ctx->pc != 0x1988A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1988A8u; }
        if (ctx->pc != 0x1988A8u) { return; }
    }
    ctx->pc = 0x1988A8u;
    // 0x1988a8: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1988a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1988ac: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1988acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1988b0: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1988b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1988b4: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1988b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_1988b8:
    // 0x1988b8: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1988B8u;
    SET_GPR_U32(ctx, 31, 0x1988C0u);
    ctx->pc = 0x1988BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1988B8u;
            // 0x1988bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1988C0u; }
        if (ctx->pc != 0x1988C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1988C0u; }
        if (ctx->pc != 0x1988C0u) { return; }
    }
    ctx->pc = 0x1988C0u;
    // 0x1988c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1988c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1988c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1988c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1988c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1988c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1988cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1988ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1988d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1988d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1988d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1988D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1988D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1988D4u;
            // 0x1988d8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198678u: goto label_198678;
            case 0x1986B0u: goto label_1986b0;
            case 0x1986E0u: goto label_1986e0;
            case 0x198738u: goto label_198738;
            case 0x198790u: goto label_198790;
            case 0x198828u: goto label_198828;
            case 0x1988B8u: goto label_1988b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1988DCu;
}
