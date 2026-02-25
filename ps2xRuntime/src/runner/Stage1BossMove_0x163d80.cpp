#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage1BossMove
// Address: 0x163d80 - 0x1665e4
void Stage1BossMove_0x163d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage1BossMove_0x163d80");
#endif

    ctx->pc = 0x163d80u;

    // 0x163d80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x163d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x163d84: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x163d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x163d88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x163d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x163d8c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163d8cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x163d90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x163d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x163d94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163d98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x163d9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x163d9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163da0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x163da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x163da4: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x163da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x163da8: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x163da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163dac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x163dacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x163db0: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x163db0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x163db4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x163db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x163db8: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x163db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x163dbc: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x163dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163dc0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x163dc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x163dc4: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x163dc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x163dc8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x163dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x163dcc: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x163dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x163dd0: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x163dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163dd4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x163dd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x163dd8: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x163dd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
    // 0x163ddc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x163ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x163de0: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x163de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x163de4: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x163de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163de8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x163de8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x163dec: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x163decu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x163df0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x163df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x163df4: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x163df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163df8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x163df8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163dfc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x163DFCu;
    {
        const bool branch_taken_0x163dfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x163E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163DFCu;
            // 0x163e00: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163dfc) {
            ctx->pc = 0x163E20u;
            goto label_163e20;
        }
    }
    ctx->pc = 0x163E04u;
    // 0x163e04: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x163e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x163e08: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163e08u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x163e0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163e10: 0x0  nop
    ctx->pc = 0x163e10u;
    // NOP
    // 0x163e14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x163e14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163e18: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x163e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x163e1c: 0x0  nop
    ctx->pc = 0x163e1cu;
    // NOP
label_163e20:
    // 0x163e20: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x163e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x163e24: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x163e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x163e28: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163e28u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x163e2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163e30: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x163e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163e34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163e34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163e38: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x163E38u;
    {
        const bool branch_taken_0x163e38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x163E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163E38u;
            // 0x163e3c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e38) {
            ctx->pc = 0x163E58u;
            goto label_163e58;
        }
    }
    ctx->pc = 0x163E40u;
    // 0x163e40: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x163e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x163e44: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163e44u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x163e48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163e4c: 0x0  nop
    ctx->pc = 0x163e4cu;
    // NOP
    // 0x163e50: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x163e50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x163e54: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x163e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_163e58:
    // 0x163e58: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x163e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x163e5c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x163e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x163e60: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163e60u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x163e64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163e68: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x163e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163e6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x163e6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163e70: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x163E70u;
    {
        const bool branch_taken_0x163e70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x163E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163E70u;
            // 0x163e74: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e70) {
            ctx->pc = 0x163E90u;
            goto label_163e90;
        }
    }
    ctx->pc = 0x163E78u;
    // 0x163e78: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x163e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x163e7c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163e7cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x163e80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163e80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163e84: 0x0  nop
    ctx->pc = 0x163e84u;
    // NOP
    // 0x163e88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x163e88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163e8c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x163e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_163e90:
    // 0x163e90: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x163e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x163e94: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x163e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x163e98: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163e98u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x163e9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163ea0: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x163ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163ea4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163ea4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163ea8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x163EA8u;
    {
        const bool branch_taken_0x163ea8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x163EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163EA8u;
            // 0x163eac: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ea8) {
            ctx->pc = 0x163EC8u;
            goto label_163ec8;
        }
    }
    ctx->pc = 0x163EB0u;
    // 0x163eb0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x163eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x163eb4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163eb4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x163eb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163ebc: 0x0  nop
    ctx->pc = 0x163ebcu;
    // NOP
    // 0x163ec0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x163ec0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x163ec4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x163ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_163ec8:
    // 0x163ec8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x163ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x163ecc: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x163eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x163ed0: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x163ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x163ed4: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x163ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x163ed8: 0xc059a4c  jal         func_166930
    ctx->pc = 0x163ED8u;
    SET_GPR_U32(ctx, 31, 0x163EE0u);
    ctx->pc = 0x163EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163ED8u;
            // 0x163edc: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166930u;
    if (runtime->hasFunction(0x166930u)) {
        auto targetFn = runtime->lookupFunction(0x166930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163EE0u; }
        if (ctx->pc != 0x163EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x166930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163EE0u; }
        if (ctx->pc != 0x163EE0u) { return; }
    }
    ctx->pc = 0x163EE0u;
    // 0x163ee0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x163ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x163ee4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ee8: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x163ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x163eec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x163eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x163ef0: 0xc05b994  jal         func_16E650
    ctx->pc = 0x163EF0u;
    SET_GPR_U32(ctx, 31, 0x163EF8u);
    ctx->pc = 0x163EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163EF0u;
            // 0x163ef4: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E650u;
    if (runtime->hasFunction(0x16E650u)) {
        auto targetFn = runtime->lookupFunction(0x16E650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163EF8u; }
        if (ctx->pc != 0x163EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_DeadEnd_0x16e650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163EF8u; }
        if (ctx->pc != 0x163EF8u) { return; }
    }
    ctx->pc = 0x163EF8u;
    // 0x163ef8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x163ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163efc: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x163efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x163f00: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x163f00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x163f04: 0x102008b8  beqz        $at, . + 4 + (0x8B8 << 2)
    ctx->pc = 0x163F04u;
    {
        const bool branch_taken_0x163f04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163F04u;
            // 0x163f08: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f04) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x163F0Cu;
    // 0x163f0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x163f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x163f10: 0x24631050  addiu       $v1, $v1, 0x1050
    ctx->pc = 0x163f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4176));
    // 0x163f14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163f18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x163f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163f1c: 0x400008  jr          $v0
    ctx->pc = 0x163F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163F28u: goto label_163f28;
            case 0x163FB0u: goto label_163fb0;
            case 0x1656D8u: goto label_1656d8;
            case 0x165CD8u: goto label_165cd8;
            case 0x165FC8u: goto label_165fc8;
            case 0x166138u: goto label_166138;
            case 0x1661A8u: goto label_1661a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x163F24u;
    // 0x163f24: 0x0  nop
    ctx->pc = 0x163f24u;
    // NOP
label_163f28:
    // 0x163f28: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x163f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x163f2c: 0xc62100d4  lwc1        $f1, 0xD4($s1)
    ctx->pc = 0x163f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163f30: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x163f30u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x163f34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163f38: 0x0  nop
    ctx->pc = 0x163f38u;
    // NOP
    // 0x163f3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163f3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163f40: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x163F40u;
    {
        const bool branch_taken_0x163f40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x163F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163F40u;
            // 0x163f44: 0x3c023f7d  lui         $v0, 0x3F7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f40) {
            ctx->pc = 0x163F60u;
            goto label_163f60;
        }
    }
    ctx->pc = 0x163F48u;
    // 0x163f48: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x163f48u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)28836u)));
    // 0x163f4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163f4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163f50: 0x0  nop
    ctx->pc = 0x163f50u;
    // NOP
    // 0x163f54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x163f54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x163f58: 0x100008a3  b           . + 4 + (0x8A3 << 2)
    ctx->pc = 0x163F58u;
    {
        const bool branch_taken_0x163f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163F58u;
            // 0x163f5c: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f58) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x163F60u;
label_163f60:
    // 0x163f60: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x163F60u;
    SET_GPR_U32(ctx, 31, 0x163F68u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163F68u; }
        if (ctx->pc != 0x163F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163F68u; }
        if (ctx->pc != 0x163F68u) { return; }
    }
    ctx->pc = 0x163F68u;
    // 0x163f68: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x163f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x163f6c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x163f6cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x163f70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x163f70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163f74: 0x0  nop
    ctx->pc = 0x163f74u;
    // NOP
    // 0x163f78: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x163f78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x163f7c: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x163F7Cu;
    SET_GPR_U32(ctx, 31, 0x163F84u);
    ctx->pc = 0x163F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163F7Cu;
            // 0x163f80: 0xe62000d0  swc1        $f0, 0xD0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163F84u; }
        if (ctx->pc != 0x163F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163F84u; }
        if (ctx->pc != 0x163F84u) { return; }
    }
    ctx->pc = 0x163F84u;
    // 0x163f84: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x163f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x163f88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163f8c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x163f8cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x163f90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x163f90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163f94: 0x0  nop
    ctx->pc = 0x163f94u;
    // NOP
    // 0x163f98: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x163f98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x163f9c: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x163f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x163fa0: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x163fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x163fa4: 0x10000890  b           . + 4 + (0x890 << 2)
    ctx->pc = 0x163FA4u;
    {
        const bool branch_taken_0x163fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163FA4u;
            // 0x163fa8: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163fa4) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x163FACu;
    // 0x163fac: 0x0  nop
    ctx->pc = 0x163facu;
    // NOP
label_163fb0:
    // 0x163fb0: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x163fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x163fb4: 0xc62100d0  lwc1        $f1, 0xD0($s1)
    ctx->pc = 0x163fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163fb8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x163fb8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x163fbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163fc0: 0x0  nop
    ctx->pc = 0x163fc0u;
    // NOP
    // 0x163fc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x163fc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163fc8: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x163FC8u;
    {
        const bool branch_taken_0x163fc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x163FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163FC8u;
            // 0x163fcc: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163fc8) {
            ctx->pc = 0x164020u;
            goto label_164020;
        }
    }
    ctx->pc = 0x163FD0u;
    // 0x163fd0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x163fd0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x163fd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163fd8: 0x0  nop
    ctx->pc = 0x163fd8u;
    // NOP
    // 0x163fdc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163fdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163fe0: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x163FE0u;
    {
        const bool branch_taken_0x163fe0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x163FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163FE0u;
            // 0x163fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163fe0) {
            ctx->pc = 0x164020u;
            goto label_164020;
        }
    }
    ctx->pc = 0x163FE8u;
    // 0x163fe8: 0xc05997c  jal         func_1665F0
    ctx->pc = 0x163FE8u;
    SET_GPR_U32(ctx, 31, 0x163FF0u);
    ctx->pc = 0x1665F0u;
    if (runtime->hasFunction(0x1665F0u)) {
        auto targetFn = runtime->lookupFunction(0x1665F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163FF0u; }
        if (ctx->pc != 0x163FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x1665f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163FF0u; }
        if (ctx->pc != 0x163FF0u) { return; }
    }
    ctx->pc = 0x163FF0u;
    // 0x163ff0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x163ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x163ff4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x163ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x163ff8: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x163ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
    // 0x163ffc: 0xc065590  jal         func_195640
    ctx->pc = 0x163FFCu;
    SET_GPR_U32(ctx, 31, 0x164004u);
    ctx->pc = 0x164000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163FFCu;
            // 0x164000: 0x24450023  addiu       $a1, $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164004u; }
        if (ctx->pc != 0x164004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164004u; }
        if (ctx->pc != 0x164004u) { return; }
    }
    ctx->pc = 0x164004u;
    // 0x164004: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164008: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16400c: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x16400cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x164010: 0xc065590  jal         func_195640
    ctx->pc = 0x164010u;
    SET_GPR_U32(ctx, 31, 0x164018u);
    ctx->pc = 0x164014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164010u;
            // 0x164014: 0x24450023  addiu       $a1, $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164018u; }
        if (ctx->pc != 0x164018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164018u; }
        if (ctx->pc != 0x164018u) { return; }
    }
    ctx->pc = 0x164018u;
    // 0x164018: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x164018u;
    {
        const bool branch_taken_0x164018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164018) {
            ctx->pc = 0x1640B8u;
            goto label_1640b8;
        }
    }
    ctx->pc = 0x164020u;
label_164020:
    // 0x164020: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x164020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x164024: 0xc62100d4  lwc1        $f1, 0xD4($s1)
    ctx->pc = 0x164024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164028: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x164028u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x16402c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16402cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164030: 0x0  nop
    ctx->pc = 0x164030u;
    // NOP
    // 0x164034: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x164034u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164038: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x164038u;
    {
        const bool branch_taken_0x164038 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16403Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164038u;
            // 0x16403c: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164038) {
            ctx->pc = 0x164090u;
            goto label_164090;
        }
    }
    ctx->pc = 0x164040u;
    // 0x164040: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x164040u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x164044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164048: 0x0  nop
    ctx->pc = 0x164048u;
    // NOP
    // 0x16404c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16404cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164050: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x164050u;
    {
        const bool branch_taken_0x164050 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x164054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164050u;
            // 0x164054: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164050) {
            ctx->pc = 0x164090u;
            goto label_164090;
        }
    }
    ctx->pc = 0x164058u;
    // 0x164058: 0xc05997c  jal         func_1665F0
    ctx->pc = 0x164058u;
    SET_GPR_U32(ctx, 31, 0x164060u);
    ctx->pc = 0x1665F0u;
    if (runtime->hasFunction(0x1665F0u)) {
        auto targetFn = runtime->lookupFunction(0x1665F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164060u; }
        if (ctx->pc != 0x164060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x1665f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164060u; }
        if (ctx->pc != 0x164060u) { return; }
    }
    ctx->pc = 0x164060u;
    // 0x164060: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164064: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164068: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x164068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
    // 0x16406c: 0xc065590  jal         func_195640
    ctx->pc = 0x16406Cu;
    SET_GPR_U32(ctx, 31, 0x164074u);
    ctx->pc = 0x164070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16406Cu;
            // 0x164070: 0x24450023  addiu       $a1, $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164074u; }
        if (ctx->pc != 0x164074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164074u; }
        if (ctx->pc != 0x164074u) { return; }
    }
    ctx->pc = 0x164074u;
    // 0x164074: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164078: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16407c: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x16407cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x164080: 0xc065590  jal         func_195640
    ctx->pc = 0x164080u;
    SET_GPR_U32(ctx, 31, 0x164088u);
    ctx->pc = 0x164084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164080u;
            // 0x164084: 0x24450023  addiu       $a1, $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164088u; }
        if (ctx->pc != 0x164088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164088u; }
        if (ctx->pc != 0x164088u) { return; }
    }
    ctx->pc = 0x164088u;
    // 0x164088: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x164088u;
    {
        const bool branch_taken_0x164088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164088) {
            ctx->pc = 0x1640B8u;
            goto label_1640b8;
        }
    }
    ctx->pc = 0x164090u;
label_164090:
    // 0x164090: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x164090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x164094: 0xc62000d0  lwc1        $f0, 0xD0($s1)
    ctx->pc = 0x164094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164098: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x164098u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)28836u)));
    // 0x16409c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16409cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1640a0: 0x0  nop
    ctx->pc = 0x1640a0u;
    // NOP
    // 0x1640a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1640a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1640a8: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x1640a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x1640ac: 0xc62000d4  lwc1        $f0, 0xD4($s1)
    ctx->pc = 0x1640acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1640b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1640b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1640b4: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x1640b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
label_1640b8:
    // 0x1640b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1640b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1640bc: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1640bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1640c0: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1640c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1640c4: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1640c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1640c8: 0xc059a4c  jal         func_166930
    ctx->pc = 0x1640C8u;
    SET_GPR_U32(ctx, 31, 0x1640D0u);
    ctx->pc = 0x1640CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1640C8u;
            // 0x1640cc: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166930u;
    if (runtime->hasFunction(0x166930u)) {
        auto targetFn = runtime->lookupFunction(0x166930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1640D0u; }
        if (ctx->pc != 0x1640D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x166930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1640D0u; }
        if (ctx->pc != 0x1640D0u) { return; }
    }
    ctx->pc = 0x1640D0u;
    // 0x1640d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1640d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1640d4: 0x120202ae  beq         $s0, $v0, . + 4 + (0x2AE << 2)
    ctx->pc = 0x1640D4u;
    {
        const bool branch_taken_0x1640d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1640D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1640D4u;
            // 0x1640d8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1640d4) {
            ctx->pc = 0x164B90u;
            goto label_164b90;
        }
    }
    ctx->pc = 0x1640DCu;
    // 0x1640dc: 0x120200fe  beq         $s0, $v0, . + 4 + (0xFE << 2)
    ctx->pc = 0x1640DCu;
    {
        const bool branch_taken_0x1640dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1640dc) {
            ctx->pc = 0x1644D8u;
            goto label_1644d8;
        }
    }
    ctx->pc = 0x1640E4u;
    // 0x1640e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1640e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1640e8: 0x120200fb  beq         $s0, $v0, . + 4 + (0xFB << 2)
    ctx->pc = 0x1640E8u;
    {
        const bool branch_taken_0x1640e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1640ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1640E8u;
            // 0x1640ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1640e8) {
            ctx->pc = 0x1644D8u;
            goto label_1644d8;
        }
    }
    ctx->pc = 0x1640F0u;
    // 0x1640f0: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1640F0u;
    {
        const bool branch_taken_0x1640f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1640f0) {
            ctx->pc = 0x164108u;
            goto label_164108;
        }
    }
    ctx->pc = 0x1640F8u;
    // 0x1640f8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1640F8u;
    {
        const bool branch_taken_0x1640f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1640f8) {
            ctx->pc = 0x164108u;
            goto label_164108;
        }
    }
    ctx->pc = 0x164100u;
    // 0x164100: 0x1000056b  b           . + 4 + (0x56B << 2)
    ctx->pc = 0x164100u;
    {
        const bool branch_taken_0x164100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164100) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x164108u;
label_164108:
    // 0x164108: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x164108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x16410c: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x16410cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x164110: 0x1062007f  beq         $v1, $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x164110u;
    {
        const bool branch_taken_0x164110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x164114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164110u;
            // 0x164114: 0x240200f0  addiu       $v0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164110) {
            ctx->pc = 0x164310u;
            goto label_164310;
        }
    }
    ctx->pc = 0x164118u;
    // 0x164118: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x164118u;
    {
        const bool branch_taken_0x164118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x164118) {
            ctx->pc = 0x1641F0u;
            goto label_1641f0;
        }
    }
    ctx->pc = 0x164120u;
    // 0x164120: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x164120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x164124: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x164124u;
    {
        const bool branch_taken_0x164124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x164128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164124u;
            // 0x164128: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164124) {
            ctx->pc = 0x164140u;
            goto label_164140;
        }
    }
    ctx->pc = 0x16412Cu;
    // 0x16412c: 0x10620560  beq         $v1, $v0, . + 4 + (0x560 << 2)
    ctx->pc = 0x16412Cu;
    {
        const bool branch_taken_0x16412c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16412c) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x164134u;
    // 0x164134: 0x1000055e  b           . + 4 + (0x55E << 2)
    ctx->pc = 0x164134u;
    {
        const bool branch_taken_0x164134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164134) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x16413Cu;
    // 0x16413c: 0x0  nop
    ctx->pc = 0x16413cu;
    // NOP
label_164140:
    // 0x164140: 0xc065d00  jal         func_197400
    ctx->pc = 0x164140u;
    SET_GPR_U32(ctx, 31, 0x164148u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164148u; }
        if (ctx->pc != 0x164148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164148u; }
        if (ctx->pc != 0x164148u) { return; }
    }
    ctx->pc = 0x164148u;
    // 0x164148: 0x18400559  blez        $v0, . + 4 + (0x559 << 2)
    ctx->pc = 0x164148u;
    {
        const bool branch_taken_0x164148 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x164148) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x164150u;
    // 0x164150: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164154: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164158: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x16415c: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x16415Cu;
    SET_GPR_U32(ctx, 31, 0x164164u);
    ctx->pc = 0x164160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16415Cu;
            // 0x164160: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164164u; }
        if (ctx->pc != 0x164164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164164u; }
        if (ctx->pc != 0x164164u) { return; }
    }
    ctx->pc = 0x164164u;
    // 0x164164: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x164164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x164168: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x16416c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16416cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164170: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164174: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164178: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164178u;
    SET_GPR_U32(ctx, 31, 0x164180u);
    ctx->pc = 0x16417Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164178u;
            // 0x16417c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164180u; }
        if (ctx->pc != 0x164180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164180u; }
        if (ctx->pc != 0x164180u) { return; }
    }
    ctx->pc = 0x164180u;
    // 0x164180: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x164180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x164184: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164188: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16418c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x16418cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164190: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164194: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164194u;
    SET_GPR_U32(ctx, 31, 0x16419Cu);
    ctx->pc = 0x164198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164194u;
            // 0x164198: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16419Cu; }
        if (ctx->pc != 0x16419Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16419Cu; }
        if (ctx->pc != 0x16419Cu) { return; }
    }
    ctx->pc = 0x16419Cu;
    // 0x16419c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x16419cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1641a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1641a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1641a4: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1641a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1641a8: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1641A8u;
    SET_GPR_U32(ctx, 31, 0x1641B0u);
    ctx->pc = 0x1641ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1641A8u;
            // 0x1641ac: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1641B0u; }
        if (ctx->pc != 0x1641B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1641B0u; }
        if (ctx->pc != 0x1641B0u) { return; }
    }
    ctx->pc = 0x1641B0u;
    // 0x1641b0: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1641b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1641b4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1641b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1641b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1641b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1641bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1641bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1641c0: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1641c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1641c4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1641C4u;
    SET_GPR_U32(ctx, 31, 0x1641CCu);
    ctx->pc = 0x1641C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1641C4u;
            // 0x1641c8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1641CCu; }
        if (ctx->pc != 0x1641CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1641CCu; }
        if (ctx->pc != 0x1641CCu) { return; }
    }
    ctx->pc = 0x1641CCu;
    // 0x1641cc: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1641ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1641d0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1641d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1641d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1641d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1641d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1641d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1641dc: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1641dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1641e0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1641E0u;
    SET_GPR_U32(ctx, 31, 0x1641E8u);
    ctx->pc = 0x1641E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1641E0u;
            // 0x1641e4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1641E8u; }
        if (ctx->pc != 0x1641E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1641E8u; }
        if (ctx->pc != 0x1641E8u) { return; }
    }
    ctx->pc = 0x1641E8u;
    // 0x1641e8: 0x10000531  b           . + 4 + (0x531 << 2)
    ctx->pc = 0x1641E8u;
    {
        const bool branch_taken_0x1641e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1641e8) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x1641F0u;
label_1641f0:
    // 0x1641f0: 0xc065d00  jal         func_197400
    ctx->pc = 0x1641F0u;
    SET_GPR_U32(ctx, 31, 0x1641F8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1641F8u; }
        if (ctx->pc != 0x1641F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1641F8u; }
        if (ctx->pc != 0x1641F8u) { return; }
    }
    ctx->pc = 0x1641F8u;
    // 0x1641f8: 0x1840052d  blez        $v0, . + 4 + (0x52D << 2)
    ctx->pc = 0x1641F8u;
    {
        const bool branch_taken_0x1641f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1641f8) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x164200u;
    // 0x164200: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164204: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164208: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x16420c: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x16420Cu;
    SET_GPR_U32(ctx, 31, 0x164214u);
    ctx->pc = 0x164210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16420Cu;
            // 0x164210: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164214u; }
        if (ctx->pc != 0x164214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164214u; }
        if (ctx->pc != 0x164214u) { return; }
    }
    ctx->pc = 0x164214u;
    // 0x164214: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x164214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x164218: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x16421c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16421cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164220: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164224: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164228: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164228u;
    SET_GPR_U32(ctx, 31, 0x164230u);
    ctx->pc = 0x16422Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164228u;
            // 0x16422c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164230u; }
        if (ctx->pc != 0x164230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164230u; }
        if (ctx->pc != 0x164230u) { return; }
    }
    ctx->pc = 0x164230u;
    // 0x164230: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x164230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x164234: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164238: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16423c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x16423cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164240: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164244: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164244u;
    SET_GPR_U32(ctx, 31, 0x16424Cu);
    ctx->pc = 0x164248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164244u;
            // 0x164248: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16424Cu; }
        if (ctx->pc != 0x16424Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16424Cu; }
        if (ctx->pc != 0x16424Cu) { return; }
    }
    ctx->pc = 0x16424Cu;
    // 0x16424c: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x16424cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x164250: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164254: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164258: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16425c: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x16425cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164260: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164260u;
    SET_GPR_U32(ctx, 31, 0x164268u);
    ctx->pc = 0x164264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164260u;
            // 0x164264: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164268u; }
        if (ctx->pc != 0x164268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164268u; }
        if (ctx->pc != 0x164268u) { return; }
    }
    ctx->pc = 0x164268u;
    // 0x164268: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x164268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x16426c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x16426cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164270: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164274: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164278: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x16427c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x16427Cu;
    SET_GPR_U32(ctx, 31, 0x164284u);
    ctx->pc = 0x164280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16427Cu;
            // 0x164280: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164284u; }
        if (ctx->pc != 0x164284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164284u; }
        if (ctx->pc != 0x164284u) { return; }
    }
    ctx->pc = 0x164284u;
    // 0x164284: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164288: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16428c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x16428cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164290: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x164290u;
    SET_GPR_U32(ctx, 31, 0x164298u);
    ctx->pc = 0x164294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164290u;
            // 0x164294: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164298u; }
        if (ctx->pc != 0x164298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164298u; }
        if (ctx->pc != 0x164298u) { return; }
    }
    ctx->pc = 0x164298u;
    // 0x164298: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x164298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x16429c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x16429cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1642a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1642a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1642a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1642a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1642a8: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1642a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1642ac: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1642ACu;
    SET_GPR_U32(ctx, 31, 0x1642B4u);
    ctx->pc = 0x1642B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1642ACu;
            // 0x1642b0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1642B4u; }
        if (ctx->pc != 0x1642B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1642B4u; }
        if (ctx->pc != 0x1642B4u) { return; }
    }
    ctx->pc = 0x1642B4u;
    // 0x1642b4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1642b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1642b8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1642b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1642bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1642bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1642c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1642c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1642c4: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1642c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1642c8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1642C8u;
    SET_GPR_U32(ctx, 31, 0x1642D0u);
    ctx->pc = 0x1642CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1642C8u;
            // 0x1642cc: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1642D0u; }
        if (ctx->pc != 0x1642D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1642D0u; }
        if (ctx->pc != 0x1642D0u) { return; }
    }
    ctx->pc = 0x1642D0u;
    // 0x1642d0: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1642d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x1642d4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1642d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1642d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1642d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1642dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1642dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1642e0: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1642e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1642e4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1642E4u;
    SET_GPR_U32(ctx, 31, 0x1642ECu);
    ctx->pc = 0x1642E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1642E4u;
            // 0x1642e8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1642ECu; }
        if (ctx->pc != 0x1642ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1642ECu; }
        if (ctx->pc != 0x1642ECu) { return; }
    }
    ctx->pc = 0x1642ECu;
    // 0x1642ec: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1642ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x1642f0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1642f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1642f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1642f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1642f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1642f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1642fc: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1642fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164300: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164300u;
    SET_GPR_U32(ctx, 31, 0x164308u);
    ctx->pc = 0x164304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164300u;
            // 0x164304: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164308u; }
        if (ctx->pc != 0x164308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164308u; }
        if (ctx->pc != 0x164308u) { return; }
    }
    ctx->pc = 0x164308u;
    // 0x164308: 0x100004e9  b           . + 4 + (0x4E9 << 2)
    ctx->pc = 0x164308u;
    {
        const bool branch_taken_0x164308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164308) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x164310u;
label_164310:
    // 0x164310: 0xc065d00  jal         func_197400
    ctx->pc = 0x164310u;
    SET_GPR_U32(ctx, 31, 0x164318u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164318u; }
        if (ctx->pc != 0x164318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164318u; }
        if (ctx->pc != 0x164318u) { return; }
    }
    ctx->pc = 0x164318u;
    // 0x164318: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x164318u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16431c: 0x14200046  bnez        $at, . + 4 + (0x46 << 2)
    ctx->pc = 0x16431Cu;
    {
        const bool branch_taken_0x16431c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16431c) {
            ctx->pc = 0x164438u;
            goto label_164438;
        }
    }
    ctx->pc = 0x164324u;
    // 0x164324: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164328: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16432c: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x16432cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164330: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x164330u;
    SET_GPR_U32(ctx, 31, 0x164338u);
    ctx->pc = 0x164334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164330u;
            // 0x164334: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164338u; }
        if (ctx->pc != 0x164338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164338u; }
        if (ctx->pc != 0x164338u) { return; }
    }
    ctx->pc = 0x164338u;
    // 0x164338: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x164338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x16433c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x16433cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164340: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164344: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164348: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x16434c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x16434Cu;
    SET_GPR_U32(ctx, 31, 0x164354u);
    ctx->pc = 0x164350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16434Cu;
            // 0x164350: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164354u; }
        if (ctx->pc != 0x164354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164354u; }
        if (ctx->pc != 0x164354u) { return; }
    }
    ctx->pc = 0x164354u;
    // 0x164354: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x164354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x164358: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x16435c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16435cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164360: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164364: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164368: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164368u;
    SET_GPR_U32(ctx, 31, 0x164370u);
    ctx->pc = 0x16436Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164368u;
            // 0x16436c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164370u; }
        if (ctx->pc != 0x164370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164370u; }
        if (ctx->pc != 0x164370u) { return; }
    }
    ctx->pc = 0x164370u;
    // 0x164370: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x164370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
    // 0x164374: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164378: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16437c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x16437cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164380: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164384: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164384u;
    SET_GPR_U32(ctx, 31, 0x16438Cu);
    ctx->pc = 0x164388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164384u;
            // 0x164388: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16438Cu; }
        if (ctx->pc != 0x16438Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16438Cu; }
        if (ctx->pc != 0x16438Cu) { return; }
    }
    ctx->pc = 0x16438Cu;
    // 0x16438c: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x16438cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x164390: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164394: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164398: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16439c: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x16439cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1643a0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1643A0u;
    SET_GPR_U32(ctx, 31, 0x1643A8u);
    ctx->pc = 0x1643A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1643A0u;
            // 0x1643a4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1643A8u; }
        if (ctx->pc != 0x1643A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1643A8u; }
        if (ctx->pc != 0x1643A8u) { return; }
    }
    ctx->pc = 0x1643A8u;
    // 0x1643a8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1643a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1643ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1643acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1643b0: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1643b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1643b4: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1643B4u;
    SET_GPR_U32(ctx, 31, 0x1643BCu);
    ctx->pc = 0x1643B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1643B4u;
            // 0x1643b8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1643BCu; }
        if (ctx->pc != 0x1643BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1643BCu; }
        if (ctx->pc != 0x1643BCu) { return; }
    }
    ctx->pc = 0x1643BCu;
    // 0x1643bc: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1643bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1643c0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1643c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1643c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1643c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1643c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1643c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1643cc: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1643ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1643d0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1643D0u;
    SET_GPR_U32(ctx, 31, 0x1643D8u);
    ctx->pc = 0x1643D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1643D0u;
            // 0x1643d4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1643D8u; }
        if (ctx->pc != 0x1643D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1643D8u; }
        if (ctx->pc != 0x1643D8u) { return; }
    }
    ctx->pc = 0x1643D8u;
    // 0x1643d8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1643d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1643dc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1643dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1643e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1643e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1643e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1643e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1643e8: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1643e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1643ec: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1643ECu;
    SET_GPR_U32(ctx, 31, 0x1643F4u);
    ctx->pc = 0x1643F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1643ECu;
            // 0x1643f0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1643F4u; }
        if (ctx->pc != 0x1643F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1643F4u; }
        if (ctx->pc != 0x1643F4u) { return; }
    }
    ctx->pc = 0x1643F4u;
    // 0x1643f4: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x1643f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
    // 0x1643f8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1643f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1643fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1643fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164400: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164404: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164408: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164408u;
    SET_GPR_U32(ctx, 31, 0x164410u);
    ctx->pc = 0x16440Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164408u;
            // 0x16440c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164410u; }
        if (ctx->pc != 0x164410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164410u; }
        if (ctx->pc != 0x164410u) { return; }
    }
    ctx->pc = 0x164410u;
    // 0x164410: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x164410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x164414: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164418: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16441c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x16441cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164420: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164424: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164424u;
    SET_GPR_U32(ctx, 31, 0x16442Cu);
    ctx->pc = 0x164428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164424u;
            // 0x164428: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16442Cu; }
        if (ctx->pc != 0x16442Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16442Cu; }
        if (ctx->pc != 0x16442Cu) { return; }
    }
    ctx->pc = 0x16442Cu;
    // 0x16442c: 0x100004a0  b           . + 4 + (0x4A0 << 2)
    ctx->pc = 0x16442Cu;
    {
        const bool branch_taken_0x16442c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16442c) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x164434u;
    // 0x164434: 0x0  nop
    ctx->pc = 0x164434u;
    // NOP
label_164438:
    // 0x164438: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x16443c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x16443cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164440: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164444: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x164444u;
    SET_GPR_U32(ctx, 31, 0x16444Cu);
    ctx->pc = 0x164448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164444u;
            // 0x164448: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16444Cu; }
        if (ctx->pc != 0x16444Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16444Cu; }
        if (ctx->pc != 0x16444Cu) { return; }
    }
    ctx->pc = 0x16444Cu;
    // 0x16444c: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x16444cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x164450: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164454: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164458: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16445c: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x16445cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164460: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164460u;
    SET_GPR_U32(ctx, 31, 0x164468u);
    ctx->pc = 0x164464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164460u;
            // 0x164464: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164468u; }
        if (ctx->pc != 0x164468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164468u; }
        if (ctx->pc != 0x164468u) { return; }
    }
    ctx->pc = 0x164468u;
    // 0x164468: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x164468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x16446c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x16446cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164470: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164474: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164478: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x16447c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x16447Cu;
    SET_GPR_U32(ctx, 31, 0x164484u);
    ctx->pc = 0x164480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16447Cu;
            // 0x164480: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164484u; }
        if (ctx->pc != 0x164484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164484u; }
        if (ctx->pc != 0x164484u) { return; }
    }
    ctx->pc = 0x164484u;
    // 0x164484: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164488: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16448c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x16448cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164490: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x164490u;
    SET_GPR_U32(ctx, 31, 0x164498u);
    ctx->pc = 0x164494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164490u;
            // 0x164494: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164498u; }
        if (ctx->pc != 0x164498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164498u; }
        if (ctx->pc != 0x164498u) { return; }
    }
    ctx->pc = 0x164498u;
    // 0x164498: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x164498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x16449c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x16449cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1644a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1644a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1644a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1644a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1644a8: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1644a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1644ac: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1644ACu;
    SET_GPR_U32(ctx, 31, 0x1644B4u);
    ctx->pc = 0x1644B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1644ACu;
            // 0x1644b0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1644B4u; }
        if (ctx->pc != 0x1644B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1644B4u; }
        if (ctx->pc != 0x1644B4u) { return; }
    }
    ctx->pc = 0x1644B4u;
    // 0x1644b4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1644b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1644b8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1644b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1644bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1644bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1644c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1644c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1644c4: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1644c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1644c8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1644C8u;
    SET_GPR_U32(ctx, 31, 0x1644D0u);
    ctx->pc = 0x1644CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1644C8u;
            // 0x1644cc: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1644D0u; }
        if (ctx->pc != 0x1644D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1644D0u; }
        if (ctx->pc != 0x1644D0u) { return; }
    }
    ctx->pc = 0x1644D0u;
    // 0x1644d0: 0x10000477  b           . + 4 + (0x477 << 2)
    ctx->pc = 0x1644D0u;
    {
        const bool branch_taken_0x1644d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1644d0) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x1644D8u;
label_1644d8:
    // 0x1644d8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1644D8u;
    SET_GPR_U32(ctx, 31, 0x1644E0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1644E0u; }
        if (ctx->pc != 0x1644E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1644E0u; }
        if (ctx->pc != 0x1644E0u) { return; }
    }
    ctx->pc = 0x1644E0u;
    // 0x1644e0: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1644E0u;
    {
        const bool branch_taken_0x1644e0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1644e0) {
            ctx->pc = 0x164528u;
            goto label_164528;
        }
    }
    ctx->pc = 0x1644E8u;
    // 0x1644e8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1644e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1644ec: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1644ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1644f0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1644f0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1644f4: 0x0  nop
    ctx->pc = 0x1644f4u;
    // NOP
    // 0x1644f8: 0x0  nop
    ctx->pc = 0x1644f8u;
    // NOP
    // 0x1644fc: 0x1010  mfhi        $v0
    ctx->pc = 0x1644fcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x164500: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x164500u;
    {
        const bool branch_taken_0x164500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164500u;
            // 0x164504: 0x286101a4  slti        $at, $v1, 0x1A4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)420) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164500) {
            ctx->pc = 0x164560u;
            goto label_164560;
        }
    }
    ctx->pc = 0x164508u;
    // 0x164508: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x164508u;
    {
        const bool branch_taken_0x164508 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x164508) {
            ctx->pc = 0x164560u;
            goto label_164560;
        }
    }
    ctx->pc = 0x164510u;
    // 0x164510: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164514: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x164514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164518: 0xc06560c  jal         func_195830
    ctx->pc = 0x164518u;
    SET_GPR_U32(ctx, 31, 0x164520u);
    ctx->pc = 0x16451Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164518u;
            // 0x16451c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164520u; }
        if (ctx->pc != 0x164520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164520u; }
        if (ctx->pc != 0x164520u) { return; }
    }
    ctx->pc = 0x164520u;
    // 0x164520: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x164520u;
    {
        const bool branch_taken_0x164520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164520) {
            ctx->pc = 0x164560u;
            goto label_164560;
        }
    }
    ctx->pc = 0x164528u;
label_164528:
    // 0x164528: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x164528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x16452c: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x16452cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x164530: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x164530u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x164534: 0x0  nop
    ctx->pc = 0x164534u;
    // NOP
    // 0x164538: 0x0  nop
    ctx->pc = 0x164538u;
    // NOP
    // 0x16453c: 0x1010  mfhi        $v0
    ctx->pc = 0x16453cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x164540: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x164540u;
    {
        const bool branch_taken_0x164540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164540u;
            // 0x164544: 0x286101a4  slti        $at, $v1, 0x1A4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)420) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164540) {
            ctx->pc = 0x164560u;
            goto label_164560;
        }
    }
    ctx->pc = 0x164548u;
    // 0x164548: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x164548u;
    {
        const bool branch_taken_0x164548 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x164548) {
            ctx->pc = 0x164560u;
            goto label_164560;
        }
    }
    ctx->pc = 0x164550u;
    // 0x164550: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164554: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x164554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164558: 0xc06560c  jal         func_195830
    ctx->pc = 0x164558u;
    SET_GPR_U32(ctx, 31, 0x164560u);
    ctx->pc = 0x16455Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164558u;
            // 0x16455c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164560u; }
        if (ctx->pc != 0x164560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164560u; }
        if (ctx->pc != 0x164560u) { return; }
    }
    ctx->pc = 0x164560u;
label_164560:
    // 0x164560: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x164560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x164564: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x164564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x164568: 0x106200df  beq         $v1, $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x164568u;
    {
        const bool branch_taken_0x164568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16456Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164568u;
            // 0x16456c: 0x240200f0  addiu       $v0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164568) {
            ctx->pc = 0x1648E8u;
            goto label_1648e8;
        }
    }
    ctx->pc = 0x164570u;
    // 0x164570: 0x10620079  beq         $v1, $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x164570u;
    {
        const bool branch_taken_0x164570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x164570) {
            ctx->pc = 0x164758u;
            goto label_164758;
        }
    }
    ctx->pc = 0x164578u;
    // 0x164578: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x164578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x16457c: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x16457Cu;
    {
        const bool branch_taken_0x16457c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x164580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16457Cu;
            // 0x164580: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16457c) {
            ctx->pc = 0x164638u;
            goto label_164638;
        }
    }
    ctx->pc = 0x164584u;
    // 0x164584: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164584u;
    {
        const bool branch_taken_0x164584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x164584) {
            ctx->pc = 0x164598u;
            goto label_164598;
        }
    }
    ctx->pc = 0x16458Cu;
    // 0x16458c: 0x10000448  b           . + 4 + (0x448 << 2)
    ctx->pc = 0x16458Cu;
    {
        const bool branch_taken_0x16458c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16458c) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x164594u;
    // 0x164594: 0x0  nop
    ctx->pc = 0x164594u;
    // NOP
label_164598:
    // 0x164598: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x16459c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x16459cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1645a0: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1645a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1645a4: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1645A4u;
    SET_GPR_U32(ctx, 31, 0x1645ACu);
    ctx->pc = 0x1645A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1645A4u;
            // 0x1645a8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1645ACu; }
        if (ctx->pc != 0x1645ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1645ACu; }
        if (ctx->pc != 0x1645ACu) { return; }
    }
    ctx->pc = 0x1645ACu;
    // 0x1645ac: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1645acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1645b0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1645b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1645b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1645b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1645b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1645b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1645bc: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1645bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1645c0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1645C0u;
    SET_GPR_U32(ctx, 31, 0x1645C8u);
    ctx->pc = 0x1645C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1645C0u;
            // 0x1645c4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1645C8u; }
        if (ctx->pc != 0x1645C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1645C8u; }
        if (ctx->pc != 0x1645C8u) { return; }
    }
    ctx->pc = 0x1645C8u;
    // 0x1645c8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1645c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1645cc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1645ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1645d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1645d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1645d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1645d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1645d8: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1645d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1645dc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1645DCu;
    SET_GPR_U32(ctx, 31, 0x1645E4u);
    ctx->pc = 0x1645E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1645DCu;
            // 0x1645e0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1645E4u; }
        if (ctx->pc != 0x1645E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1645E4u; }
        if (ctx->pc != 0x1645E4u) { return; }
    }
    ctx->pc = 0x1645E4u;
    // 0x1645e4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1645e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1645e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1645e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1645ec: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1645ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1645f0: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1645F0u;
    SET_GPR_U32(ctx, 31, 0x1645F8u);
    ctx->pc = 0x1645F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1645F0u;
            // 0x1645f4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1645F8u; }
        if (ctx->pc != 0x1645F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1645F8u; }
        if (ctx->pc != 0x1645F8u) { return; }
    }
    ctx->pc = 0x1645F8u;
    // 0x1645f8: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1645f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1645fc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1645fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164600: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164604: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164608: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x16460c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x16460Cu;
    SET_GPR_U32(ctx, 31, 0x164614u);
    ctx->pc = 0x164610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16460Cu;
            // 0x164610: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164614u; }
        if (ctx->pc != 0x164614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164614u; }
        if (ctx->pc != 0x164614u) { return; }
    }
    ctx->pc = 0x164614u;
    // 0x164614: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x164614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x164618: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x16461c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16461cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164620: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164624: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164628: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164628u;
    SET_GPR_U32(ctx, 31, 0x164630u);
    ctx->pc = 0x16462Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164628u;
            // 0x16462c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164630u; }
        if (ctx->pc != 0x164630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164630u; }
        if (ctx->pc != 0x164630u) { return; }
    }
    ctx->pc = 0x164630u;
    // 0x164630: 0x1000041f  b           . + 4 + (0x41F << 2)
    ctx->pc = 0x164630u;
    {
        const bool branch_taken_0x164630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164630) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x164638u;
label_164638:
    // 0x164638: 0xc065d00  jal         func_197400
    ctx->pc = 0x164638u;
    SET_GPR_U32(ctx, 31, 0x164640u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164640u; }
        if (ctx->pc != 0x164640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164640u; }
        if (ctx->pc != 0x164640u) { return; }
    }
    ctx->pc = 0x164640u;
    // 0x164640: 0x1840041b  blez        $v0, . + 4 + (0x41B << 2)
    ctx->pc = 0x164640u;
    {
        const bool branch_taken_0x164640 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x164640) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x164648u;
    // 0x164648: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x16464c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x16464cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164650: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164654: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x164654u;
    SET_GPR_U32(ctx, 31, 0x16465Cu);
    ctx->pc = 0x164658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164654u;
            // 0x164658: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16465Cu; }
        if (ctx->pc != 0x16465Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16465Cu; }
        if (ctx->pc != 0x16465Cu) { return; }
    }
    ctx->pc = 0x16465Cu;
    // 0x16465c: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x16465cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x164660: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164664: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164668: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16466c: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x16466cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164670: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164670u;
    SET_GPR_U32(ctx, 31, 0x164678u);
    ctx->pc = 0x164674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164670u;
            // 0x164674: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164678u; }
        if (ctx->pc != 0x164678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164678u; }
        if (ctx->pc != 0x164678u) { return; }
    }
    ctx->pc = 0x164678u;
    // 0x164678: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x164678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x16467c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x16467cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164680: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164684: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164688: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x16468c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x16468Cu;
    SET_GPR_U32(ctx, 31, 0x164694u);
    ctx->pc = 0x164690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16468Cu;
            // 0x164690: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164694u; }
        if (ctx->pc != 0x164694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164694u; }
        if (ctx->pc != 0x164694u) { return; }
    }
    ctx->pc = 0x164694u;
    // 0x164694: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x164694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x164698: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x16469c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16469cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1646a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1646a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1646a4: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1646a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1646a8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1646A8u;
    SET_GPR_U32(ctx, 31, 0x1646B0u);
    ctx->pc = 0x1646ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1646A8u;
            // 0x1646ac: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1646B0u; }
        if (ctx->pc != 0x1646B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1646B0u; }
        if (ctx->pc != 0x1646B0u) { return; }
    }
    ctx->pc = 0x1646B0u;
    // 0x1646b0: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1646b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x1646b4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1646b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1646b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1646b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1646bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1646bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1646c0: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1646c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1646c4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1646C4u;
    SET_GPR_U32(ctx, 31, 0x1646CCu);
    ctx->pc = 0x1646C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1646C4u;
            // 0x1646c8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1646CCu; }
        if (ctx->pc != 0x1646CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1646CCu; }
        if (ctx->pc != 0x1646CCu) { return; }
    }
    ctx->pc = 0x1646CCu;
    // 0x1646cc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1646ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1646d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1646d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1646d4: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1646d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1646d8: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1646D8u;
    SET_GPR_U32(ctx, 31, 0x1646E0u);
    ctx->pc = 0x1646DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1646D8u;
            // 0x1646dc: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1646E0u; }
        if (ctx->pc != 0x1646E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1646E0u; }
        if (ctx->pc != 0x1646E0u) { return; }
    }
    ctx->pc = 0x1646E0u;
    // 0x1646e0: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1646e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1646e4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1646e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1646e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1646e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1646ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1646ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1646f0: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1646f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1646f4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1646F4u;
    SET_GPR_U32(ctx, 31, 0x1646FCu);
    ctx->pc = 0x1646F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1646F4u;
            // 0x1646f8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1646FCu; }
        if (ctx->pc != 0x1646FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1646FCu; }
        if (ctx->pc != 0x1646FCu) { return; }
    }
    ctx->pc = 0x1646FCu;
    // 0x1646fc: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1646fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x164700: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164704: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164708: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16470c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x16470cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164710: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164710u;
    SET_GPR_U32(ctx, 31, 0x164718u);
    ctx->pc = 0x164714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164710u;
            // 0x164714: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164718u; }
        if (ctx->pc != 0x164718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164718u; }
        if (ctx->pc != 0x164718u) { return; }
    }
    ctx->pc = 0x164718u;
    // 0x164718: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x164718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x16471c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x16471cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164720: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164724: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164728: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x16472c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x16472Cu;
    SET_GPR_U32(ctx, 31, 0x164734u);
    ctx->pc = 0x164730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16472Cu;
            // 0x164730: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164734u; }
        if (ctx->pc != 0x164734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164734u; }
        if (ctx->pc != 0x164734u) { return; }
    }
    ctx->pc = 0x164734u;
    // 0x164734: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x164734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x164738: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x16473c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16473cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164740: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164744: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164748: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164748u;
    SET_GPR_U32(ctx, 31, 0x164750u);
    ctx->pc = 0x16474Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164748u;
            // 0x16474c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164750u; }
        if (ctx->pc != 0x164750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164750u; }
        if (ctx->pc != 0x164750u) { return; }
    }
    ctx->pc = 0x164750u;
    // 0x164750: 0x100003d7  b           . + 4 + (0x3D7 << 2)
    ctx->pc = 0x164750u;
    {
        const bool branch_taken_0x164750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164750) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x164758u;
label_164758:
    // 0x164758: 0xc065d00  jal         func_197400
    ctx->pc = 0x164758u;
    SET_GPR_U32(ctx, 31, 0x164760u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164760u; }
        if (ctx->pc != 0x164760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164760u; }
        if (ctx->pc != 0x164760u) { return; }
    }
    ctx->pc = 0x164760u;
    // 0x164760: 0x184003d3  blez        $v0, . + 4 + (0x3D3 << 2)
    ctx->pc = 0x164760u;
    {
        const bool branch_taken_0x164760 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x164760) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x164768u;
    // 0x164768: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x16476c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x16476cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164770: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164774: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x164774u;
    SET_GPR_U32(ctx, 31, 0x16477Cu);
    ctx->pc = 0x164778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164774u;
            // 0x164778: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16477Cu; }
        if (ctx->pc != 0x16477Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16477Cu; }
        if (ctx->pc != 0x16477Cu) { return; }
    }
    ctx->pc = 0x16477Cu;
    // 0x16477c: 0x3c02c270  lui         $v0, 0xC270
    ctx->pc = 0x16477cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49776 << 16));
    // 0x164780: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164784: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164788: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16478c: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x16478cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164790: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164790u;
    SET_GPR_U32(ctx, 31, 0x164798u);
    ctx->pc = 0x164794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164790u;
            // 0x164794: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164798u; }
        if (ctx->pc != 0x164798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164798u; }
        if (ctx->pc != 0x164798u) { return; }
    }
    ctx->pc = 0x164798u;
    // 0x164798: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x164798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x16479c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x16479cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1647a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1647a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1647a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1647a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1647a8: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1647a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1647ac: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1647ACu;
    SET_GPR_U32(ctx, 31, 0x1647B4u);
    ctx->pc = 0x1647B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1647ACu;
            // 0x1647b0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1647B4u; }
        if (ctx->pc != 0x1647B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1647B4u; }
        if (ctx->pc != 0x1647B4u) { return; }
    }
    ctx->pc = 0x1647B4u;
    // 0x1647b4: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1647b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x1647b8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1647b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1647bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1647bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1647c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1647c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1647c4: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1647c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1647c8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1647C8u;
    SET_GPR_U32(ctx, 31, 0x1647D0u);
    ctx->pc = 0x1647CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1647C8u;
            // 0x1647cc: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1647D0u; }
        if (ctx->pc != 0x1647D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1647D0u; }
        if (ctx->pc != 0x1647D0u) { return; }
    }
    ctx->pc = 0x1647D0u;
    // 0x1647d0: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1647d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x1647d4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1647d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1647d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1647d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1647dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1647dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1647e0: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1647e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1647e4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1647E4u;
    SET_GPR_U32(ctx, 31, 0x1647ECu);
    ctx->pc = 0x1647E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1647E4u;
            // 0x1647e8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1647ECu; }
        if (ctx->pc != 0x1647ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1647ECu; }
        if (ctx->pc != 0x1647ECu) { return; }
    }
    ctx->pc = 0x1647ECu;
    // 0x1647ec: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x1647ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
    // 0x1647f0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1647f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1647f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1647f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1647f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1647f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1647fc: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1647fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164800: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164800u;
    SET_GPR_U32(ctx, 31, 0x164808u);
    ctx->pc = 0x164804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164800u;
            // 0x164804: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164808u; }
        if (ctx->pc != 0x164808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164808u; }
        if (ctx->pc != 0x164808u) { return; }
    }
    ctx->pc = 0x164808u;
    // 0x164808: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x164808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x16480c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x16480cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164810: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164814: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164818: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x16481c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x16481Cu;
    SET_GPR_U32(ctx, 31, 0x164824u);
    ctx->pc = 0x164820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16481Cu;
            // 0x164820: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164824u; }
        if (ctx->pc != 0x164824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164824u; }
        if (ctx->pc != 0x164824u) { return; }
    }
    ctx->pc = 0x164824u;
    // 0x164824: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164828: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16482c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x16482cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164830: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x164830u;
    SET_GPR_U32(ctx, 31, 0x164838u);
    ctx->pc = 0x164834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164830u;
            // 0x164834: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164838u; }
        if (ctx->pc != 0x164838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164838u; }
        if (ctx->pc != 0x164838u) { return; }
    }
    ctx->pc = 0x164838u;
    // 0x164838: 0x3c02c270  lui         $v0, 0xC270
    ctx->pc = 0x164838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49776 << 16));
    // 0x16483c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x16483cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164840: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164844: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164848: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x16484c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x16484Cu;
    SET_GPR_U32(ctx, 31, 0x164854u);
    ctx->pc = 0x164850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16484Cu;
            // 0x164850: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164854u; }
        if (ctx->pc != 0x164854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164854u; }
        if (ctx->pc != 0x164854u) { return; }
    }
    ctx->pc = 0x164854u;
    // 0x164854: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x164854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x164858: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x16485c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16485cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164860: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164864: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164868: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164868u;
    SET_GPR_U32(ctx, 31, 0x164870u);
    ctx->pc = 0x16486Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164868u;
            // 0x16486c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164870u; }
        if (ctx->pc != 0x164870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164870u; }
        if (ctx->pc != 0x164870u) { return; }
    }
    ctx->pc = 0x164870u;
    // 0x164870: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x164870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x164874: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164878: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16487c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x16487cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164880: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164884: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164884u;
    SET_GPR_U32(ctx, 31, 0x16488Cu);
    ctx->pc = 0x164888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164884u;
            // 0x164888: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16488Cu; }
        if (ctx->pc != 0x16488Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16488Cu; }
        if (ctx->pc != 0x16488Cu) { return; }
    }
    ctx->pc = 0x16488Cu;
    // 0x16488c: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x16488cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x164890: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164894: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164898: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16489c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x16489cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1648a0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1648A0u;
    SET_GPR_U32(ctx, 31, 0x1648A8u);
    ctx->pc = 0x1648A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1648A0u;
            // 0x1648a4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1648A8u; }
        if (ctx->pc != 0x1648A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1648A8u; }
        if (ctx->pc != 0x1648A8u) { return; }
    }
    ctx->pc = 0x1648A8u;
    // 0x1648a8: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x1648a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
    // 0x1648ac: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1648acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1648b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1648b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1648b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1648b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1648b8: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1648b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1648bc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1648BCu;
    SET_GPR_U32(ctx, 31, 0x1648C4u);
    ctx->pc = 0x1648C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1648BCu;
            // 0x1648c0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1648C4u; }
        if (ctx->pc != 0x1648C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1648C4u; }
        if (ctx->pc != 0x1648C4u) { return; }
    }
    ctx->pc = 0x1648C4u;
    // 0x1648c4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1648c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1648c8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1648c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1648cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1648ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1648d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1648d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1648d4: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1648d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1648d8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1648D8u;
    SET_GPR_U32(ctx, 31, 0x1648E0u);
    ctx->pc = 0x1648DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1648D8u;
            // 0x1648dc: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1648E0u; }
        if (ctx->pc != 0x1648E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1648E0u; }
        if (ctx->pc != 0x1648E0u) { return; }
    }
    ctx->pc = 0x1648E0u;
    // 0x1648e0: 0x10000373  b           . + 4 + (0x373 << 2)
    ctx->pc = 0x1648E0u;
    {
        const bool branch_taken_0x1648e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1648e0) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x1648E8u;
label_1648e8:
    // 0x1648e8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1648E8u;
    SET_GPR_U32(ctx, 31, 0x1648F0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1648F0u; }
        if (ctx->pc != 0x1648F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1648F0u; }
        if (ctx->pc != 0x1648F0u) { return; }
    }
    ctx->pc = 0x1648F0u;
    // 0x1648f0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1648f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1648f4: 0x14200062  bnez        $at, . + 4 + (0x62 << 2)
    ctx->pc = 0x1648F4u;
    {
        const bool branch_taken_0x1648f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1648f4) {
            ctx->pc = 0x164A80u;
            goto label_164a80;
        }
    }
    ctx->pc = 0x1648FCu;
    // 0x1648fc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1648fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164900: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164904: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164908: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x164908u;
    SET_GPR_U32(ctx, 31, 0x164910u);
    ctx->pc = 0x16490Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164908u;
            // 0x16490c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164910u; }
        if (ctx->pc != 0x164910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164910u; }
        if (ctx->pc != 0x164910u) { return; }
    }
    ctx->pc = 0x164910u;
    // 0x164910: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x164910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x164914: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164918: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16491c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x16491cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164920: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164924: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164924u;
    SET_GPR_U32(ctx, 31, 0x16492Cu);
    ctx->pc = 0x164928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164924u;
            // 0x164928: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16492Cu; }
        if (ctx->pc != 0x16492Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16492Cu; }
        if (ctx->pc != 0x16492Cu) { return; }
    }
    ctx->pc = 0x16492Cu;
    // 0x16492c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x16492cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x164930: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164934: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164938: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16493c: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x16493cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164940: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164940u;
    SET_GPR_U32(ctx, 31, 0x164948u);
    ctx->pc = 0x164944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164940u;
            // 0x164944: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164948u; }
        if (ctx->pc != 0x164948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164948u; }
        if (ctx->pc != 0x164948u) { return; }
    }
    ctx->pc = 0x164948u;
    // 0x164948: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x164948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
    // 0x16494c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x16494cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164950: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164954: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164958: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x16495c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x16495Cu;
    SET_GPR_U32(ctx, 31, 0x164964u);
    ctx->pc = 0x164960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16495Cu;
            // 0x164960: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164964u; }
        if (ctx->pc != 0x164964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164964u; }
        if (ctx->pc != 0x164964u) { return; }
    }
    ctx->pc = 0x164964u;
    // 0x164964: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x164964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x164968: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x16496c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16496cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164970: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164974: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164978: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164978u;
    SET_GPR_U32(ctx, 31, 0x164980u);
    ctx->pc = 0x16497Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164978u;
            // 0x16497c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164980u; }
        if (ctx->pc != 0x164980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164980u; }
        if (ctx->pc != 0x164980u) { return; }
    }
    ctx->pc = 0x164980u;
    // 0x164980: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x164980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x164984: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164988: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16498c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x16498cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164990: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164994: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164994u;
    SET_GPR_U32(ctx, 31, 0x16499Cu);
    ctx->pc = 0x164998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164994u;
            // 0x164998: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16499Cu; }
        if (ctx->pc != 0x16499Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16499Cu; }
        if (ctx->pc != 0x16499Cu) { return; }
    }
    ctx->pc = 0x16499Cu;
    // 0x16499c: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x16499cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1649a0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1649a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1649a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1649a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1649a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1649a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1649ac: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1649acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1649b0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1649B0u;
    SET_GPR_U32(ctx, 31, 0x1649B8u);
    ctx->pc = 0x1649B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1649B0u;
            // 0x1649b4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1649B8u; }
        if (ctx->pc != 0x1649B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1649B8u; }
        if (ctx->pc != 0x1649B8u) { return; }
    }
    ctx->pc = 0x1649B8u;
    // 0x1649b8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1649b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1649bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1649bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1649c0: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1649c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1649c4: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1649C4u;
    SET_GPR_U32(ctx, 31, 0x1649CCu);
    ctx->pc = 0x1649C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1649C4u;
            // 0x1649c8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1649CCu; }
        if (ctx->pc != 0x1649CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1649CCu; }
        if (ctx->pc != 0x1649CCu) { return; }
    }
    ctx->pc = 0x1649CCu;
    // 0x1649cc: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1649ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1649d0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1649d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1649d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1649d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1649d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1649d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1649dc: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1649dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1649e0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1649E0u;
    SET_GPR_U32(ctx, 31, 0x1649E8u);
    ctx->pc = 0x1649E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1649E0u;
            // 0x1649e4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1649E8u; }
        if (ctx->pc != 0x1649E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1649E8u; }
        if (ctx->pc != 0x1649E8u) { return; }
    }
    ctx->pc = 0x1649E8u;
    // 0x1649e8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1649e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1649ec: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1649ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1649f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1649f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1649f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1649f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1649f8: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1649f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1649fc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1649FCu;
    SET_GPR_U32(ctx, 31, 0x164A04u);
    ctx->pc = 0x164A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1649FCu;
            // 0x164a00: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A04u; }
        if (ctx->pc != 0x164A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A04u; }
        if (ctx->pc != 0x164A04u) { return; }
    }
    ctx->pc = 0x164A04u;
    // 0x164a04: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x164a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
    // 0x164a08: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164a0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164a10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164a14: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164a18: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164A18u;
    SET_GPR_U32(ctx, 31, 0x164A20u);
    ctx->pc = 0x164A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164A18u;
            // 0x164a1c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A20u; }
        if (ctx->pc != 0x164A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A20u; }
        if (ctx->pc != 0x164A20u) { return; }
    }
    ctx->pc = 0x164A20u;
    // 0x164a20: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x164a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x164a24: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164a28: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164a28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164a2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164a30: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164a34: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164A34u;
    SET_GPR_U32(ctx, 31, 0x164A3Cu);
    ctx->pc = 0x164A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164A34u;
            // 0x164a38: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A3Cu; }
        if (ctx->pc != 0x164A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A3Cu; }
        if (ctx->pc != 0x164A3Cu) { return; }
    }
    ctx->pc = 0x164A3Cu;
    // 0x164a3c: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x164a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x164a40: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164a44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164a48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164a4c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164a50: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164A50u;
    SET_GPR_U32(ctx, 31, 0x164A58u);
    ctx->pc = 0x164A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164A50u;
            // 0x164a54: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A58u; }
        if (ctx->pc != 0x164A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A58u; }
        if (ctx->pc != 0x164A58u) { return; }
    }
    ctx->pc = 0x164A58u;
    // 0x164a58: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x164a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x164a5c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164a60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164a64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164a68: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164a6c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164A6Cu;
    SET_GPR_U32(ctx, 31, 0x164A74u);
    ctx->pc = 0x164A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164A6Cu;
            // 0x164a70: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A74u; }
        if (ctx->pc != 0x164A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A74u; }
        if (ctx->pc != 0x164A74u) { return; }
    }
    ctx->pc = 0x164A74u;
    // 0x164a74: 0x1000030e  b           . + 4 + (0x30E << 2)
    ctx->pc = 0x164A74u;
    {
        const bool branch_taken_0x164a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164a74) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x164A7Cu;
    // 0x164a7c: 0x0  nop
    ctx->pc = 0x164a7cu;
    // NOP
label_164a80:
    // 0x164a80: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164a84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164a88: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164a8c: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x164A8Cu;
    SET_GPR_U32(ctx, 31, 0x164A94u);
    ctx->pc = 0x164A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164A8Cu;
            // 0x164a90: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A94u; }
        if (ctx->pc != 0x164A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A94u; }
        if (ctx->pc != 0x164A94u) { return; }
    }
    ctx->pc = 0x164A94u;
    // 0x164a94: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x164a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x164a98: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164a9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164aa0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164aa4: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164aa8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164AA8u;
    SET_GPR_U32(ctx, 31, 0x164AB0u);
    ctx->pc = 0x164AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164AA8u;
            // 0x164aac: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164AB0u; }
        if (ctx->pc != 0x164AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164AB0u; }
        if (ctx->pc != 0x164AB0u) { return; }
    }
    ctx->pc = 0x164AB0u;
    // 0x164ab0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x164ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x164ab4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164ab8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164abc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164ac0: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164ac4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164AC4u;
    SET_GPR_U32(ctx, 31, 0x164ACCu);
    ctx->pc = 0x164AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164AC4u;
            // 0x164ac8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164ACCu; }
        if (ctx->pc != 0x164ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164ACCu; }
        if (ctx->pc != 0x164ACCu) { return; }
    }
    ctx->pc = 0x164ACCu;
    // 0x164acc: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x164accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x164ad0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164ad4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164ad8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164adc: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164ae0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164AE0u;
    SET_GPR_U32(ctx, 31, 0x164AE8u);
    ctx->pc = 0x164AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164AE0u;
            // 0x164ae4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164AE8u; }
        if (ctx->pc != 0x164AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164AE8u; }
        if (ctx->pc != 0x164AE8u) { return; }
    }
    ctx->pc = 0x164AE8u;
    // 0x164ae8: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x164ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x164aec: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164af0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164af4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164af8: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164afc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164AFCu;
    SET_GPR_U32(ctx, 31, 0x164B04u);
    ctx->pc = 0x164B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164AFCu;
            // 0x164b00: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B04u; }
        if (ctx->pc != 0x164B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B04u; }
        if (ctx->pc != 0x164B04u) { return; }
    }
    ctx->pc = 0x164B04u;
    // 0x164b04: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164b08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164b0c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164b10: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x164B10u;
    SET_GPR_U32(ctx, 31, 0x164B18u);
    ctx->pc = 0x164B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164B10u;
            // 0x164b14: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B18u; }
        if (ctx->pc != 0x164B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B18u; }
        if (ctx->pc != 0x164B18u) { return; }
    }
    ctx->pc = 0x164B18u;
    // 0x164b18: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x164b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x164b1c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164b20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164b24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164b28: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164b2c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164B2Cu;
    SET_GPR_U32(ctx, 31, 0x164B34u);
    ctx->pc = 0x164B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164B2Cu;
            // 0x164b30: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B34u; }
        if (ctx->pc != 0x164B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B34u; }
        if (ctx->pc != 0x164B34u) { return; }
    }
    ctx->pc = 0x164B34u;
    // 0x164b34: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x164b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x164b38: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164b3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164b40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164b44: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164b48: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164B48u;
    SET_GPR_U32(ctx, 31, 0x164B50u);
    ctx->pc = 0x164B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164B48u;
            // 0x164b4c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B50u; }
        if (ctx->pc != 0x164B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B50u; }
        if (ctx->pc != 0x164B50u) { return; }
    }
    ctx->pc = 0x164B50u;
    // 0x164b50: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x164b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x164b54: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164b58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164b5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164b60: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164b64: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164B64u;
    SET_GPR_U32(ctx, 31, 0x164B6Cu);
    ctx->pc = 0x164B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164B64u;
            // 0x164b68: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B6Cu; }
        if (ctx->pc != 0x164B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B6Cu; }
        if (ctx->pc != 0x164B6Cu) { return; }
    }
    ctx->pc = 0x164B6Cu;
    // 0x164b6c: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x164b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x164b70: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164b74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164b78: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164b7c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164b80: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164B80u;
    SET_GPR_U32(ctx, 31, 0x164B88u);
    ctx->pc = 0x164B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164B80u;
            // 0x164b84: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B88u; }
        if (ctx->pc != 0x164B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B88u; }
        if (ctx->pc != 0x164B88u) { return; }
    }
    ctx->pc = 0x164B88u;
    // 0x164b88: 0x100002c9  b           . + 4 + (0x2C9 << 2)
    ctx->pc = 0x164B88u;
    {
        const bool branch_taken_0x164b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164b88) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x164B90u;
label_164b90:
    // 0x164b90: 0xc065d00  jal         func_197400
    ctx->pc = 0x164B90u;
    SET_GPR_U32(ctx, 31, 0x164B98u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B98u; }
        if (ctx->pc != 0x164B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B98u; }
        if (ctx->pc != 0x164B98u) { return; }
    }
    ctx->pc = 0x164B98u;
    // 0x164b98: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x164B98u;
    {
        const bool branch_taken_0x164b98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x164b98) {
            ctx->pc = 0x164BE0u;
            goto label_164be0;
        }
    }
    ctx->pc = 0x164BA0u;
    // 0x164ba0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x164ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x164ba4: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x164ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x164ba8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x164ba8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x164bac: 0x0  nop
    ctx->pc = 0x164bacu;
    // NOP
    // 0x164bb0: 0x0  nop
    ctx->pc = 0x164bb0u;
    // NOP
    // 0x164bb4: 0x1010  mfhi        $v0
    ctx->pc = 0x164bb4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x164bb8: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x164BB8u;
    {
        const bool branch_taken_0x164bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164BB8u;
            // 0x164bbc: 0x286101a4  slti        $at, $v1, 0x1A4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)420) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164bb8) {
            ctx->pc = 0x164C18u;
            goto label_164c18;
        }
    }
    ctx->pc = 0x164BC0u;
    // 0x164bc0: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x164BC0u;
    {
        const bool branch_taken_0x164bc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x164bc0) {
            ctx->pc = 0x164C18u;
            goto label_164c18;
        }
    }
    ctx->pc = 0x164BC8u;
    // 0x164bc8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164bcc: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x164bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164bd0: 0xc06560c  jal         func_195830
    ctx->pc = 0x164BD0u;
    SET_GPR_U32(ctx, 31, 0x164BD8u);
    ctx->pc = 0x164BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164BD0u;
            // 0x164bd4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164BD8u; }
        if (ctx->pc != 0x164BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164BD8u; }
        if (ctx->pc != 0x164BD8u) { return; }
    }
    ctx->pc = 0x164BD8u;
    // 0x164bd8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x164BD8u;
    {
        const bool branch_taken_0x164bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164bd8) {
            ctx->pc = 0x164C18u;
            goto label_164c18;
        }
    }
    ctx->pc = 0x164BE0u;
label_164be0:
    // 0x164be0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x164be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x164be4: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x164be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x164be8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x164be8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x164bec: 0x0  nop
    ctx->pc = 0x164becu;
    // NOP
    // 0x164bf0: 0x0  nop
    ctx->pc = 0x164bf0u;
    // NOP
    // 0x164bf4: 0x1010  mfhi        $v0
    ctx->pc = 0x164bf4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x164bf8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x164BF8u;
    {
        const bool branch_taken_0x164bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164BF8u;
            // 0x164bfc: 0x286101a4  slti        $at, $v1, 0x1A4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)420) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164bf8) {
            ctx->pc = 0x164C18u;
            goto label_164c18;
        }
    }
    ctx->pc = 0x164C00u;
    // 0x164c00: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x164C00u;
    {
        const bool branch_taken_0x164c00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x164c00) {
            ctx->pc = 0x164C18u;
            goto label_164c18;
        }
    }
    ctx->pc = 0x164C08u;
    // 0x164c08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164c0c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x164c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164c10: 0xc06560c  jal         func_195830
    ctx->pc = 0x164C10u;
    SET_GPR_U32(ctx, 31, 0x164C18u);
    ctx->pc = 0x164C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164C10u;
            // 0x164c14: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164C18u; }
        if (ctx->pc != 0x164C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164C18u; }
        if (ctx->pc != 0x164C18u) { return; }
    }
    ctx->pc = 0x164C18u;
label_164c18:
    // 0x164c18: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x164c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x164c1c: 0x240201a4  addiu       $v0, $zero, 0x1A4
    ctx->pc = 0x164c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
    // 0x164c20: 0x106201ed  beq         $v1, $v0, . + 4 + (0x1ED << 2)
    ctx->pc = 0x164C20u;
    {
        const bool branch_taken_0x164c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x164C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164C20u;
            // 0x164c24: 0x24020168  addiu       $v0, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164c20) {
            ctx->pc = 0x1653D8u;
            goto label_1653d8;
        }
    }
    ctx->pc = 0x164C28u;
    // 0x164c28: 0x10620187  beq         $v1, $v0, . + 4 + (0x187 << 2)
    ctx->pc = 0x164C28u;
    {
        const bool branch_taken_0x164c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x164c28) {
            ctx->pc = 0x165248u;
            goto label_165248;
        }
    }
    ctx->pc = 0x164C30u;
    // 0x164c30: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x164c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x164c34: 0x106200f8  beq         $v1, $v0, . + 4 + (0xF8 << 2)
    ctx->pc = 0x164C34u;
    {
        const bool branch_taken_0x164c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x164C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164C34u;
            // 0x164c38: 0x240200f0  addiu       $v0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164c34) {
            ctx->pc = 0x165018u;
            goto label_165018;
        }
    }
    ctx->pc = 0x164C3Cu;
    // 0x164c3c: 0x106200ae  beq         $v1, $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x164C3Cu;
    {
        const bool branch_taken_0x164c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x164c3c) {
            ctx->pc = 0x164EF8u;
            goto label_164ef8;
        }
    }
    ctx->pc = 0x164C44u;
    // 0x164c44: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x164c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x164c48: 0x10620063  beq         $v1, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x164C48u;
    {
        const bool branch_taken_0x164c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x164C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164C48u;
            // 0x164c4c: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164c48) {
            ctx->pc = 0x164DD8u;
            goto label_164dd8;
        }
    }
    ctx->pc = 0x164C50u;
    // 0x164c50: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x164C50u;
    {
        const bool branch_taken_0x164c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x164c50) {
            ctx->pc = 0x164D28u;
            goto label_164d28;
        }
    }
    ctx->pc = 0x164C58u;
    // 0x164c58: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x164c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x164c5c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x164C5Cu;
    {
        const bool branch_taken_0x164c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x164C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164C5Cu;
            // 0x164c60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164c5c) {
            ctx->pc = 0x164C78u;
            goto label_164c78;
        }
    }
    ctx->pc = 0x164C64u;
    // 0x164c64: 0x10620292  beq         $v1, $v0, . + 4 + (0x292 << 2)
    ctx->pc = 0x164C64u;
    {
        const bool branch_taken_0x164c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x164c64) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x164C6Cu;
    // 0x164c6c: 0x10000290  b           . + 4 + (0x290 << 2)
    ctx->pc = 0x164C6Cu;
    {
        const bool branch_taken_0x164c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164c6c) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x164C74u;
    // 0x164c74: 0x0  nop
    ctx->pc = 0x164c74u;
    // NOP
label_164c78:
    // 0x164c78: 0xc065d00  jal         func_197400
    ctx->pc = 0x164C78u;
    SET_GPR_U32(ctx, 31, 0x164C80u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164C80u; }
        if (ctx->pc != 0x164C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164C80u; }
        if (ctx->pc != 0x164C80u) { return; }
    }
    ctx->pc = 0x164C80u;
    // 0x164c80: 0x1840028b  blez        $v0, . + 4 + (0x28B << 2)
    ctx->pc = 0x164C80u;
    {
        const bool branch_taken_0x164c80 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x164c80) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x164C88u;
    // 0x164c88: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164c8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164c90: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164c94: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x164C94u;
    SET_GPR_U32(ctx, 31, 0x164C9Cu);
    ctx->pc = 0x164C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164C94u;
            // 0x164c98: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164C9Cu; }
        if (ctx->pc != 0x164C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164C9Cu; }
        if (ctx->pc != 0x164C9Cu) { return; }
    }
    ctx->pc = 0x164C9Cu;
    // 0x164c9c: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x164c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
    // 0x164ca0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164ca4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164ca8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164cac: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164cb0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164CB0u;
    SET_GPR_U32(ctx, 31, 0x164CB8u);
    ctx->pc = 0x164CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164CB0u;
            // 0x164cb4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164CB8u; }
        if (ctx->pc != 0x164CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164CB8u; }
        if (ctx->pc != 0x164CB8u) { return; }
    }
    ctx->pc = 0x164CB8u;
    // 0x164cb8: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x164cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x164cbc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164cc0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164cc4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164cc8: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164ccc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164CCCu;
    SET_GPR_U32(ctx, 31, 0x164CD4u);
    ctx->pc = 0x164CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164CCCu;
            // 0x164cd0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164CD4u; }
        if (ctx->pc != 0x164CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164CD4u; }
        if (ctx->pc != 0x164CD4u) { return; }
    }
    ctx->pc = 0x164CD4u;
    // 0x164cd4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164cd8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164cdc: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164ce0: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x164CE0u;
    SET_GPR_U32(ctx, 31, 0x164CE8u);
    ctx->pc = 0x164CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164CE0u;
            // 0x164ce4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164CE8u; }
        if (ctx->pc != 0x164CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164CE8u; }
        if (ctx->pc != 0x164CE8u) { return; }
    }
    ctx->pc = 0x164CE8u;
    // 0x164ce8: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x164ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
    // 0x164cec: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164cf0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164cf4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164cf8: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164cfc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164CFCu;
    SET_GPR_U32(ctx, 31, 0x164D04u);
    ctx->pc = 0x164D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164CFCu;
            // 0x164d00: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D04u; }
        if (ctx->pc != 0x164D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D04u; }
        if (ctx->pc != 0x164D04u) { return; }
    }
    ctx->pc = 0x164D04u;
    // 0x164d04: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x164d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x164d08: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164d0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164d0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164d10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164d14: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164d18: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164D18u;
    SET_GPR_U32(ctx, 31, 0x164D20u);
    ctx->pc = 0x164D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164D18u;
            // 0x164d1c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D20u; }
        if (ctx->pc != 0x164D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D20u; }
        if (ctx->pc != 0x164D20u) { return; }
    }
    ctx->pc = 0x164D20u;
    // 0x164d20: 0x10000263  b           . + 4 + (0x263 << 2)
    ctx->pc = 0x164D20u;
    {
        const bool branch_taken_0x164d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164d20) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x164D28u;
label_164d28:
    // 0x164d28: 0xc065d00  jal         func_197400
    ctx->pc = 0x164D28u;
    SET_GPR_U32(ctx, 31, 0x164D30u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D30u; }
        if (ctx->pc != 0x164D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D30u; }
        if (ctx->pc != 0x164D30u) { return; }
    }
    ctx->pc = 0x164D30u;
    // 0x164d30: 0x1840025f  blez        $v0, . + 4 + (0x25F << 2)
    ctx->pc = 0x164D30u;
    {
        const bool branch_taken_0x164d30 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x164d30) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x164D38u;
    // 0x164d38: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164d3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164d40: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164d44: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x164D44u;
    SET_GPR_U32(ctx, 31, 0x164D4Cu);
    ctx->pc = 0x164D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164D44u;
            // 0x164d48: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D4Cu; }
        if (ctx->pc != 0x164D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D4Cu; }
        if (ctx->pc != 0x164D4Cu) { return; }
    }
    ctx->pc = 0x164D4Cu;
    // 0x164d4c: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x164d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
    // 0x164d50: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164d54: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164d58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164d5c: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164d60: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164D60u;
    SET_GPR_U32(ctx, 31, 0x164D68u);
    ctx->pc = 0x164D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164D60u;
            // 0x164d64: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D68u; }
        if (ctx->pc != 0x164D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D68u; }
        if (ctx->pc != 0x164D68u) { return; }
    }
    ctx->pc = 0x164D68u;
    // 0x164d68: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x164d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x164d6c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164d70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164d74: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164d78: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164d7c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164D7Cu;
    SET_GPR_U32(ctx, 31, 0x164D84u);
    ctx->pc = 0x164D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164D7Cu;
            // 0x164d80: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D84u; }
        if (ctx->pc != 0x164D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D84u; }
        if (ctx->pc != 0x164D84u) { return; }
    }
    ctx->pc = 0x164D84u;
    // 0x164d84: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164d88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164d8c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164d90: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x164D90u;
    SET_GPR_U32(ctx, 31, 0x164D98u);
    ctx->pc = 0x164D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164D90u;
            // 0x164d94: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D98u; }
        if (ctx->pc != 0x164D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D98u; }
        if (ctx->pc != 0x164D98u) { return; }
    }
    ctx->pc = 0x164D98u;
    // 0x164d98: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x164d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
    // 0x164d9c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164da0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164da4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164da8: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164dac: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164DACu;
    SET_GPR_U32(ctx, 31, 0x164DB4u);
    ctx->pc = 0x164DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164DACu;
            // 0x164db0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164DB4u; }
        if (ctx->pc != 0x164DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164DB4u; }
        if (ctx->pc != 0x164DB4u) { return; }
    }
    ctx->pc = 0x164DB4u;
    // 0x164db4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x164db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x164db8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164dbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164dc0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164dc4: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164dc8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164DC8u;
    SET_GPR_U32(ctx, 31, 0x164DD0u);
    ctx->pc = 0x164DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164DC8u;
            // 0x164dcc: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164DD0u; }
        if (ctx->pc != 0x164DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164DD0u; }
        if (ctx->pc != 0x164DD0u) { return; }
    }
    ctx->pc = 0x164DD0u;
    // 0x164dd0: 0x10000237  b           . + 4 + (0x237 << 2)
    ctx->pc = 0x164DD0u;
    {
        const bool branch_taken_0x164dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164dd0) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x164DD8u;
label_164dd8:
    // 0x164dd8: 0xc065d00  jal         func_197400
    ctx->pc = 0x164DD8u;
    SET_GPR_U32(ctx, 31, 0x164DE0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164DE0u; }
        if (ctx->pc != 0x164DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164DE0u; }
        if (ctx->pc != 0x164DE0u) { return; }
    }
    ctx->pc = 0x164DE0u;
    // 0x164de0: 0x18400233  blez        $v0, . + 4 + (0x233 << 2)
    ctx->pc = 0x164DE0u;
    {
        const bool branch_taken_0x164de0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x164de0) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x164DE8u;
    // 0x164de8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164dec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164df0: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164df4: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x164DF4u;
    SET_GPR_U32(ctx, 31, 0x164DFCu);
    ctx->pc = 0x164DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164DF4u;
            // 0x164df8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164DFCu; }
        if (ctx->pc != 0x164DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164DFCu; }
        if (ctx->pc != 0x164DFCu) { return; }
    }
    ctx->pc = 0x164DFCu;
    // 0x164dfc: 0x3c02c270  lui         $v0, 0xC270
    ctx->pc = 0x164dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49776 << 16));
    // 0x164e00: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164e04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164e04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164e08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164e0c: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164e10: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164E10u;
    SET_GPR_U32(ctx, 31, 0x164E18u);
    ctx->pc = 0x164E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164E10u;
            // 0x164e14: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E18u; }
        if (ctx->pc != 0x164E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E18u; }
        if (ctx->pc != 0x164E18u) { return; }
    }
    ctx->pc = 0x164E18u;
    // 0x164e18: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x164e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x164e1c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164e20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164e20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164e24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164e28: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164e2c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164E2Cu;
    SET_GPR_U32(ctx, 31, 0x164E34u);
    ctx->pc = 0x164E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164E2Cu;
            // 0x164e30: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E34u; }
        if (ctx->pc != 0x164E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E34u; }
        if (ctx->pc != 0x164E34u) { return; }
    }
    ctx->pc = 0x164E34u;
    // 0x164e34: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x164e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x164e38: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164e3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164e40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164e44: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164e48: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164E48u;
    SET_GPR_U32(ctx, 31, 0x164E50u);
    ctx->pc = 0x164E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164E48u;
            // 0x164e4c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E50u; }
        if (ctx->pc != 0x164E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E50u; }
        if (ctx->pc != 0x164E50u) { return; }
    }
    ctx->pc = 0x164E50u;
    // 0x164e50: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x164e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x164e54: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164e58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164e58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164e5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164e60: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164e64: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164E64u;
    SET_GPR_U32(ctx, 31, 0x164E6Cu);
    ctx->pc = 0x164E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164E64u;
            // 0x164e68: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E6Cu; }
        if (ctx->pc != 0x164E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E6Cu; }
        if (ctx->pc != 0x164E6Cu) { return; }
    }
    ctx->pc = 0x164E6Cu;
    // 0x164e6c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164e70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164e74: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164e78: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x164E78u;
    SET_GPR_U32(ctx, 31, 0x164E80u);
    ctx->pc = 0x164E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164E78u;
            // 0x164e7c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E80u; }
        if (ctx->pc != 0x164E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E80u; }
        if (ctx->pc != 0x164E80u) { return; }
    }
    ctx->pc = 0x164E80u;
    // 0x164e80: 0x3c02c270  lui         $v0, 0xC270
    ctx->pc = 0x164e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49776 << 16));
    // 0x164e84: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164e88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164e8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164e90: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164e94: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164E94u;
    SET_GPR_U32(ctx, 31, 0x164E9Cu);
    ctx->pc = 0x164E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164E94u;
            // 0x164e98: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E9Cu; }
        if (ctx->pc != 0x164E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E9Cu; }
        if (ctx->pc != 0x164E9Cu) { return; }
    }
    ctx->pc = 0x164E9Cu;
    // 0x164e9c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x164e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x164ea0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164ea4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164ea8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164eac: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164eb0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164EB0u;
    SET_GPR_U32(ctx, 31, 0x164EB8u);
    ctx->pc = 0x164EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164EB0u;
            // 0x164eb4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164EB8u; }
        if (ctx->pc != 0x164EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164EB8u; }
        if (ctx->pc != 0x164EB8u) { return; }
    }
    ctx->pc = 0x164EB8u;
    // 0x164eb8: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x164eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x164ebc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164ec0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164ec4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164ec8: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164ecc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164ECCu;
    SET_GPR_U32(ctx, 31, 0x164ED4u);
    ctx->pc = 0x164ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164ECCu;
            // 0x164ed0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164ED4u; }
        if (ctx->pc != 0x164ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164ED4u; }
        if (ctx->pc != 0x164ED4u) { return; }
    }
    ctx->pc = 0x164ED4u;
    // 0x164ed4: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x164ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x164ed8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164edc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164ee0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164ee4: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164ee8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164EE8u;
    SET_GPR_U32(ctx, 31, 0x164EF0u);
    ctx->pc = 0x164EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164EE8u;
            // 0x164eec: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164EF0u; }
        if (ctx->pc != 0x164EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164EF0u; }
        if (ctx->pc != 0x164EF0u) { return; }
    }
    ctx->pc = 0x164EF0u;
    // 0x164ef0: 0x100001ef  b           . + 4 + (0x1EF << 2)
    ctx->pc = 0x164EF0u;
    {
        const bool branch_taken_0x164ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164ef0) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x164EF8u;
label_164ef8:
    // 0x164ef8: 0xc065d00  jal         func_197400
    ctx->pc = 0x164EF8u;
    SET_GPR_U32(ctx, 31, 0x164F00u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164F00u; }
        if (ctx->pc != 0x164F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164F00u; }
        if (ctx->pc != 0x164F00u) { return; }
    }
    ctx->pc = 0x164F00u;
    // 0x164f00: 0x184001eb  blez        $v0, . + 4 + (0x1EB << 2)
    ctx->pc = 0x164F00u;
    {
        const bool branch_taken_0x164f00 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x164f00) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x164F08u;
    // 0x164f08: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164f0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164f10: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x164f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x164f14: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x164F14u;
    SET_GPR_U32(ctx, 31, 0x164F1Cu);
    ctx->pc = 0x164F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164F14u;
            // 0x164f18: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164F1Cu; }
        if (ctx->pc != 0x164F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164F1Cu; }
        if (ctx->pc != 0x164F1Cu) { return; }
    }
    ctx->pc = 0x164F1Cu;
    // 0x164f1c: 0x3c02c270  lui         $v0, 0xC270
    ctx->pc = 0x164f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49776 << 16));
    // 0x164f20: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164f24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164f28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164f2c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164f30: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164F30u;
    SET_GPR_U32(ctx, 31, 0x164F38u);
    ctx->pc = 0x164F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164F30u;
            // 0x164f34: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164F38u; }
        if (ctx->pc != 0x164F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164F38u; }
        if (ctx->pc != 0x164F38u) { return; }
    }
    ctx->pc = 0x164F38u;
    // 0x164f38: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x164f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x164f3c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164f40: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164f44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164f48: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164f4c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164F4Cu;
    SET_GPR_U32(ctx, 31, 0x164F54u);
    ctx->pc = 0x164F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164F4Cu;
            // 0x164f50: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164F54u; }
        if (ctx->pc != 0x164F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164F54u; }
        if (ctx->pc != 0x164F54u) { return; }
    }
    ctx->pc = 0x164F54u;
    // 0x164f54: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x164f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x164f58: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164f5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164f60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164f64: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164f68: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164F68u;
    SET_GPR_U32(ctx, 31, 0x164F70u);
    ctx->pc = 0x164F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164F68u;
            // 0x164f6c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164F70u; }
        if (ctx->pc != 0x164F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164F70u; }
        if (ctx->pc != 0x164F70u) { return; }
    }
    ctx->pc = 0x164F70u;
    // 0x164f70: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x164f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x164f74: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164f78: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164f7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164f80: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164f84: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164F84u;
    SET_GPR_U32(ctx, 31, 0x164F8Cu);
    ctx->pc = 0x164F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164F84u;
            // 0x164f88: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164F8Cu; }
        if (ctx->pc != 0x164F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164F8Cu; }
        if (ctx->pc != 0x164F8Cu) { return; }
    }
    ctx->pc = 0x164F8Cu;
    // 0x164f8c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164f90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164f94: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164f98: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x164F98u;
    SET_GPR_U32(ctx, 31, 0x164FA0u);
    ctx->pc = 0x164F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164F98u;
            // 0x164f9c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164FA0u; }
        if (ctx->pc != 0x164FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164FA0u; }
        if (ctx->pc != 0x164FA0u) { return; }
    }
    ctx->pc = 0x164FA0u;
    // 0x164fa0: 0x3c02c270  lui         $v0, 0xC270
    ctx->pc = 0x164fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49776 << 16));
    // 0x164fa4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164fa8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164fac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164fb0: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164fb4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164FB4u;
    SET_GPR_U32(ctx, 31, 0x164FBCu);
    ctx->pc = 0x164FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164FB4u;
            // 0x164fb8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164FBCu; }
        if (ctx->pc != 0x164FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164FBCu; }
        if (ctx->pc != 0x164FBCu) { return; }
    }
    ctx->pc = 0x164FBCu;
    // 0x164fbc: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x164fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x164fc0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164fc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164fc8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164fcc: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164fd0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164FD0u;
    SET_GPR_U32(ctx, 31, 0x164FD8u);
    ctx->pc = 0x164FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164FD0u;
            // 0x164fd4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164FD8u; }
        if (ctx->pc != 0x164FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164FD8u; }
        if (ctx->pc != 0x164FD8u) { return; }
    }
    ctx->pc = 0x164FD8u;
    // 0x164fd8: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x164fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x164fdc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164fe0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164fe4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x164fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x164fe8: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x164fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x164fec: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x164FECu;
    SET_GPR_U32(ctx, 31, 0x164FF4u);
    ctx->pc = 0x164FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164FECu;
            // 0x164ff0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164FF4u; }
        if (ctx->pc != 0x164FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164FF4u; }
        if (ctx->pc != 0x164FF4u) { return; }
    }
    ctx->pc = 0x164FF4u;
    // 0x164ff4: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x164ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x164ff8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x164ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x164ffc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165000: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165004: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x165004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x165008: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165008u;
    SET_GPR_U32(ctx, 31, 0x165010u);
    ctx->pc = 0x16500Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165008u;
            // 0x16500c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165010u; }
        if (ctx->pc != 0x165010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165010u; }
        if (ctx->pc != 0x165010u) { return; }
    }
    ctx->pc = 0x165010u;
    // 0x165010: 0x100001a7  b           . + 4 + (0x1A7 << 2)
    ctx->pc = 0x165010u;
    {
        const bool branch_taken_0x165010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165010) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x165018u;
label_165018:
    // 0x165018: 0xc065d00  jal         func_197400
    ctx->pc = 0x165018u;
    SET_GPR_U32(ctx, 31, 0x165020u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165020u; }
        if (ctx->pc != 0x165020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165020u; }
        if (ctx->pc != 0x165020u) { return; }
    }
    ctx->pc = 0x165020u;
    // 0x165020: 0x18400061  blez        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x165020u;
    {
        const bool branch_taken_0x165020 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x165020) {
            ctx->pc = 0x1651A8u;
            goto label_1651a8;
        }
    }
    ctx->pc = 0x165028u;
    // 0x165028: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x165028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x16502c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x16502cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165030: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x165030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x165034: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x165034u;
    SET_GPR_U32(ctx, 31, 0x16503Cu);
    ctx->pc = 0x165038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165034u;
            // 0x165038: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16503Cu; }
        if (ctx->pc != 0x16503Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16503Cu; }
        if (ctx->pc != 0x16503Cu) { return; }
    }
    ctx->pc = 0x16503Cu;
    // 0x16503c: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x16503cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x165040: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x165040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165044: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165048: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16504c: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x16504cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x165050: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165050u;
    SET_GPR_U32(ctx, 31, 0x165058u);
    ctx->pc = 0x165054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165050u;
            // 0x165054: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165058u; }
        if (ctx->pc != 0x165058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165058u; }
        if (ctx->pc != 0x165058u) { return; }
    }
    ctx->pc = 0x165058u;
    // 0x165058: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x165058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x16505c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x16505cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165060: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165064: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165068: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x165068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x16506c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x16506Cu;
    SET_GPR_U32(ctx, 31, 0x165074u);
    ctx->pc = 0x165070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16506Cu;
            // 0x165070: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165074u; }
        if (ctx->pc != 0x165074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165074u; }
        if (ctx->pc != 0x165074u) { return; }
    }
    ctx->pc = 0x165074u;
    // 0x165074: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x165074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
    // 0x165078: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x165078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x16507c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16507cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165080: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165084: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x165084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x165088: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165088u;
    SET_GPR_U32(ctx, 31, 0x165090u);
    ctx->pc = 0x16508Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165088u;
            // 0x16508c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165090u; }
        if (ctx->pc != 0x165090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165090u; }
        if (ctx->pc != 0x165090u) { return; }
    }
    ctx->pc = 0x165090u;
    // 0x165090: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x165090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x165094: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x165094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165098: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16509c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x16509cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1650a0: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1650a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1650a4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1650A4u;
    SET_GPR_U32(ctx, 31, 0x1650ACu);
    ctx->pc = 0x1650A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1650A4u;
            // 0x1650a8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1650ACu; }
        if (ctx->pc != 0x1650ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1650ACu; }
        if (ctx->pc != 0x1650ACu) { return; }
    }
    ctx->pc = 0x1650ACu;
    // 0x1650ac: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x1650acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x1650b0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1650b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1650b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1650b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1650b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1650b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1650bc: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1650bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1650c0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1650C0u;
    SET_GPR_U32(ctx, 31, 0x1650C8u);
    ctx->pc = 0x1650C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1650C0u;
            // 0x1650c4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1650C8u; }
        if (ctx->pc != 0x1650C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1650C8u; }
        if (ctx->pc != 0x1650C8u) { return; }
    }
    ctx->pc = 0x1650C8u;
    // 0x1650c8: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1650c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1650cc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1650ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1650d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1650d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1650d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1650d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1650d8: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1650d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1650dc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1650DCu;
    SET_GPR_U32(ctx, 31, 0x1650E4u);
    ctx->pc = 0x1650E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1650DCu;
            // 0x1650e0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1650E4u; }
        if (ctx->pc != 0x1650E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1650E4u; }
        if (ctx->pc != 0x1650E4u) { return; }
    }
    ctx->pc = 0x1650E4u;
    // 0x1650e4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1650e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1650e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1650e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1650ec: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1650ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1650f0: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1650F0u;
    SET_GPR_U32(ctx, 31, 0x1650F8u);
    ctx->pc = 0x1650F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1650F0u;
            // 0x1650f4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1650F8u; }
        if (ctx->pc != 0x1650F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1650F8u; }
        if (ctx->pc != 0x1650F8u) { return; }
    }
    ctx->pc = 0x1650F8u;
    // 0x1650f8: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1650f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1650fc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1650fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165100: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165104: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165108: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x165108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x16510c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x16510Cu;
    SET_GPR_U32(ctx, 31, 0x165114u);
    ctx->pc = 0x165110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16510Cu;
            // 0x165110: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165114u; }
        if (ctx->pc != 0x165114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165114u; }
        if (ctx->pc != 0x165114u) { return; }
    }
    ctx->pc = 0x165114u;
    // 0x165114: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x165114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x165118: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x165118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x16511c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16511cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165120: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165124: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x165124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x165128: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165128u;
    SET_GPR_U32(ctx, 31, 0x165130u);
    ctx->pc = 0x16512Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165128u;
            // 0x16512c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165130u; }
        if (ctx->pc != 0x165130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165130u; }
        if (ctx->pc != 0x165130u) { return; }
    }
    ctx->pc = 0x165130u;
    // 0x165130: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x165130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
    // 0x165134: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x165134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165138: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16513c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x16513cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165140: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x165140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x165144: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165144u;
    SET_GPR_U32(ctx, 31, 0x16514Cu);
    ctx->pc = 0x165148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165144u;
            // 0x165148: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16514Cu; }
        if (ctx->pc != 0x16514Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16514Cu; }
        if (ctx->pc != 0x16514Cu) { return; }
    }
    ctx->pc = 0x16514Cu;
    // 0x16514c: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x16514cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x165150: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x165150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165154: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165158: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16515c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x16515cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x165160: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165160u;
    SET_GPR_U32(ctx, 31, 0x165168u);
    ctx->pc = 0x165164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165160u;
            // 0x165164: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165168u; }
        if (ctx->pc != 0x165168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165168u; }
        if (ctx->pc != 0x165168u) { return; }
    }
    ctx->pc = 0x165168u;
    // 0x165168: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x165168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x16516c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x16516cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165170: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165174: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165178: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x165178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x16517c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x16517Cu;
    SET_GPR_U32(ctx, 31, 0x165184u);
    ctx->pc = 0x165180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16517Cu;
            // 0x165180: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165184u; }
        if (ctx->pc != 0x165184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165184u; }
        if (ctx->pc != 0x165184u) { return; }
    }
    ctx->pc = 0x165184u;
    // 0x165184: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x165184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x165188: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x165188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x16518c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16518cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165190: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165194: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x165194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x165198: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165198u;
    SET_GPR_U32(ctx, 31, 0x1651A0u);
    ctx->pc = 0x16519Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165198u;
            // 0x16519c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1651A0u; }
        if (ctx->pc != 0x1651A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1651A0u; }
        if (ctx->pc != 0x1651A0u) { return; }
    }
    ctx->pc = 0x1651A0u;
    // 0x1651a0: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x1651A0u;
    {
        const bool branch_taken_0x1651a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1651a0) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x1651A8u;
label_1651a8:
    // 0x1651a8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1651a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1651ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1651acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1651b0: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1651b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1651b4: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1651B4u;
    SET_GPR_U32(ctx, 31, 0x1651BCu);
    ctx->pc = 0x1651B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1651B4u;
            // 0x1651b8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1651BCu; }
        if (ctx->pc != 0x1651BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1651BCu; }
        if (ctx->pc != 0x1651BCu) { return; }
    }
    ctx->pc = 0x1651BCu;
    // 0x1651bc: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x1651bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
    // 0x1651c0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1651c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1651c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1651c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1651c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1651c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1651cc: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1651ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1651d0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1651D0u;
    SET_GPR_U32(ctx, 31, 0x1651D8u);
    ctx->pc = 0x1651D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1651D0u;
            // 0x1651d4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1651D8u; }
        if (ctx->pc != 0x1651D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1651D8u; }
        if (ctx->pc != 0x1651D8u) { return; }
    }
    ctx->pc = 0x1651D8u;
    // 0x1651d8: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1651d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1651dc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1651dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1651e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1651e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1651e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1651e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1651e8: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1651e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1651ec: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1651ECu;
    SET_GPR_U32(ctx, 31, 0x1651F4u);
    ctx->pc = 0x1651F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1651ECu;
            // 0x1651f0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1651F4u; }
        if (ctx->pc != 0x1651F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1651F4u; }
        if (ctx->pc != 0x1651F4u) { return; }
    }
    ctx->pc = 0x1651F4u;
    // 0x1651f4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1651f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1651f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1651f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1651fc: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1651fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x165200: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x165200u;
    SET_GPR_U32(ctx, 31, 0x165208u);
    ctx->pc = 0x165204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165200u;
            // 0x165204: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165208u; }
        if (ctx->pc != 0x165208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165208u; }
        if (ctx->pc != 0x165208u) { return; }
    }
    ctx->pc = 0x165208u;
    // 0x165208: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x165208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
    // 0x16520c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x16520cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165210: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165214: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165218: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x165218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x16521c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x16521Cu;
    SET_GPR_U32(ctx, 31, 0x165224u);
    ctx->pc = 0x165220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16521Cu;
            // 0x165220: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165224u; }
        if (ctx->pc != 0x165224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165224u; }
        if (ctx->pc != 0x165224u) { return; }
    }
    ctx->pc = 0x165224u;
    // 0x165224: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x165224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x165228: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x165228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x16522c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16522cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165230: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165234: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x165234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x165238: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165238u;
    SET_GPR_U32(ctx, 31, 0x165240u);
    ctx->pc = 0x16523Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165238u;
            // 0x16523c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165240u; }
        if (ctx->pc != 0x165240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165240u; }
        if (ctx->pc != 0x165240u) { return; }
    }
    ctx->pc = 0x165240u;
    // 0x165240: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x165240u;
    {
        const bool branch_taken_0x165240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165240) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x165248u;
label_165248:
    // 0x165248: 0xc065d00  jal         func_197400
    ctx->pc = 0x165248u;
    SET_GPR_U32(ctx, 31, 0x165250u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165250u; }
        if (ctx->pc != 0x165250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165250u; }
        if (ctx->pc != 0x165250u) { return; }
    }
    ctx->pc = 0x165250u;
    // 0x165250: 0x18400117  blez        $v0, . + 4 + (0x117 << 2)
    ctx->pc = 0x165250u;
    {
        const bool branch_taken_0x165250 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x165250) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x165258u;
    // 0x165258: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x165258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x16525c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x16525cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165260: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x165260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x165264: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x165264u;
    SET_GPR_U32(ctx, 31, 0x16526Cu);
    ctx->pc = 0x165268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165264u;
            // 0x165268: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16526Cu; }
        if (ctx->pc != 0x16526Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16526Cu; }
        if (ctx->pc != 0x16526Cu) { return; }
    }
    ctx->pc = 0x16526Cu;
    // 0x16526c: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x16526cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x165270: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x165270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165274: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165278: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16527c: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x16527cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x165280: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165280u;
    SET_GPR_U32(ctx, 31, 0x165288u);
    ctx->pc = 0x165284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165280u;
            // 0x165284: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165288u; }
        if (ctx->pc != 0x165288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165288u; }
        if (ctx->pc != 0x165288u) { return; }
    }
    ctx->pc = 0x165288u;
    // 0x165288: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x165288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x16528c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x16528cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165290: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165294: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165298: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x165298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x16529c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x16529Cu;
    SET_GPR_U32(ctx, 31, 0x1652A4u);
    ctx->pc = 0x1652A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16529Cu;
            // 0x1652a0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1652A4u; }
        if (ctx->pc != 0x1652A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1652A4u; }
        if (ctx->pc != 0x1652A4u) { return; }
    }
    ctx->pc = 0x1652A4u;
    // 0x1652a4: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x1652a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
    // 0x1652a8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1652a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1652ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1652acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1652b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1652b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1652b4: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1652b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1652b8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1652B8u;
    SET_GPR_U32(ctx, 31, 0x1652C0u);
    ctx->pc = 0x1652BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1652B8u;
            // 0x1652bc: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1652C0u; }
        if (ctx->pc != 0x1652C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1652C0u; }
        if (ctx->pc != 0x1652C0u) { return; }
    }
    ctx->pc = 0x1652C0u;
    // 0x1652c0: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x1652c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x1652c4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1652c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1652c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1652c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1652cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1652ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1652d0: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1652d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1652d4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1652D4u;
    SET_GPR_U32(ctx, 31, 0x1652DCu);
    ctx->pc = 0x1652D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1652D4u;
            // 0x1652d8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1652DCu; }
        if (ctx->pc != 0x1652DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1652DCu; }
        if (ctx->pc != 0x1652DCu) { return; }
    }
    ctx->pc = 0x1652DCu;
    // 0x1652dc: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x1652dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x1652e0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1652e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1652e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1652e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1652e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1652e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1652ec: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1652ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1652f0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1652F0u;
    SET_GPR_U32(ctx, 31, 0x1652F8u);
    ctx->pc = 0x1652F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1652F0u;
            // 0x1652f4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1652F8u; }
        if (ctx->pc != 0x1652F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1652F8u; }
        if (ctx->pc != 0x1652F8u) { return; }
    }
    ctx->pc = 0x1652F8u;
    // 0x1652f8: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1652f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1652fc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1652fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165300: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165304: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165308: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x165308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x16530c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x16530Cu;
    SET_GPR_U32(ctx, 31, 0x165314u);
    ctx->pc = 0x165310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16530Cu;
            // 0x165310: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165314u; }
        if (ctx->pc != 0x165314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165314u; }
        if (ctx->pc != 0x165314u) { return; }
    }
    ctx->pc = 0x165314u;
    // 0x165314: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x165314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165318: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16531c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x16531cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x165320: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x165320u;
    SET_GPR_U32(ctx, 31, 0x165328u);
    ctx->pc = 0x165324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165320u;
            // 0x165324: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165328u; }
        if (ctx->pc != 0x165328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165328u; }
        if (ctx->pc != 0x165328u) { return; }
    }
    ctx->pc = 0x165328u;
    // 0x165328: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x165328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x16532c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x16532cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165330: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165334: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165338: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x165338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x16533c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x16533Cu;
    SET_GPR_U32(ctx, 31, 0x165344u);
    ctx->pc = 0x165340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16533Cu;
            // 0x165340: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165344u; }
        if (ctx->pc != 0x165344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165344u; }
        if (ctx->pc != 0x165344u) { return; }
    }
    ctx->pc = 0x165344u;
    // 0x165344: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x165344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x165348: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x165348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x16534c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16534cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165350: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165354: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x165354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x165358: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165358u;
    SET_GPR_U32(ctx, 31, 0x165360u);
    ctx->pc = 0x16535Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165358u;
            // 0x16535c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165360u; }
        if (ctx->pc != 0x165360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165360u; }
        if (ctx->pc != 0x165360u) { return; }
    }
    ctx->pc = 0x165360u;
    // 0x165360: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x165360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
    // 0x165364: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x165364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165368: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16536c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x16536cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165370: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x165370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x165374: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165374u;
    SET_GPR_U32(ctx, 31, 0x16537Cu);
    ctx->pc = 0x165378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165374u;
            // 0x165378: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16537Cu; }
        if (ctx->pc != 0x16537Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16537Cu; }
        if (ctx->pc != 0x16537Cu) { return; }
    }
    ctx->pc = 0x16537Cu;
    // 0x16537c: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x16537cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x165380: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x165380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165384: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165388: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16538c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x16538cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x165390: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165390u;
    SET_GPR_U32(ctx, 31, 0x165398u);
    ctx->pc = 0x165394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165390u;
            // 0x165394: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165398u; }
        if (ctx->pc != 0x165398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165398u; }
        if (ctx->pc != 0x165398u) { return; }
    }
    ctx->pc = 0x165398u;
    // 0x165398: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x165398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x16539c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x16539cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1653a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1653a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1653a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1653a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1653a8: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1653a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1653ac: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1653ACu;
    SET_GPR_U32(ctx, 31, 0x1653B4u);
    ctx->pc = 0x1653B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1653ACu;
            // 0x1653b0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1653B4u; }
        if (ctx->pc != 0x1653B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1653B4u; }
        if (ctx->pc != 0x1653B4u) { return; }
    }
    ctx->pc = 0x1653B4u;
    // 0x1653b4: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1653b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1653b8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1653b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1653bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1653bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1653c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1653c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1653c4: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1653c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1653c8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1653C8u;
    SET_GPR_U32(ctx, 31, 0x1653D0u);
    ctx->pc = 0x1653CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1653C8u;
            // 0x1653cc: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1653D0u; }
        if (ctx->pc != 0x1653D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1653D0u; }
        if (ctx->pc != 0x1653D0u) { return; }
    }
    ctx->pc = 0x1653D0u;
    // 0x1653d0: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x1653D0u;
    {
        const bool branch_taken_0x1653d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1653d0) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x1653D8u;
label_1653d8:
    // 0x1653d8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1653D8u;
    SET_GPR_U32(ctx, 31, 0x1653E0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1653E0u; }
        if (ctx->pc != 0x1653E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1653E0u; }
        if (ctx->pc != 0x1653E0u) { return; }
    }
    ctx->pc = 0x1653E0u;
    // 0x1653e0: 0x184000b3  blez        $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x1653E0u;
    {
        const bool branch_taken_0x1653e0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1653e0) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x1653E8u;
    // 0x1653e8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1653e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1653ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1653ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1653f0: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1653f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1653f4: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1653F4u;
    SET_GPR_U32(ctx, 31, 0x1653FCu);
    ctx->pc = 0x1653F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1653F4u;
            // 0x1653f8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1653FCu; }
        if (ctx->pc != 0x1653FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1653FCu; }
        if (ctx->pc != 0x1653FCu) { return; }
    }
    ctx->pc = 0x1653FCu;
    // 0x1653fc: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1653fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x165400: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x165400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165404: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165408: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16540c: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x16540cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x165410: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165410u;
    SET_GPR_U32(ctx, 31, 0x165418u);
    ctx->pc = 0x165414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165410u;
            // 0x165414: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165418u; }
        if (ctx->pc != 0x165418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165418u; }
        if (ctx->pc != 0x165418u) { return; }
    }
    ctx->pc = 0x165418u;
    // 0x165418: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x165418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x16541c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x16541cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165420: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165424: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165428: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x165428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x16542c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x16542Cu;
    SET_GPR_U32(ctx, 31, 0x165434u);
    ctx->pc = 0x165430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16542Cu;
            // 0x165430: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165434u; }
        if (ctx->pc != 0x165434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165434u; }
        if (ctx->pc != 0x165434u) { return; }
    }
    ctx->pc = 0x165434u;
    // 0x165434: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x165434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
    // 0x165438: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x165438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x16543c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16543cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165440: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165444: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x165444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x165448: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165448u;
    SET_GPR_U32(ctx, 31, 0x165450u);
    ctx->pc = 0x16544Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165448u;
            // 0x16544c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165450u; }
        if (ctx->pc != 0x165450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165450u; }
        if (ctx->pc != 0x165450u) { return; }
    }
    ctx->pc = 0x165450u;
    // 0x165450: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x165450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x165454: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x165454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165458: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16545c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x16545cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165460: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x165460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x165464: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165464u;
    SET_GPR_U32(ctx, 31, 0x16546Cu);
    ctx->pc = 0x165468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165464u;
            // 0x165468: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16546Cu; }
        if (ctx->pc != 0x16546Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16546Cu; }
        if (ctx->pc != 0x16546Cu) { return; }
    }
    ctx->pc = 0x16546Cu;
    // 0x16546c: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x16546cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
    // 0x165470: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x165470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165474: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165478: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16547c: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x16547cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x165480: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165480u;
    SET_GPR_U32(ctx, 31, 0x165488u);
    ctx->pc = 0x165484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165480u;
            // 0x165484: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165488u; }
        if (ctx->pc != 0x165488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165488u; }
        if (ctx->pc != 0x165488u) { return; }
    }
    ctx->pc = 0x165488u;
    // 0x165488: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x165488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x16548c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x16548cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165490: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165494: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165498: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x165498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x16549c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x16549Cu;
    SET_GPR_U32(ctx, 31, 0x1654A4u);
    ctx->pc = 0x1654A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16549Cu;
            // 0x1654a0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1654A4u; }
        if (ctx->pc != 0x1654A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1654A4u; }
        if (ctx->pc != 0x1654A4u) { return; }
    }
    ctx->pc = 0x1654A4u;
    // 0x1654a4: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x1654a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x1654a8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1654a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1654ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1654acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1654b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1654b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1654b4: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1654b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1654b8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1654B8u;
    SET_GPR_U32(ctx, 31, 0x1654C0u);
    ctx->pc = 0x1654BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1654B8u;
            // 0x1654bc: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1654C0u; }
        if (ctx->pc != 0x1654C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1654C0u; }
        if (ctx->pc != 0x1654C0u) { return; }
    }
    ctx->pc = 0x1654C0u;
    // 0x1654c0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1654c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1654c4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1654c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1654c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1654c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1654cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1654ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1654d0: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1654d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1654d4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1654D4u;
    SET_GPR_U32(ctx, 31, 0x1654DCu);
    ctx->pc = 0x1654D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1654D4u;
            // 0x1654d8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1654DCu; }
        if (ctx->pc != 0x1654DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1654DCu; }
        if (ctx->pc != 0x1654DCu) { return; }
    }
    ctx->pc = 0x1654DCu;
    // 0x1654dc: 0x3c02c35c  lui         $v0, 0xC35C
    ctx->pc = 0x1654dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50012 << 16));
    // 0x1654e0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1654e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1654e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1654e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1654e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1654e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1654ec: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1654ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1654f0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1654F0u;
    SET_GPR_U32(ctx, 31, 0x1654F8u);
    ctx->pc = 0x1654F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1654F0u;
            // 0x1654f4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1654F8u; }
        if (ctx->pc != 0x1654F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1654F8u; }
        if (ctx->pc != 0x1654F8u) { return; }
    }
    ctx->pc = 0x1654F8u;
    // 0x1654f8: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x1654f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x1654fc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1654fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165500: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165504: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165508: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x165508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x16550c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x16550Cu;
    SET_GPR_U32(ctx, 31, 0x165514u);
    ctx->pc = 0x165510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16550Cu;
            // 0x165510: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165514u; }
        if (ctx->pc != 0x165514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165514u; }
        if (ctx->pc != 0x165514u) { return; }
    }
    ctx->pc = 0x165514u;
    // 0x165514: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x165514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x165518: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x165518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x16551c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16551cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165520: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165524: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x165524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x165528: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165528u;
    SET_GPR_U32(ctx, 31, 0x165530u);
    ctx->pc = 0x16552Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165528u;
            // 0x16552c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165530u; }
        if (ctx->pc != 0x165530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165530u; }
        if (ctx->pc != 0x165530u) { return; }
    }
    ctx->pc = 0x165530u;
    // 0x165530: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x165530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x165534: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x165534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165538: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16553c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x16553cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165540: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x165540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x165544: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165544u;
    SET_GPR_U32(ctx, 31, 0x16554Cu);
    ctx->pc = 0x165548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165544u;
            // 0x165548: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16554Cu; }
        if (ctx->pc != 0x16554Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16554Cu; }
        if (ctx->pc != 0x16554Cu) { return; }
    }
    ctx->pc = 0x16554Cu;
    // 0x16554c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x16554cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165550: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165554: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x165554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x165558: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x165558u;
    SET_GPR_U32(ctx, 31, 0x165560u);
    ctx->pc = 0x16555Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165558u;
            // 0x16555c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165560u; }
        if (ctx->pc != 0x165560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165560u; }
        if (ctx->pc != 0x165560u) { return; }
    }
    ctx->pc = 0x165560u;
    // 0x165560: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x165560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x165564: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x165564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165568: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16556c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x16556cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165570: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x165570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x165574: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165574u;
    SET_GPR_U32(ctx, 31, 0x16557Cu);
    ctx->pc = 0x165578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165574u;
            // 0x165578: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16557Cu; }
        if (ctx->pc != 0x16557Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16557Cu; }
        if (ctx->pc != 0x16557Cu) { return; }
    }
    ctx->pc = 0x16557Cu;
    // 0x16557c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x16557cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x165580: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x165580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165584: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165588: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16558c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x16558cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x165590: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165590u;
    SET_GPR_U32(ctx, 31, 0x165598u);
    ctx->pc = 0x165594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165590u;
            // 0x165594: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165598u; }
        if (ctx->pc != 0x165598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165598u; }
        if (ctx->pc != 0x165598u) { return; }
    }
    ctx->pc = 0x165598u;
    // 0x165598: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x165598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
    // 0x16559c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x16559cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1655a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1655a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1655a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1655a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1655a8: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1655a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1655ac: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1655ACu;
    SET_GPR_U32(ctx, 31, 0x1655B4u);
    ctx->pc = 0x1655B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1655ACu;
            // 0x1655b0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1655B4u; }
        if (ctx->pc != 0x1655B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1655B4u; }
        if (ctx->pc != 0x1655B4u) { return; }
    }
    ctx->pc = 0x1655B4u;
    // 0x1655b4: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x1655b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x1655b8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1655b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1655bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1655bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1655c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1655c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1655c4: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1655c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1655c8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1655C8u;
    SET_GPR_U32(ctx, 31, 0x1655D0u);
    ctx->pc = 0x1655CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1655C8u;
            // 0x1655cc: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1655D0u; }
        if (ctx->pc != 0x1655D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1655D0u; }
        if (ctx->pc != 0x1655D0u) { return; }
    }
    ctx->pc = 0x1655D0u;
    // 0x1655d0: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x1655d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
    // 0x1655d4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1655d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1655d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1655d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1655dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1655dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1655e0: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1655e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1655e4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1655E4u;
    SET_GPR_U32(ctx, 31, 0x1655ECu);
    ctx->pc = 0x1655E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1655E4u;
            // 0x1655e8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1655ECu; }
        if (ctx->pc != 0x1655ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1655ECu; }
        if (ctx->pc != 0x1655ECu) { return; }
    }
    ctx->pc = 0x1655ECu;
    // 0x1655ec: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1655ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1655f0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1655f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1655f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1655f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1655f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1655f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1655fc: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1655fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x165600: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165600u;
    SET_GPR_U32(ctx, 31, 0x165608u);
    ctx->pc = 0x165604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165600u;
            // 0x165604: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165608u; }
        if (ctx->pc != 0x165608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165608u; }
        if (ctx->pc != 0x165608u) { return; }
    }
    ctx->pc = 0x165608u;
    // 0x165608: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x165608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x16560c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x16560cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165610: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165614: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165618: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x165618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x16561c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x16561Cu;
    SET_GPR_U32(ctx, 31, 0x165624u);
    ctx->pc = 0x165620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16561Cu;
            // 0x165620: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165624u; }
        if (ctx->pc != 0x165624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165624u; }
        if (ctx->pc != 0x165624u) { return; }
    }
    ctx->pc = 0x165624u;
    // 0x165624: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x165624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x165628: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x165628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x16562c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16562cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165630: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165634: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x165634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x165638: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165638u;
    SET_GPR_U32(ctx, 31, 0x165640u);
    ctx->pc = 0x16563Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165638u;
            // 0x16563c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165640u; }
        if (ctx->pc != 0x165640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165640u; }
        if (ctx->pc != 0x165640u) { return; }
    }
    ctx->pc = 0x165640u;
    // 0x165640: 0x3c02c35c  lui         $v0, 0xC35C
    ctx->pc = 0x165640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50012 << 16));
    // 0x165644: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x165644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165648: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16564c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x16564cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165650: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x165650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x165654: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165654u;
    SET_GPR_U32(ctx, 31, 0x16565Cu);
    ctx->pc = 0x165658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165654u;
            // 0x165658: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16565Cu; }
        if (ctx->pc != 0x16565Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16565Cu; }
        if (ctx->pc != 0x16565Cu) { return; }
    }
    ctx->pc = 0x16565Cu;
    // 0x16565c: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x16565cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x165660: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x165660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165664: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165668: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16566c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x16566cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x165670: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165670u;
    SET_GPR_U32(ctx, 31, 0x165678u);
    ctx->pc = 0x165674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165670u;
            // 0x165674: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165678u; }
        if (ctx->pc != 0x165678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165678u; }
        if (ctx->pc != 0x165678u) { return; }
    }
    ctx->pc = 0x165678u;
    // 0x165678: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x165678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x16567c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x16567cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165680: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165684: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165688: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x165688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x16568c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x16568Cu;
    SET_GPR_U32(ctx, 31, 0x165694u);
    ctx->pc = 0x165690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16568Cu;
            // 0x165690: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165694u; }
        if (ctx->pc != 0x165694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165694u; }
        if (ctx->pc != 0x165694u) { return; }
    }
    ctx->pc = 0x165694u;
    // 0x165694: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x165694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x165698: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x165698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x16569c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16569cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1656a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1656a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1656a4: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1656a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1656a8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1656A8u;
    SET_GPR_U32(ctx, 31, 0x1656B0u);
    ctx->pc = 0x1656ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1656A8u;
            // 0x1656ac: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1656B0u; }
        if (ctx->pc != 0x1656B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1656B0u; }
        if (ctx->pc != 0x1656B0u) { return; }
    }
    ctx->pc = 0x1656B0u;
label_1656b0:
    // 0x1656b0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1656b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1656b4: 0x28410259  slti        $at, $v0, 0x259
    ctx->pc = 0x1656b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)601) ? 1 : 0);
    // 0x1656b8: 0x142002cb  bnez        $at, . + 4 + (0x2CB << 2)
    ctx->pc = 0x1656B8u;
    {
        const bool branch_taken_0x1656b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1656b8) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x1656C0u;
    // 0x1656c0: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x1656c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x1656c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1656c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1656c8: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x1656c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
    // 0x1656cc: 0xae2000d4  sw          $zero, 0xD4($s1)
    ctx->pc = 0x1656ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
    // 0x1656d0: 0x100002c5  b           . + 4 + (0x2C5 << 2)
    ctx->pc = 0x1656D0u;
    {
        const bool branch_taken_0x1656d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1656D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1656D0u;
            // 0x1656d4: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1656d0) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x1656D8u;
label_1656d8:
    // 0x1656d8: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1656d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x1656dc: 0xc62100d4  lwc1        $f1, 0xD4($s1)
    ctx->pc = 0x1656dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1656e0: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1656e0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1656e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1656e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1656e8: 0x0  nop
    ctx->pc = 0x1656e8u;
    // NOP
    // 0x1656ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1656ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1656f0: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x1656f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x1656f4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1656f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1656f8: 0x284100b5  slti        $at, $v0, 0xB5
    ctx->pc = 0x1656f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)181) ? 1 : 0);
    // 0x1656fc: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1656FCu;
    {
        const bool branch_taken_0x1656fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1656fc) {
            ctx->pc = 0x165718u;
            goto label_165718;
        }
    }
    ctx->pc = 0x165704u;
    // 0x165704: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x165704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x165708: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16570c: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x16570cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x165710: 0xc05997c  jal         func_1665F0
    ctx->pc = 0x165710u;
    SET_GPR_U32(ctx, 31, 0x165718u);
    ctx->pc = 0x165714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165710u;
            // 0x165714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1665F0u;
    if (runtime->hasFunction(0x1665F0u)) {
        auto targetFn = runtime->lookupFunction(0x1665F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165718u; }
        if (ctx->pc != 0x165718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x1665f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165718u; }
        if (ctx->pc != 0x165718u) { return; }
    }
    ctx->pc = 0x165718u;
label_165718:
    // 0x165718: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x165718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16571c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x16571cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x165720: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x165720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x165724: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x165724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x165728: 0xc059a4c  jal         func_166930
    ctx->pc = 0x165728u;
    SET_GPR_U32(ctx, 31, 0x165730u);
    ctx->pc = 0x16572Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165728u;
            // 0x16572c: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166930u;
    if (runtime->hasFunction(0x166930u)) {
        auto targetFn = runtime->lookupFunction(0x166930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165730u; }
        if (ctx->pc != 0x165730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x166930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165730u; }
        if (ctx->pc != 0x165730u) { return; }
    }
    ctx->pc = 0x165730u;
    // 0x165730: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x165730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x165734: 0x120200d8  beq         $s0, $v0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x165734u;
    {
        const bool branch_taken_0x165734 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x165738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165734u;
            // 0x165738: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165734) {
            ctx->pc = 0x165A98u;
            goto label_165a98;
        }
    }
    ctx->pc = 0x16573Cu;
    // 0x16573c: 0x12020076  beq         $s0, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x16573Cu;
    {
        const bool branch_taken_0x16573c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x16573c) {
            ctx->pc = 0x165918u;
            goto label_165918;
        }
    }
    ctx->pc = 0x165744u;
    // 0x165744: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x165744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x165748: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x165748u;
    {
        const bool branch_taken_0x165748 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x16574Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165748u;
            // 0x16574c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165748) {
            ctx->pc = 0x165768u;
            goto label_165768;
        }
    }
    ctx->pc = 0x165750u;
    // 0x165750: 0x120202a5  beq         $s0, $v0, . + 4 + (0x2A5 << 2)
    ctx->pc = 0x165750u;
    {
        const bool branch_taken_0x165750 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x165750) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x165758u;
    // 0x165758: 0x120002a3  beqz        $s0, . + 4 + (0x2A3 << 2)
    ctx->pc = 0x165758u;
    {
        const bool branch_taken_0x165758 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x165758) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x165760u;
    // 0x165760: 0x100002a1  b           . + 4 + (0x2A1 << 2)
    ctx->pc = 0x165760u;
    {
        const bool branch_taken_0x165760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165760) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x165768u;
label_165768:
    // 0x165768: 0xc065d00  jal         func_197400
    ctx->pc = 0x165768u;
    SET_GPR_U32(ctx, 31, 0x165770u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165770u; }
        if (ctx->pc != 0x165770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165770u; }
        if (ctx->pc != 0x165770u) { return; }
    }
    ctx->pc = 0x165770u;
    // 0x165770: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x165770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165774: 0x14430030  bne         $v0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x165774u;
    {
        const bool branch_taken_0x165774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x165774) {
            ctx->pc = 0x165838u;
            goto label_165838;
        }
    }
    ctx->pc = 0x16577Cu;
    // 0x16577c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x16577cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x165780: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x165780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x165784: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x165784u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x165788: 0x0  nop
    ctx->pc = 0x165788u;
    // NOP
    // 0x16578c: 0x0  nop
    ctx->pc = 0x16578cu;
    // NOP
    // 0x165790: 0x1010  mfhi        $v0
    ctx->pc = 0x165790u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x165794: 0x14400294  bnez        $v0, . + 4 + (0x294 << 2)
    ctx->pc = 0x165794u;
    {
        const bool branch_taken_0x165794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165794) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x16579Cu;
    // 0x16579c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x16579cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1657a0: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x1657a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x1657a4: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1657a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1657a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1657a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1657ac: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1657ACu;
    SET_GPR_U32(ctx, 31, 0x1657B4u);
    ctx->pc = 0x1657B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1657ACu;
            // 0x1657b0: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1657B4u; }
        if (ctx->pc != 0x1657B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1657B4u; }
        if (ctx->pc != 0x1657B4u) { return; }
    }
    ctx->pc = 0x1657B4u;
    // 0x1657b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1657b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1657b8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1657b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1657bc: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1657bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1657c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1657c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1657c4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1657C4u;
    SET_GPR_U32(ctx, 31, 0x1657CCu);
    ctx->pc = 0x1657C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1657C4u;
            // 0x1657c8: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1657CCu; }
        if (ctx->pc != 0x1657CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1657CCu; }
        if (ctx->pc != 0x1657CCu) { return; }
    }
    ctx->pc = 0x1657CCu;
    // 0x1657cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1657ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1657d0: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x1657d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x1657d4: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1657d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1657d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1657d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1657dc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1657DCu;
    SET_GPR_U32(ctx, 31, 0x1657E4u);
    ctx->pc = 0x1657E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1657DCu;
            // 0x1657e0: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1657E4u; }
        if (ctx->pc != 0x1657E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1657E4u; }
        if (ctx->pc != 0x1657E4u) { return; }
    }
    ctx->pc = 0x1657E4u;
    // 0x1657e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1657e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1657e8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1657e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1657ec: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1657ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1657f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1657f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1657f4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1657F4u;
    SET_GPR_U32(ctx, 31, 0x1657FCu);
    ctx->pc = 0x1657F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1657F4u;
            // 0x1657f8: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1657FCu; }
        if (ctx->pc != 0x1657FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1657FCu; }
        if (ctx->pc != 0x1657FCu) { return; }
    }
    ctx->pc = 0x1657FCu;
    // 0x1657fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1657fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165800: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x165800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x165804: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165808: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16580c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x16580Cu;
    SET_GPR_U32(ctx, 31, 0x165814u);
    ctx->pc = 0x165810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16580Cu;
            // 0x165810: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165814u; }
        if (ctx->pc != 0x165814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165814u; }
        if (ctx->pc != 0x165814u) { return; }
    }
    ctx->pc = 0x165814u;
    // 0x165814: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x165814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165818: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x165818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x16581c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x16581cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165820: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165824: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165824u;
    SET_GPR_U32(ctx, 31, 0x16582Cu);
    ctx->pc = 0x165828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165824u;
            // 0x165828: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16582Cu; }
        if (ctx->pc != 0x16582Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16582Cu; }
        if (ctx->pc != 0x16582Cu) { return; }
    }
    ctx->pc = 0x16582Cu;
    // 0x16582c: 0x1000026e  b           . + 4 + (0x26E << 2)
    ctx->pc = 0x16582Cu;
    {
        const bool branch_taken_0x16582c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16582c) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x165834u;
    // 0x165834: 0x0  nop
    ctx->pc = 0x165834u;
    // NOP
label_165838:
    // 0x165838: 0xc065d00  jal         func_197400
    ctx->pc = 0x165838u;
    SET_GPR_U32(ctx, 31, 0x165840u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165840u; }
        if (ctx->pc != 0x165840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165840u; }
        if (ctx->pc != 0x165840u) { return; }
    }
    ctx->pc = 0x165840u;
    // 0x165840: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x165840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x165844: 0x14430268  bne         $v0, $v1, . + 4 + (0x268 << 2)
    ctx->pc = 0x165844u;
    {
        const bool branch_taken_0x165844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x165844) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x16584Cu;
    // 0x16584c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x16584cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x165850: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x165850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x165854: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x165854u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x165858: 0x0  nop
    ctx->pc = 0x165858u;
    // NOP
    // 0x16585c: 0x0  nop
    ctx->pc = 0x16585cu;
    // NOP
    // 0x165860: 0x1010  mfhi        $v0
    ctx->pc = 0x165860u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x165864: 0x14400260  bnez        $v0, . + 4 + (0x260 << 2)
    ctx->pc = 0x165864u;
    {
        const bool branch_taken_0x165864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165864) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x16586Cu;
    // 0x16586c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x16586cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165870: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x165870u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165874: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165878: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165878u;
    SET_GPR_U32(ctx, 31, 0x165880u);
    ctx->pc = 0x16587Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165878u;
            // 0x16587c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165880u; }
        if (ctx->pc != 0x165880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165880u; }
        if (ctx->pc != 0x165880u) { return; }
    }
    ctx->pc = 0x165880u;
    // 0x165880: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x165880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165884: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x165884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x165888: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x16588c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16588cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165890: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165890u;
    SET_GPR_U32(ctx, 31, 0x165898u);
    ctx->pc = 0x165894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165890u;
            // 0x165894: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165898u; }
        if (ctx->pc != 0x165898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165898u; }
        if (ctx->pc != 0x165898u) { return; }
    }
    ctx->pc = 0x165898u;
    // 0x165898: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x165898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16589c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x16589cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1658a0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1658a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1658a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1658a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1658a8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1658A8u;
    SET_GPR_U32(ctx, 31, 0x1658B0u);
    ctx->pc = 0x1658ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1658A8u;
            // 0x1658ac: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1658B0u; }
        if (ctx->pc != 0x1658B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1658B0u; }
        if (ctx->pc != 0x1658B0u) { return; }
    }
    ctx->pc = 0x1658B0u;
    // 0x1658b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1658b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1658b4: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x1658b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x1658b8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1658b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1658bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1658bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1658c0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1658C0u;
    SET_GPR_U32(ctx, 31, 0x1658C8u);
    ctx->pc = 0x1658C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1658C0u;
            // 0x1658c4: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1658C8u; }
        if (ctx->pc != 0x1658C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1658C8u; }
        if (ctx->pc != 0x1658C8u) { return; }
    }
    ctx->pc = 0x1658C8u;
    // 0x1658c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1658c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1658cc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1658ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1658d0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1658d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1658d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1658d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1658d8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1658D8u;
    SET_GPR_U32(ctx, 31, 0x1658E0u);
    ctx->pc = 0x1658DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1658D8u;
            // 0x1658dc: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1658E0u; }
        if (ctx->pc != 0x1658E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1658E0u; }
        if (ctx->pc != 0x1658E0u) { return; }
    }
    ctx->pc = 0x1658E0u;
    // 0x1658e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1658e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1658e4: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x1658e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x1658e8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1658e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1658ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1658ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1658f0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1658F0u;
    SET_GPR_U32(ctx, 31, 0x1658F8u);
    ctx->pc = 0x1658F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1658F0u;
            // 0x1658f4: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1658F8u; }
        if (ctx->pc != 0x1658F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1658F8u; }
        if (ctx->pc != 0x1658F8u) { return; }
    }
    ctx->pc = 0x1658F8u;
    // 0x1658f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1658f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1658fc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1658fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x165900: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165904: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165908: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165908u;
    SET_GPR_U32(ctx, 31, 0x165910u);
    ctx->pc = 0x16590Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165908u;
            // 0x16590c: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165910u; }
        if (ctx->pc != 0x165910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165910u; }
        if (ctx->pc != 0x165910u) { return; }
    }
    ctx->pc = 0x165910u;
    // 0x165910: 0x10000235  b           . + 4 + (0x235 << 2)
    ctx->pc = 0x165910u;
    {
        const bool branch_taken_0x165910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165910) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x165918u;
label_165918:
    // 0x165918: 0xc065d00  jal         func_197400
    ctx->pc = 0x165918u;
    SET_GPR_U32(ctx, 31, 0x165920u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165920u; }
        if (ctx->pc != 0x165920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165920u; }
        if (ctx->pc != 0x165920u) { return; }
    }
    ctx->pc = 0x165920u;
    // 0x165920: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x165920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165924: 0x14430024  bne         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x165924u;
    {
        const bool branch_taken_0x165924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x165924) {
            ctx->pc = 0x1659B8u;
            goto label_1659b8;
        }
    }
    ctx->pc = 0x16592Cu;
    // 0x16592c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x16592cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x165930: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x165930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x165934: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x165934u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x165938: 0x0  nop
    ctx->pc = 0x165938u;
    // NOP
    // 0x16593c: 0x0  nop
    ctx->pc = 0x16593cu;
    // NOP
    // 0x165940: 0x1010  mfhi        $v0
    ctx->pc = 0x165940u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x165944: 0x14400228  bnez        $v0, . + 4 + (0x228 << 2)
    ctx->pc = 0x165944u;
    {
        const bool branch_taken_0x165944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165944) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x16594Cu;
    // 0x16594c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x16594cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165950: 0x3c02c2b4  lui         $v0, 0xC2B4
    ctx->pc = 0x165950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49844 << 16));
    // 0x165954: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165958: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16595c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x16595Cu;
    SET_GPR_U32(ctx, 31, 0x165964u);
    ctx->pc = 0x165960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16595Cu;
            // 0x165960: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165964u; }
        if (ctx->pc != 0x165964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165964u; }
        if (ctx->pc != 0x165964u) { return; }
    }
    ctx->pc = 0x165964u;
    // 0x165964: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x165964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165968: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x165968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x16596c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x16596cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165970: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165974: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165974u;
    SET_GPR_U32(ctx, 31, 0x16597Cu);
    ctx->pc = 0x165978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165974u;
            // 0x165978: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16597Cu; }
        if (ctx->pc != 0x16597Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16597Cu; }
        if (ctx->pc != 0x16597Cu) { return; }
    }
    ctx->pc = 0x16597Cu;
    // 0x16597c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x16597cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165980: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x165980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
    // 0x165984: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165988: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16598c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x16598Cu;
    SET_GPR_U32(ctx, 31, 0x165994u);
    ctx->pc = 0x165990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16598Cu;
            // 0x165990: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165994u; }
        if (ctx->pc != 0x165994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165994u; }
        if (ctx->pc != 0x165994u) { return; }
    }
    ctx->pc = 0x165994u;
    // 0x165994: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x165994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165998: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x165998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x16599c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x16599cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1659a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1659a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1659a4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1659A4u;
    SET_GPR_U32(ctx, 31, 0x1659ACu);
    ctx->pc = 0x1659A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1659A4u;
            // 0x1659a8: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1659ACu; }
        if (ctx->pc != 0x1659ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1659ACu; }
        if (ctx->pc != 0x1659ACu) { return; }
    }
    ctx->pc = 0x1659ACu;
    // 0x1659ac: 0x1000020e  b           . + 4 + (0x20E << 2)
    ctx->pc = 0x1659ACu;
    {
        const bool branch_taken_0x1659ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1659ac) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x1659B4u;
    // 0x1659b4: 0x0  nop
    ctx->pc = 0x1659b4u;
    // NOP
label_1659b8:
    // 0x1659b8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1659B8u;
    SET_GPR_U32(ctx, 31, 0x1659C0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1659C0u; }
        if (ctx->pc != 0x1659C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1659C0u; }
        if (ctx->pc != 0x1659C0u) { return; }
    }
    ctx->pc = 0x1659C0u;
    // 0x1659c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1659c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1659c4: 0x14430208  bne         $v0, $v1, . + 4 + (0x208 << 2)
    ctx->pc = 0x1659C4u;
    {
        const bool branch_taken_0x1659c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1659c4) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x1659CCu;
    // 0x1659cc: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1659ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1659d0: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1659d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1659d4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1659d4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1659d8: 0x0  nop
    ctx->pc = 0x1659d8u;
    // NOP
    // 0x1659dc: 0x0  nop
    ctx->pc = 0x1659dcu;
    // NOP
    // 0x1659e0: 0x1010  mfhi        $v0
    ctx->pc = 0x1659e0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1659e4: 0x14400200  bnez        $v0, . + 4 + (0x200 << 2)
    ctx->pc = 0x1659E4u;
    {
        const bool branch_taken_0x1659e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1659e4) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x1659ECu;
    // 0x1659ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1659ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1659f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1659f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1659f4: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1659f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1659f8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1659F8u;
    SET_GPR_U32(ctx, 31, 0x165A00u);
    ctx->pc = 0x1659FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1659F8u;
            // 0x1659fc: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A00u; }
        if (ctx->pc != 0x165A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A00u; }
        if (ctx->pc != 0x165A00u) { return; }
    }
    ctx->pc = 0x165A00u;
    // 0x165a00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x165a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165a04: 0x3c02c2b4  lui         $v0, 0xC2B4
    ctx->pc = 0x165a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49844 << 16));
    // 0x165a08: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165a0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165a10: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165A10u;
    SET_GPR_U32(ctx, 31, 0x165A18u);
    ctx->pc = 0x165A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165A10u;
            // 0x165a14: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A18u; }
        if (ctx->pc != 0x165A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A18u; }
        if (ctx->pc != 0x165A18u) { return; }
    }
    ctx->pc = 0x165A18u;
    // 0x165a18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x165a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165a1c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x165a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x165a20: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165a24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165a28: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165A28u;
    SET_GPR_U32(ctx, 31, 0x165A30u);
    ctx->pc = 0x165A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165A28u;
            // 0x165a2c: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A30u; }
        if (ctx->pc != 0x165A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A30u; }
        if (ctx->pc != 0x165A30u) { return; }
    }
    ctx->pc = 0x165A30u;
    // 0x165a30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x165a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165a34: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x165a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
    // 0x165a38: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165a3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165a3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165a40: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165A40u;
    SET_GPR_U32(ctx, 31, 0x165A48u);
    ctx->pc = 0x165A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165A40u;
            // 0x165a44: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A48u; }
        if (ctx->pc != 0x165A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A48u; }
        if (ctx->pc != 0x165A48u) { return; }
    }
    ctx->pc = 0x165A48u;
    // 0x165a48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x165a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165a4c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x165a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x165a50: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165a54: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165a54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165a58: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165A58u;
    SET_GPR_U32(ctx, 31, 0x165A60u);
    ctx->pc = 0x165A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165A58u;
            // 0x165a5c: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A60u; }
        if (ctx->pc != 0x165A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A60u; }
        if (ctx->pc != 0x165A60u) { return; }
    }
    ctx->pc = 0x165A60u;
    // 0x165a60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x165a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165a64: 0x3c02c387  lui         $v0, 0xC387
    ctx->pc = 0x165a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50055 << 16));
    // 0x165a68: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165a6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165a70: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165A70u;
    SET_GPR_U32(ctx, 31, 0x165A78u);
    ctx->pc = 0x165A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165A70u;
            // 0x165a74: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A78u; }
        if (ctx->pc != 0x165A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A78u; }
        if (ctx->pc != 0x165A78u) { return; }
    }
    ctx->pc = 0x165A78u;
    // 0x165a78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x165a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165a7c: 0x3c024387  lui         $v0, 0x4387
    ctx->pc = 0x165a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17287 << 16));
    // 0x165a80: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165a84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165a88: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165A88u;
    SET_GPR_U32(ctx, 31, 0x165A90u);
    ctx->pc = 0x165A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165A88u;
            // 0x165a8c: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A90u; }
        if (ctx->pc != 0x165A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A90u; }
        if (ctx->pc != 0x165A90u) { return; }
    }
    ctx->pc = 0x165A90u;
    // 0x165a90: 0x100001d5  b           . + 4 + (0x1D5 << 2)
    ctx->pc = 0x165A90u;
    {
        const bool branch_taken_0x165a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165a90) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x165A98u;
label_165a98:
    // 0x165a98: 0xc065d00  jal         func_197400
    ctx->pc = 0x165A98u;
    SET_GPR_U32(ctx, 31, 0x165AA0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165AA0u; }
        if (ctx->pc != 0x165AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165AA0u; }
        if (ctx->pc != 0x165AA0u) { return; }
    }
    ctx->pc = 0x165AA0u;
    // 0x165aa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x165aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165aa4: 0x1443003c  bne         $v0, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x165AA4u;
    {
        const bool branch_taken_0x165aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x165aa4) {
            ctx->pc = 0x165B98u;
            goto label_165b98;
        }
    }
    ctx->pc = 0x165AACu;
    // 0x165aac: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x165aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x165ab0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x165ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x165ab4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x165ab4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x165ab8: 0x0  nop
    ctx->pc = 0x165ab8u;
    // NOP
    // 0x165abc: 0x0  nop
    ctx->pc = 0x165abcu;
    // NOP
    // 0x165ac0: 0x1010  mfhi        $v0
    ctx->pc = 0x165ac0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x165ac4: 0x144001c8  bnez        $v0, . + 4 + (0x1C8 << 2)
    ctx->pc = 0x165AC4u;
    {
        const bool branch_taken_0x165ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165ac4) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x165ACCu;
    // 0x165acc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x165accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165ad0: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x165ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x165ad4: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165ad8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165ad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165adc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165ADCu;
    SET_GPR_U32(ctx, 31, 0x165AE4u);
    ctx->pc = 0x165AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165ADCu;
            // 0x165ae0: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165AE4u; }
        if (ctx->pc != 0x165AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165AE4u; }
        if (ctx->pc != 0x165AE4u) { return; }
    }
    ctx->pc = 0x165AE4u;
    // 0x165ae4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x165ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165ae8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x165ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x165aec: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165af0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165af4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165AF4u;
    SET_GPR_U32(ctx, 31, 0x165AFCu);
    ctx->pc = 0x165AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165AF4u;
            // 0x165af8: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165AFCu; }
        if (ctx->pc != 0x165AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165AFCu; }
        if (ctx->pc != 0x165AFCu) { return; }
    }
    ctx->pc = 0x165AFCu;
    // 0x165afc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x165afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165b00: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x165b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
    // 0x165b04: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165b08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165b0c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165B0Cu;
    SET_GPR_U32(ctx, 31, 0x165B14u);
    ctx->pc = 0x165B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165B0Cu;
            // 0x165b10: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165B14u; }
        if (ctx->pc != 0x165B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165B14u; }
        if (ctx->pc != 0x165B14u) { return; }
    }
    ctx->pc = 0x165B14u;
    // 0x165b14: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x165b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165b18: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x165b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x165b1c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165b20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165b24: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165B24u;
    SET_GPR_U32(ctx, 31, 0x165B2Cu);
    ctx->pc = 0x165B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165B24u;
            // 0x165b28: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165B2Cu; }
        if (ctx->pc != 0x165B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165B2Cu; }
        if (ctx->pc != 0x165B2Cu) { return; }
    }
    ctx->pc = 0x165B2Cu;
    // 0x165b2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x165b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165b30: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x165b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x165b34: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165b38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165b3c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165B3Cu;
    SET_GPR_U32(ctx, 31, 0x165B44u);
    ctx->pc = 0x165B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165B3Cu;
            // 0x165b40: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165B44u; }
        if (ctx->pc != 0x165B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165B44u; }
        if (ctx->pc != 0x165B44u) { return; }
    }
    ctx->pc = 0x165B44u;
    // 0x165b44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x165b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165b48: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x165b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x165b4c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165b50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165b54: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165B54u;
    SET_GPR_U32(ctx, 31, 0x165B5Cu);
    ctx->pc = 0x165B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165B54u;
            // 0x165b58: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165B5Cu; }
        if (ctx->pc != 0x165B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165B5Cu; }
        if (ctx->pc != 0x165B5Cu) { return; }
    }
    ctx->pc = 0x165B5Cu;
    // 0x165b5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x165b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165b60: 0x3c02c3a0  lui         $v0, 0xC3A0
    ctx->pc = 0x165b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50080 << 16));
    // 0x165b64: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165b68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165b6c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165B6Cu;
    SET_GPR_U32(ctx, 31, 0x165B74u);
    ctx->pc = 0x165B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165B6Cu;
            // 0x165b70: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165B74u; }
        if (ctx->pc != 0x165B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165B74u; }
        if (ctx->pc != 0x165B74u) { return; }
    }
    ctx->pc = 0x165B74u;
    // 0x165b74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x165b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165b78: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x165b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
    // 0x165b7c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165b80: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165b84: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165B84u;
    SET_GPR_U32(ctx, 31, 0x165B8Cu);
    ctx->pc = 0x165B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165B84u;
            // 0x165b88: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165B8Cu; }
        if (ctx->pc != 0x165B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165B8Cu; }
        if (ctx->pc != 0x165B8Cu) { return; }
    }
    ctx->pc = 0x165B8Cu;
    // 0x165b8c: 0x10000196  b           . + 4 + (0x196 << 2)
    ctx->pc = 0x165B8Cu;
    {
        const bool branch_taken_0x165b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165b8c) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x165B94u;
    // 0x165b94: 0x0  nop
    ctx->pc = 0x165b94u;
    // NOP
label_165b98:
    // 0x165b98: 0xc065d00  jal         func_197400
    ctx->pc = 0x165B98u;
    SET_GPR_U32(ctx, 31, 0x165BA0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165BA0u; }
        if (ctx->pc != 0x165BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165BA0u; }
        if (ctx->pc != 0x165BA0u) { return; }
    }
    ctx->pc = 0x165BA0u;
    // 0x165ba0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x165ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x165ba4: 0x14430190  bne         $v0, $v1, . + 4 + (0x190 << 2)
    ctx->pc = 0x165BA4u;
    {
        const bool branch_taken_0x165ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x165ba4) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x165BACu;
    // 0x165bac: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x165bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x165bb0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x165bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x165bb4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x165bb4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x165bb8: 0x0  nop
    ctx->pc = 0x165bb8u;
    // NOP
    // 0x165bbc: 0x0  nop
    ctx->pc = 0x165bbcu;
    // NOP
    // 0x165bc0: 0x1010  mfhi        $v0
    ctx->pc = 0x165bc0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x165bc4: 0x14400188  bnez        $v0, . + 4 + (0x188 << 2)
    ctx->pc = 0x165BC4u;
    {
        const bool branch_taken_0x165bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165bc4) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x165BCCu;
    // 0x165bcc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165bd0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x165bd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165bd4: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165bd8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165BD8u;
    SET_GPR_U32(ctx, 31, 0x165BE0u);
    ctx->pc = 0x165BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165BD8u;
            // 0x165bdc: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165BE0u; }
        if (ctx->pc != 0x165BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165BE0u; }
        if (ctx->pc != 0x165BE0u) { return; }
    }
    ctx->pc = 0x165BE0u;
    // 0x165be0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x165be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165be4: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x165be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x165be8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165bec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165bf0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165BF0u;
    SET_GPR_U32(ctx, 31, 0x165BF8u);
    ctx->pc = 0x165BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165BF0u;
            // 0x165bf4: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165BF8u; }
        if (ctx->pc != 0x165BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165BF8u; }
        if (ctx->pc != 0x165BF8u) { return; }
    }
    ctx->pc = 0x165BF8u;
    // 0x165bf8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x165bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165bfc: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x165bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x165c00: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165c04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165c08: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165C08u;
    SET_GPR_U32(ctx, 31, 0x165C10u);
    ctx->pc = 0x165C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165C08u;
            // 0x165c0c: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165C10u; }
        if (ctx->pc != 0x165C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165C10u; }
        if (ctx->pc != 0x165C10u) { return; }
    }
    ctx->pc = 0x165C10u;
    // 0x165c10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x165c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165c14: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x165c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
    // 0x165c18: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165c1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165c1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165c20: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165C20u;
    SET_GPR_U32(ctx, 31, 0x165C28u);
    ctx->pc = 0x165C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165C20u;
            // 0x165c24: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165C28u; }
        if (ctx->pc != 0x165C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165C28u; }
        if (ctx->pc != 0x165C28u) { return; }
    }
    ctx->pc = 0x165C28u;
    // 0x165c28: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x165c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165c2c: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x165c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x165c30: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165c34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165c38: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165C38u;
    SET_GPR_U32(ctx, 31, 0x165C40u);
    ctx->pc = 0x165C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165C38u;
            // 0x165c3c: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165C40u; }
        if (ctx->pc != 0x165C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165C40u; }
        if (ctx->pc != 0x165C40u) { return; }
    }
    ctx->pc = 0x165C40u;
    // 0x165c40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x165c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165c44: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x165c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x165c48: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165c4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165c50: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165C50u;
    SET_GPR_U32(ctx, 31, 0x165C58u);
    ctx->pc = 0x165C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165C50u;
            // 0x165c54: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165C58u; }
        if (ctx->pc != 0x165C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165C58u; }
        if (ctx->pc != 0x165C58u) { return; }
    }
    ctx->pc = 0x165C58u;
    // 0x165c58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x165c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165c5c: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x165c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x165c60: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165c64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165c68: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165C68u;
    SET_GPR_U32(ctx, 31, 0x165C70u);
    ctx->pc = 0x165C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165C68u;
            // 0x165c6c: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165C70u; }
        if (ctx->pc != 0x165C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165C70u; }
        if (ctx->pc != 0x165C70u) { return; }
    }
    ctx->pc = 0x165C70u;
    // 0x165c70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x165c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165c74: 0x3c02c3a0  lui         $v0, 0xC3A0
    ctx->pc = 0x165c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50080 << 16));
    // 0x165c78: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165c7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165c7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165c80: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165C80u;
    SET_GPR_U32(ctx, 31, 0x165C88u);
    ctx->pc = 0x165C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165C80u;
            // 0x165c84: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165C88u; }
        if (ctx->pc != 0x165C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165C88u; }
        if (ctx->pc != 0x165C88u) { return; }
    }
    ctx->pc = 0x165C88u;
    // 0x165c88: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x165c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165c8c: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x165c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
    // 0x165c90: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165c94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165c98: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165C98u;
    SET_GPR_U32(ctx, 31, 0x165CA0u);
    ctx->pc = 0x165C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165C98u;
            // 0x165c9c: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165CA0u; }
        if (ctx->pc != 0x165CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165CA0u; }
        if (ctx->pc != 0x165CA0u) { return; }
    }
    ctx->pc = 0x165CA0u;
    // 0x165ca0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x165ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165ca4: 0x3c02c3c8  lui         $v0, 0xC3C8
    ctx->pc = 0x165ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50120 << 16));
    // 0x165ca8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165cac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165cb0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165CB0u;
    SET_GPR_U32(ctx, 31, 0x165CB8u);
    ctx->pc = 0x165CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165CB0u;
            // 0x165cb4: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165CB8u; }
        if (ctx->pc != 0x165CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165CB8u; }
        if (ctx->pc != 0x165CB8u) { return; }
    }
    ctx->pc = 0x165CB8u;
    // 0x165cb8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x165cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165cbc: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x165cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x165cc0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x165cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165cc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165cc8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x165CC8u;
    SET_GPR_U32(ctx, 31, 0x165CD0u);
    ctx->pc = 0x165CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165CC8u;
            // 0x165ccc: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165CD0u; }
        if (ctx->pc != 0x165CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165CD0u; }
        if (ctx->pc != 0x165CD0u) { return; }
    }
    ctx->pc = 0x165CD0u;
    // 0x165cd0: 0x10000145  b           . + 4 + (0x145 << 2)
    ctx->pc = 0x165CD0u;
    {
        const bool branch_taken_0x165cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165cd0) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x165CD8u;
label_165cd8:
    // 0x165cd8: 0xc0656b4  jal         func_195AD0
    ctx->pc = 0x165CD8u;
    SET_GPR_U32(ctx, 31, 0x165CE0u);
    ctx->pc = 0x195AD0u;
    if (runtime->hasFunction(0x195AD0u)) {
        auto targetFn = runtime->lookupFunction(0x195AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165CE0u; }
        if (ctx->pc != 0x165CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotBloadCastDead2_0x195ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165CE0u; }
        if (ctx->pc != 0x165CE0u) { return; }
    }
    ctx->pc = 0x165CE0u;
    // 0x165ce0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x165ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x165ce4: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x165ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x165ce8: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x165ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x165cec: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x165cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x165cf0: 0xc059a4c  jal         func_166930
    ctx->pc = 0x165CF0u;
    SET_GPR_U32(ctx, 31, 0x165CF8u);
    ctx->pc = 0x165CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165CF0u;
            // 0x165cf4: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166930u;
    if (runtime->hasFunction(0x166930u)) {
        auto targetFn = runtime->lookupFunction(0x166930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165CF8u; }
        if (ctx->pc != 0x165CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x166930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165CF8u; }
        if (ctx->pc != 0x165CF8u) { return; }
    }
    ctx->pc = 0x165CF8u;
    // 0x165cf8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x165cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x165cfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165d00: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x165d00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x165d04: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x165d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165d08: 0xc05b978  jal         func_16E5E0
    ctx->pc = 0x165D08u;
    SET_GPR_U32(ctx, 31, 0x165D10u);
    ctx->pc = 0x165D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165D08u;
            // 0x165d0c: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E5E0u;
    if (runtime->hasFunction(0x16E5E0u)) {
        auto targetFn = runtime->lookupFunction(0x16E5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165D10u; }
        if (ctx->pc != 0x165D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Hp0_0x16e5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165D10u; }
        if (ctx->pc != 0x165D10u) { return; }
    }
    ctx->pc = 0x165D10u;
    // 0x165d10: 0xc05b9cc  jal         func_16E730
    ctx->pc = 0x165D10u;
    SET_GPR_U32(ctx, 31, 0x165D18u);
    ctx->pc = 0x165D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165D10u;
            // 0x165d14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E730u;
    if (runtime->hasFunction(0x16E730u)) {
        auto targetFn = runtime->lookupFunction(0x16E730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165D18u; }
        if (ctx->pc != 0x165D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_All_Hp0_0x16e730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165D18u; }
        if (ctx->pc != 0x165D18u) { return; }
    }
    ctx->pc = 0x165D18u;
    // 0x165d18: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x165D18u;
    SET_GPR_U32(ctx, 31, 0x165D20u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165D20u; }
        if (ctx->pc != 0x165D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165D20u; }
        if (ctx->pc != 0x165D20u) { return; }
    }
    ctx->pc = 0x165D20u;
    // 0x165d20: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x165d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x165d24: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x165d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x165d28: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x165d28u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x165d2c: 0xc62200d0  lwc1        $f2, 0xD0($s1)
    ctx->pc = 0x165d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x165d30: 0xc62000d4  lwc1        $f0, 0xD4($s1)
    ctx->pc = 0x165d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165d34: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x165d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x165d38: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x165d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x165d3c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x165d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x165d40: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x165d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x165d44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x165d44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x165d48: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x165d48u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x165d4c: 0x1010  mfhi        $v0
    ctx->pc = 0x165d4cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x165d50: 0x24650064  addiu       $a1, $v1, 0x64
    ctx->pc = 0x165d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x165d54: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x165d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x165d58: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x165d58u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x165d5c: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x165D5Cu;
    SET_GPR_U32(ctx, 31, 0x165D64u);
    ctx->pc = 0x165D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165D5Cu;
            // 0x165d60: 0x2444ff60  addiu       $a0, $v0, -0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165D64u; }
        if (ctx->pc != 0x165D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165D64u; }
        if (ctx->pc != 0x165D64u) { return; }
    }
    ctx->pc = 0x165D64u;
    // 0x165d64: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x165d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x165d68: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x165d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x165d6c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x165d6cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x165d70: 0x0  nop
    ctx->pc = 0x165d70u;
    // NOP
    // 0x165d74: 0x0  nop
    ctx->pc = 0x165d74u;
    // NOP
    // 0x165d78: 0x1010  mfhi        $v0
    ctx->pc = 0x165d78u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x165d7c: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x165D7Cu;
    {
        const bool branch_taken_0x165d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165d7c) {
            ctx->pc = 0x165F00u;
            goto label_165f00;
        }
    }
    ctx->pc = 0x165D84u;
    // 0x165d84: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x165D84u;
    SET_GPR_U32(ctx, 31, 0x165D8Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165D8Cu; }
        if (ctx->pc != 0x165D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165D8Cu; }
        if (ctx->pc != 0x165D8Cu) { return; }
    }
    ctx->pc = 0x165D8Cu;
    // 0x165d8c: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x165d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x165d90: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x165d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x165d94: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x165d94u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x165d98: 0xc62200d0  lwc1        $f2, 0xD0($s1)
    ctx->pc = 0x165d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x165d9c: 0xc62000d4  lwc1        $f0, 0xD4($s1)
    ctx->pc = 0x165d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165da0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x165da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x165da4: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x165da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x165da8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x165da8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x165dac: 0x8010  mfhi        $s0
    ctx->pc = 0x165dacu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x165db0: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x165db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x165db4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x165db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x165db8: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x165db8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x165dbc: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x165dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x165dc0: 0x24650064  addiu       $a1, $v1, 0x64
    ctx->pc = 0x165dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x165dc4: 0x2444ff60  addiu       $a0, $v0, -0xA0
    ctx->pc = 0x165dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967136));
    // 0x165dc8: 0xc053740  jal         func_14DD00
    ctx->pc = 0x165DC8u;
    SET_GPR_U32(ctx, 31, 0x165DD0u);
    ctx->pc = 0x165DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165DC8u;
            // 0x165dcc: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165DD0u; }
        if (ctx->pc != 0x165DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165DD0u; }
        if (ctx->pc != 0x165DD0u) { return; }
    }
    ctx->pc = 0x165DD0u;
    // 0x165dd0: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x165dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x165dd4: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x165dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x165dd8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x165dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x165ddc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x165ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x165de0: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x165de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x165de4: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x165de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x165de8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x165de8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x165dec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x165decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x165df0: 0x0  nop
    ctx->pc = 0x165df0u;
    // NOP
    // 0x165df4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x165df4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x165df8: 0xc05d080  jal         func_174200
    ctx->pc = 0x165DF8u;
    SET_GPR_U32(ctx, 31, 0x165E00u);
    ctx->pc = 0x165DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165DF8u;
            // 0x165dfc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165E00u; }
        if (ctx->pc != 0x165E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165E00u; }
        if (ctx->pc != 0x165E00u) { return; }
    }
    ctx->pc = 0x165E00u;
    // 0x165e00: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x165E00u;
    SET_GPR_U32(ctx, 31, 0x165E08u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165E08u; }
        if (ctx->pc != 0x165E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165E08u; }
        if (ctx->pc != 0x165E08u) { return; }
    }
    ctx->pc = 0x165E08u;
    // 0x165e08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x165e08u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x165e0c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x165E0Cu;
    {
        const bool branch_taken_0x165e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165e0c) {
            ctx->pc = 0x165E48u;
            goto label_165e48;
        }
    }
    ctx->pc = 0x165E14u;
    // 0x165e14: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x165e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x165e18: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x165e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x165e1c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x165e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x165e20: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x165e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x165e24: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x165e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x165e28: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x165e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x165e2c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x165e2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x165e30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x165e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x165e34: 0x0  nop
    ctx->pc = 0x165e34u;
    // NOP
    // 0x165e38: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x165e38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x165e3c: 0xc05d080  jal         func_174200
    ctx->pc = 0x165E3Cu;
    SET_GPR_U32(ctx, 31, 0x165E44u);
    ctx->pc = 0x165E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165E3Cu;
            // 0x165e40: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165E44u; }
        if (ctx->pc != 0x165E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165E44u; }
        if (ctx->pc != 0x165E44u) { return; }
    }
    ctx->pc = 0x165E44u;
    // 0x165e44: 0x0  nop
    ctx->pc = 0x165e44u;
    // NOP
label_165e48:
    // 0x165e48: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x165E48u;
    SET_GPR_U32(ctx, 31, 0x165E50u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165E50u; }
        if (ctx->pc != 0x165E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165E50u; }
        if (ctx->pc != 0x165E50u) { return; }
    }
    ctx->pc = 0x165E50u;
    // 0x165e50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x165e50u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x165e54: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x165E54u;
    {
        const bool branch_taken_0x165e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165e54) {
            ctx->pc = 0x165E90u;
            goto label_165e90;
        }
    }
    ctx->pc = 0x165E5Cu;
    // 0x165e5c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x165e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x165e60: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x165e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x165e64: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x165e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x165e68: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x165e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x165e6c: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x165e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x165e70: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x165e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x165e74: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x165e74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x165e78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x165e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x165e7c: 0x0  nop
    ctx->pc = 0x165e7cu;
    // NOP
    // 0x165e80: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x165e80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x165e84: 0xc05d080  jal         func_174200
    ctx->pc = 0x165E84u;
    SET_GPR_U32(ctx, 31, 0x165E8Cu);
    ctx->pc = 0x165E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165E84u;
            // 0x165e88: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165E8Cu; }
        if (ctx->pc != 0x165E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165E8Cu; }
        if (ctx->pc != 0x165E8Cu) { return; }
    }
    ctx->pc = 0x165E8Cu;
    // 0x165e8c: 0x0  nop
    ctx->pc = 0x165e8cu;
    // NOP
label_165e90:
    // 0x165e90: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x165E90u;
    SET_GPR_U32(ctx, 31, 0x165E98u);
    ctx->pc = 0x165E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165E90u;
            // 0x165e94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165E98u; }
        if (ctx->pc != 0x165E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165E98u; }
        if (ctx->pc != 0x165E98u) { return; }
    }
    ctx->pc = 0x165E98u;
    // 0x165e98: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x165E98u;
    {
        const bool branch_taken_0x165e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165e98) {
            ctx->pc = 0x165EC8u;
            goto label_165ec8;
        }
    }
    ctx->pc = 0x165EA0u;
    // 0x165ea0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x165EA0u;
    SET_GPR_U32(ctx, 31, 0x165EA8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165EA8u; }
        if (ctx->pc != 0x165EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165EA8u; }
        if (ctx->pc != 0x165EA8u) { return; }
    }
    ctx->pc = 0x165EA8u;
    // 0x165ea8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x165ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x165eac: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x165eacu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x165eb0: 0x0  nop
    ctx->pc = 0x165eb0u;
    // NOP
    // 0x165eb4: 0x0  nop
    ctx->pc = 0x165eb4u;
    // NOP
    // 0x165eb8: 0x2810  mfhi        $a1
    ctx->pc = 0x165eb8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x165ebc: 0xc055124  jal         func_154490
    ctx->pc = 0x165EBCu;
    SET_GPR_U32(ctx, 31, 0x165EC4u);
    ctx->pc = 0x165EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165EBCu;
            // 0x165ec0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165EC4u; }
        if (ctx->pc != 0x165EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165EC4u; }
        if (ctx->pc != 0x165EC4u) { return; }
    }
    ctx->pc = 0x165EC4u;
    // 0x165ec4: 0x0  nop
    ctx->pc = 0x165ec4u;
    // NOP
label_165ec8:
    // 0x165ec8: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x165EC8u;
    SET_GPR_U32(ctx, 31, 0x165ED0u);
    ctx->pc = 0x165ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165EC8u;
            // 0x165ecc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165ED0u; }
        if (ctx->pc != 0x165ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165ED0u; }
        if (ctx->pc != 0x165ED0u) { return; }
    }
    ctx->pc = 0x165ED0u;
    // 0x165ed0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x165ED0u;
    {
        const bool branch_taken_0x165ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165ed0) {
            ctx->pc = 0x165F00u;
            goto label_165f00;
        }
    }
    ctx->pc = 0x165ED8u;
    // 0x165ed8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x165ED8u;
    SET_GPR_U32(ctx, 31, 0x165EE0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165EE0u; }
        if (ctx->pc != 0x165EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165EE0u; }
        if (ctx->pc != 0x165EE0u) { return; }
    }
    ctx->pc = 0x165EE0u;
    // 0x165ee0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x165ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x165ee4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x165ee4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x165ee8: 0x0  nop
    ctx->pc = 0x165ee8u;
    // NOP
    // 0x165eec: 0x0  nop
    ctx->pc = 0x165eecu;
    // NOP
    // 0x165ef0: 0x2810  mfhi        $a1
    ctx->pc = 0x165ef0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x165ef4: 0xc055124  jal         func_154490
    ctx->pc = 0x165EF4u;
    SET_GPR_U32(ctx, 31, 0x165EFCu);
    ctx->pc = 0x165EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165EF4u;
            // 0x165ef8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165EFCu; }
        if (ctx->pc != 0x165EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165EFCu; }
        if (ctx->pc != 0x165EFCu) { return; }
    }
    ctx->pc = 0x165EFCu;
    // 0x165efc: 0x0  nop
    ctx->pc = 0x165efcu;
    // NOP
label_165f00:
    // 0x165f00: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x165f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x165f04: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x165f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x165f08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x165f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x165f0c: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x165f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x165f10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x165f10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x165f14: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x165F14u;
    {
        const bool branch_taken_0x165f14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x165f14) {
            ctx->pc = 0x165F78u;
            goto label_165f78;
        }
    }
    ctx->pc = 0x165F1Cu;
    // 0x165f1c: 0xc4810114  lwc1        $f1, 0x114($a0)
    ctx->pc = 0x165f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x165f20: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x165f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x165f24: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x165f24u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x165f28: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x165f28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x165f2c: 0x3c023b44  lui         $v0, 0x3B44
    ctx->pc = 0x165f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15172 << 16));
    // 0x165f30: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x165f30u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39846u)));
    // 0x165f34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x165f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x165f38: 0x0  nop
    ctx->pc = 0x165f38u;
    // NOP
    // 0x165f3c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x165f3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x165f40: 0xe4810114  swc1        $f1, 0x114($a0)
    ctx->pc = 0x165f40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 276), bits); }
    // 0x165f44: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x165f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x165f48: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x165f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x165f4c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x165f4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x165f50: 0xe4400110  swc1        $f0, 0x110($v0)
    ctx->pc = 0x165f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x165f54: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x165f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x165f58: 0xc62100d4  lwc1        $f1, 0xD4($s1)
    ctx->pc = 0x165f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x165f5c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x165f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165f60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x165f60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x165f64: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x165f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x165f68: 0xc62000d4  lwc1        $f0, 0xD4($s1)
    ctx->pc = 0x165f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165f6c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x165f6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x165f70: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x165F70u;
    {
        const bool branch_taken_0x165f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165F70u;
            // 0x165f74: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x165f70) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x165F78u;
label_165f78:
    // 0x165f78: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x165f78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
    // 0x165f7c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x165f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x165f80: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x165f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x165f84: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x165f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x165f88: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x165f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x165f8c: 0xc62200d0  lwc1        $f2, 0xD0($s1)
    ctx->pc = 0x165f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x165f90: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x165f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x165f94: 0xc62000d4  lwc1        $f0, 0xD4($s1)
    ctx->pc = 0x165f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165f98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x165f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x165f9c: 0x2465fe0c  addiu       $a1, $v1, -0x1F4
    ctx->pc = 0x165f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966796));
    // 0x165fa0: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x165fa0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x165fa4: 0xc053740  jal         func_14DD00
    ctx->pc = 0x165FA4u;
    SET_GPR_U32(ctx, 31, 0x165FACu);
    ctx->pc = 0x165FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165FA4u;
            // 0x165fa8: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165FACu; }
        if (ctx->pc != 0x165FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165FACu; }
        if (ctx->pc != 0x165FACu) { return; }
    }
    ctx->pc = 0x165FACu;
    // 0x165fac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x165facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x165fb0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x165fb0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x165fb4: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x165fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
    // 0x165fb8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x165fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x165fbc: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x165FBCu;
    {
        const bool branch_taken_0x165fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165FBCu;
            // 0x165fc0: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165fbc) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x165FC4u;
    // 0x165fc4: 0x0  nop
    ctx->pc = 0x165fc4u;
    // NOP
label_165fc8:
    // 0x165fc8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x165fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x165fcc: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x165fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x165fd0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165FD0u;
    {
        const bool branch_taken_0x165fd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x165FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165FD0u;
            // 0x165fd4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165fd0) {
            ctx->pc = 0x165FE0u;
            goto label_165fe0;
        }
    }
    ctx->pc = 0x165FD8u;
    // 0x165fd8: 0xc060718  jal         func_181C60
    ctx->pc = 0x165FD8u;
    SET_GPR_U32(ctx, 31, 0x165FE0u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165FE0u; }
        if (ctx->pc != 0x165FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165FE0u; }
        if (ctx->pc != 0x165FE0u) { return; }
    }
    ctx->pc = 0x165FE0u;
label_165fe0:
    // 0x165fe0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x165fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x165fe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165fe8: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x165FE8u;
    {
        const bool branch_taken_0x165fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x165FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165FE8u;
            // 0x165fec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165fe8) {
            ctx->pc = 0x166020u;
            goto label_166020;
        }
    }
    ctx->pc = 0x165FF0u;
    // 0x165ff0: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x165FF0u;
    SET_GPR_U32(ctx, 31, 0x165FF8u);
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165FF8u; }
        if (ctx->pc != 0x165FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165FF8u; }
        if (ctx->pc != 0x165FF8u) { return; }
    }
    ctx->pc = 0x165FF8u;
    // 0x165ff8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165FF8u;
    {
        const bool branch_taken_0x165ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165FF8u;
            // 0x165ffc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ff8) {
            ctx->pc = 0x166008u;
            goto label_166008;
        }
    }
    ctx->pc = 0x166000u;
    // 0x166000: 0xc055124  jal         func_154490
    ctx->pc = 0x166000u;
    SET_GPR_U32(ctx, 31, 0x166008u);
    ctx->pc = 0x166004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166000u;
            // 0x166004: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166008u; }
        if (ctx->pc != 0x166008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166008u; }
        if (ctx->pc != 0x166008u) { return; }
    }
    ctx->pc = 0x166008u;
label_166008:
    // 0x166008: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x166008u;
    SET_GPR_U32(ctx, 31, 0x166010u);
    ctx->pc = 0x16600Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166008u;
            // 0x16600c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166010u; }
        if (ctx->pc != 0x166010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166010u; }
        if (ctx->pc != 0x166010u) { return; }
    }
    ctx->pc = 0x166010u;
    // 0x166010: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x166010u;
    {
        const bool branch_taken_0x166010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166010u;
            // 0x166014: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166010) {
            ctx->pc = 0x166020u;
            goto label_166020;
        }
    }
    ctx->pc = 0x166018u;
    // 0x166018: 0xc055124  jal         func_154490
    ctx->pc = 0x166018u;
    SET_GPR_U32(ctx, 31, 0x166020u);
    ctx->pc = 0x16601Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166018u;
            // 0x16601c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166020u; }
        if (ctx->pc != 0x166020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166020u; }
        if (ctx->pc != 0x166020u) { return; }
    }
    ctx->pc = 0x166020u;
label_166020:
    // 0x166020: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x166020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x166024: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x166024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x166028: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x166028u;
    {
        const bool branch_taken_0x166028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16602Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166028u;
            // 0x16602c: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166028) {
            ctx->pc = 0x166038u;
            goto label_166038;
        }
    }
    ctx->pc = 0x166030u;
    // 0x166030: 0xc05d110  jal         func_174440
    ctx->pc = 0x166030u;
    SET_GPR_U32(ctx, 31, 0x166038u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166038u; }
        if (ctx->pc != 0x166038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166038u; }
        if (ctx->pc != 0x166038u) { return; }
    }
    ctx->pc = 0x166038u;
label_166038:
    // 0x166038: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x166038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x16603c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x16603cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x166040: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x166040u;
    {
        const bool branch_taken_0x166040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x166044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166040u;
            // 0x166044: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166040) {
            ctx->pc = 0x166050u;
            goto label_166050;
        }
    }
    ctx->pc = 0x166048u;
    // 0x166048: 0xc05d110  jal         func_174440
    ctx->pc = 0x166048u;
    SET_GPR_U32(ctx, 31, 0x166050u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166050u; }
        if (ctx->pc != 0x166050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166050u; }
        if (ctx->pc != 0x166050u) { return; }
    }
    ctx->pc = 0x166050u;
label_166050:
    // 0x166050: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x166050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x166054: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x166054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x166058: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x166058u;
    {
        const bool branch_taken_0x166058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16605Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166058u;
            // 0x16605c: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166058) {
            ctx->pc = 0x166068u;
            goto label_166068;
        }
    }
    ctx->pc = 0x166060u;
    // 0x166060: 0xc05d110  jal         func_174440
    ctx->pc = 0x166060u;
    SET_GPR_U32(ctx, 31, 0x166068u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166068u; }
        if (ctx->pc != 0x166068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166068u; }
        if (ctx->pc != 0x166068u) { return; }
    }
    ctx->pc = 0x166068u;
label_166068:
    // 0x166068: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x166068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x16606c: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x16606cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x166070: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x166070u;
    {
        const bool branch_taken_0x166070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x166074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166070u;
            // 0x166074: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166070) {
            ctx->pc = 0x166080u;
            goto label_166080;
        }
    }
    ctx->pc = 0x166078u;
    // 0x166078: 0xc05d110  jal         func_174440
    ctx->pc = 0x166078u;
    SET_GPR_U32(ctx, 31, 0x166080u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166080u; }
        if (ctx->pc != 0x166080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166080u; }
        if (ctx->pc != 0x166080u) { return; }
    }
    ctx->pc = 0x166080u;
label_166080:
    // 0x166080: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x166080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x166084: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x166084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x166088: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x166088u;
    {
        const bool branch_taken_0x166088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16608Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166088u;
            // 0x16608c: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166088) {
            ctx->pc = 0x166098u;
            goto label_166098;
        }
    }
    ctx->pc = 0x166090u;
    // 0x166090: 0xc05d110  jal         func_174440
    ctx->pc = 0x166090u;
    SET_GPR_U32(ctx, 31, 0x166098u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166098u; }
        if (ctx->pc != 0x166098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166098u; }
        if (ctx->pc != 0x166098u) { return; }
    }
    ctx->pc = 0x166098u;
label_166098:
    // 0x166098: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x166098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x16609c: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x16609cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1660a0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1660A0u;
    {
        const bool branch_taken_0x1660a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1660A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1660A0u;
            // 0x1660a4: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1660a0) {
            ctx->pc = 0x1660B0u;
            goto label_1660b0;
        }
    }
    ctx->pc = 0x1660A8u;
    // 0x1660a8: 0xc05d110  jal         func_174440
    ctx->pc = 0x1660A8u;
    SET_GPR_U32(ctx, 31, 0x1660B0u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1660B0u; }
        if (ctx->pc != 0x1660B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1660B0u; }
        if (ctx->pc != 0x1660B0u) { return; }
    }
    ctx->pc = 0x1660B0u;
label_1660b0:
    // 0x1660b0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1660b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1660b4: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1660b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1660b8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1660B8u;
    {
        const bool branch_taken_0x1660b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1660BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1660B8u;
            // 0x1660bc: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1660b8) {
            ctx->pc = 0x1660C8u;
            goto label_1660c8;
        }
    }
    ctx->pc = 0x1660C0u;
    // 0x1660c0: 0xc05d110  jal         func_174440
    ctx->pc = 0x1660C0u;
    SET_GPR_U32(ctx, 31, 0x1660C8u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1660C8u; }
        if (ctx->pc != 0x1660C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1660C8u; }
        if (ctx->pc != 0x1660C8u) { return; }
    }
    ctx->pc = 0x1660C8u;
label_1660c8:
    // 0x1660c8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1660c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1660cc: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x1660ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1660d0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1660D0u;
    {
        const bool branch_taken_0x1660d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1660D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1660D0u;
            // 0x1660d4: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1660d0) {
            ctx->pc = 0x1660E0u;
            goto label_1660e0;
        }
    }
    ctx->pc = 0x1660D8u;
    // 0x1660d8: 0xc05d110  jal         func_174440
    ctx->pc = 0x1660D8u;
    SET_GPR_U32(ctx, 31, 0x1660E0u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1660E0u; }
        if (ctx->pc != 0x1660E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1660E0u; }
        if (ctx->pc != 0x1660E0u) { return; }
    }
    ctx->pc = 0x1660E0u;
label_1660e0:
    // 0x1660e0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1660e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1660e4: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x1660e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1660e8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1660E8u;
    {
        const bool branch_taken_0x1660e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1660ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1660E8u;
            // 0x1660ec: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1660e8) {
            ctx->pc = 0x1660F8u;
            goto label_1660f8;
        }
    }
    ctx->pc = 0x1660F0u;
    // 0x1660f0: 0xc05d110  jal         func_174440
    ctx->pc = 0x1660F0u;
    SET_GPR_U32(ctx, 31, 0x1660F8u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1660F8u; }
        if (ctx->pc != 0x1660F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1660F8u; }
        if (ctx->pc != 0x1660F8u) { return; }
    }
    ctx->pc = 0x1660F8u;
label_1660f8:
    // 0x1660f8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1660f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1660fc: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x1660fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x166100: 0x14620039  bne         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x166100u;
    {
        const bool branch_taken_0x166100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x166100) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x166108u;
    // 0x166108: 0xc056054  jal         func_158150
    ctx->pc = 0x166108u;
    SET_GPR_U32(ctx, 31, 0x166110u);
    ctx->pc = 0x158150u;
    if (runtime->hasFunction(0x158150u)) {
        auto targetFn = runtime->lookupFunction(0x158150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166110u; }
        if (ctx->pc != 0x166110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RnnyuNo_0x158150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166110u; }
        if (ctx->pc != 0x166110u) { return; }
    }
    ctx->pc = 0x166110u;
    // 0x166110: 0xc05656c  jal         func_1595B0
    ctx->pc = 0x166110u;
    SET_GPR_U32(ctx, 31, 0x166118u);
    ctx->pc = 0x1595B0u;
    if (runtime->hasFunction(0x1595B0u)) {
        auto targetFn = runtime->lookupFunction(0x1595B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166118u; }
        if (ctx->pc != 0x166118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResultStepInit_0x1595b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166118u; }
        if (ctx->pc != 0x166118u) { return; }
    }
    ctx->pc = 0x166118u;
    // 0x166118: 0xc056530  jal         func_1594C0
    ctx->pc = 0x166118u;
    SET_GPR_U32(ctx, 31, 0x166120u);
    ctx->pc = 0x16611Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166118u;
            // 0x16611c: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1594C0u;
    if (runtime->hasFunction(0x1594C0u)) {
        auto targetFn = runtime->lookupFunction(0x1594C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166120u; }
        if (ctx->pc != 0x166120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossResultSet_0x1594c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166120u; }
        if (ctx->pc != 0x166120u) { return; }
    }
    ctx->pc = 0x166120u;
    // 0x166120: 0xc05886c  jal         func_1621B0
    ctx->pc = 0x166120u;
    SET_GPR_U32(ctx, 31, 0x166128u);
    ctx->pc = 0x166124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166120u;
            // 0x166124: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1621B0u;
    if (runtime->hasFunction(0x1621B0u)) {
        auto targetFn = runtime->lookupFunction(0x1621B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166128u; }
        if (ctx->pc != 0x166128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bossStateSet_0x1621b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166128u; }
        if (ctx->pc != 0x166128u) { return; }
    }
    ctx->pc = 0x166128u;
    // 0x166128: 0xc05b984  jal         func_16E610
    ctx->pc = 0x166128u;
    SET_GPR_U32(ctx, 31, 0x166130u);
    ctx->pc = 0x16612Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166128u;
            // 0x16612c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E610u;
    if (runtime->hasFunction(0x16E610u)) {
        auto targetFn = runtime->lookupFunction(0x16E610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166130u; }
        if (ctx->pc != 0x166130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Dead_0x16e610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166130u; }
        if (ctx->pc != 0x166130u) { return; }
    }
    ctx->pc = 0x166130u;
    // 0x166130: 0x10000127  b           . + 4 + (0x127 << 2)
    ctx->pc = 0x166130u;
    {
        const bool branch_taken_0x166130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166130) {
            ctx->pc = 0x1665D0u;
            goto label_1665d0;
        }
    }
    ctx->pc = 0x166138u;
label_166138:
    // 0x166138: 0xc0656b4  jal         func_195AD0
    ctx->pc = 0x166138u;
    SET_GPR_U32(ctx, 31, 0x166140u);
    ctx->pc = 0x195AD0u;
    if (runtime->hasFunction(0x195AD0u)) {
        auto targetFn = runtime->lookupFunction(0x195AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166140u; }
        if (ctx->pc != 0x166140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotBloadCastDead2_0x195ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166140u; }
        if (ctx->pc != 0x166140u) { return; }
    }
    ctx->pc = 0x166140u;
    // 0x166140: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x166140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x166144: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x166144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x166148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16614c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x16614cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166150: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x166150u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x166154: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x166154u;
    {
        const bool branch_taken_0x166154 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x166158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166154u;
            // 0x166158: 0x24620124  addiu       $v0, $v1, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166154) {
            ctx->pc = 0x166180u;
            goto label_166180;
        }
    }
    ctx->pc = 0x16615Cu;
    // 0x16615c: 0xc62100d4  lwc1        $f1, 0xD4($s1)
    ctx->pc = 0x16615cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166160: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x166160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x166164: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x166164u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x166168: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16616c: 0x0  nop
    ctx->pc = 0x16616cu;
    // NOP
    // 0x166170: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x166170u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x166174: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x166174u;
    {
        const bool branch_taken_0x166174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166174u;
            // 0x166178: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x166174) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x16617Cu;
    // 0x16617c: 0x0  nop
    ctx->pc = 0x16617cu;
    // NOP
label_166180:
    // 0x166180: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x166180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x166184: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x166184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x166188: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x166188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
    // 0x16618c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x16618cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x166190: 0xae2000d4  sw          $zero, 0xD4($s1)
    ctx->pc = 0x166190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
    // 0x166194: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x166194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
    // 0x166198: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x166198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x16619c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x16619Cu;
    {
        const bool branch_taken_0x16619c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1661A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16619Cu;
            // 0x1661a0: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16619c) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x1661A4u;
    // 0x1661a4: 0x0  nop
    ctx->pc = 0x1661a4u;
    // NOP
label_1661a8:
    // 0x1661a8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1661a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1661ac: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1661acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1661b0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1661B0u;
    {
        const bool branch_taken_0x1661b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1661b0) {
            ctx->pc = 0x1661E8u;
            goto label_1661e8;
        }
    }
    ctx->pc = 0x1661B8u;
    // 0x1661b8: 0xc056054  jal         func_158150
    ctx->pc = 0x1661B8u;
    SET_GPR_U32(ctx, 31, 0x1661C0u);
    ctx->pc = 0x158150u;
    if (runtime->hasFunction(0x158150u)) {
        auto targetFn = runtime->lookupFunction(0x158150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1661C0u; }
        if (ctx->pc != 0x1661C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RnnyuNo_0x158150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1661C0u; }
        if (ctx->pc != 0x1661C0u) { return; }
    }
    ctx->pc = 0x1661C0u;
    // 0x1661c0: 0xc05656c  jal         func_1595B0
    ctx->pc = 0x1661C0u;
    SET_GPR_U32(ctx, 31, 0x1661C8u);
    ctx->pc = 0x1595B0u;
    if (runtime->hasFunction(0x1595B0u)) {
        auto targetFn = runtime->lookupFunction(0x1595B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1661C8u; }
        if (ctx->pc != 0x1661C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResultStepInit_0x1595b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1661C8u; }
        if (ctx->pc != 0x1661C8u) { return; }
    }
    ctx->pc = 0x1661C8u;
    // 0x1661c8: 0xc056530  jal         func_1594C0
    ctx->pc = 0x1661C8u;
    SET_GPR_U32(ctx, 31, 0x1661D0u);
    ctx->pc = 0x1661CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1661C8u;
            // 0x1661cc: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1594C0u;
    if (runtime->hasFunction(0x1594C0u)) {
        auto targetFn = runtime->lookupFunction(0x1594C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1661D0u; }
        if (ctx->pc != 0x1661D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossResultSet_0x1594c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1661D0u; }
        if (ctx->pc != 0x1661D0u) { return; }
    }
    ctx->pc = 0x1661D0u;
    // 0x1661d0: 0xc05886c  jal         func_1621B0
    ctx->pc = 0x1661D0u;
    SET_GPR_U32(ctx, 31, 0x1661D8u);
    ctx->pc = 0x1661D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1661D0u;
            // 0x1661d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1621B0u;
    if (runtime->hasFunction(0x1621B0u)) {
        auto targetFn = runtime->lookupFunction(0x1621B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1661D8u; }
        if (ctx->pc != 0x1661D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bossStateSet_0x1621b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1661D8u; }
        if (ctx->pc != 0x1661D8u) { return; }
    }
    ctx->pc = 0x1661D8u;
    // 0x1661d8: 0xc05b984  jal         func_16E610
    ctx->pc = 0x1661D8u;
    SET_GPR_U32(ctx, 31, 0x1661E0u);
    ctx->pc = 0x1661DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1661D8u;
            // 0x1661dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E610u;
    if (runtime->hasFunction(0x16E610u)) {
        auto targetFn = runtime->lookupFunction(0x16E610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1661E0u; }
        if (ctx->pc != 0x1661E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Dead_0x16e610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1661E0u; }
        if (ctx->pc != 0x1661E0u) { return; }
    }
    ctx->pc = 0x1661E0u;
    // 0x1661e0: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x1661E0u;
    {
        const bool branch_taken_0x1661e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1661e0) {
            ctx->pc = 0x1665D0u;
            goto label_1665d0;
        }
    }
    ctx->pc = 0x1661E8u;
label_1661e8:
    // 0x1661e8: 0xc05b9ac  jal         func_16E6B0
    ctx->pc = 0x1661E8u;
    SET_GPR_U32(ctx, 31, 0x1661F0u);
    ctx->pc = 0x1661ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1661E8u;
            // 0x1661ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E6B0u;
    if (runtime->hasFunction(0x16E6B0u)) {
        auto targetFn = runtime->lookupFunction(0x16E6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1661F0u; }
        if (ctx->pc != 0x1661F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Vector_0x16e6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1661F0u; }
        if (ctx->pc != 0x1661F0u) { return; }
    }
    ctx->pc = 0x1661F0u;
    // 0x1661f0: 0xc05b9a0  jal         func_16E680
    ctx->pc = 0x1661F0u;
    SET_GPR_U32(ctx, 31, 0x1661F8u);
    ctx->pc = 0x1661F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1661F0u;
            // 0x1661f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E680u;
    if (runtime->hasFunction(0x16E680u)) {
        auto targetFn = runtime->lookupFunction(0x16E680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1661F8u; }
        if (ctx->pc != 0x1661F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_State_0x16e680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1661F8u; }
        if (ctx->pc != 0x1661F8u) { return; }
    }
    ctx->pc = 0x1661F8u;
    // 0x1661f8: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x1661F8u;
    SET_GPR_U32(ctx, 31, 0x166200u);
    ctx->pc = 0x1661FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1661F8u;
            // 0x1661fc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166200u; }
        if (ctx->pc != 0x166200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166200u; }
        if (ctx->pc != 0x166200u) { return; }
    }
    ctx->pc = 0x166200u;
    // 0x166200: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x166200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x166204: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x166204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x166208: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x166208u;
    SET_GPR_U32(ctx, 31, 0x166210u);
    ctx->pc = 0x16620Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166208u;
            // 0x16620c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166210u; }
        if (ctx->pc != 0x166210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166210u; }
        if (ctx->pc != 0x166210u) { return; }
    }
    ctx->pc = 0x166210u;
    // 0x166210: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x166210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x166214: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x166214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x166218: 0xc04b804  jal         func_12E010
    ctx->pc = 0x166218u;
    SET_GPR_U32(ctx, 31, 0x166220u);
    ctx->pc = 0x16621Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166218u;
            // 0x16621c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166220u; }
        if (ctx->pc != 0x166220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166220u; }
        if (ctx->pc != 0x166220u) { return; }
    }
    ctx->pc = 0x166220u;
    // 0x166220: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x166220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x166224: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x166224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x166228: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x166228u;
    SET_GPR_U32(ctx, 31, 0x166230u);
    ctx->pc = 0x16622Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166228u;
            // 0x16622c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166230u; }
        if (ctx->pc != 0x166230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166230u; }
        if (ctx->pc != 0x166230u) { return; }
    }
    ctx->pc = 0x166230u;
    // 0x166230: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x166230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x166234: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x166234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166238: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x166238u;
    SET_GPR_U32(ctx, 31, 0x166240u);
    ctx->pc = 0x16623Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166238u;
            // 0x16623c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166240u; }
        if (ctx->pc != 0x166240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166240u; }
        if (ctx->pc != 0x166240u) { return; }
    }
    ctx->pc = 0x166240u;
    // 0x166240: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x166240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x166244: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x166244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x166248: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x166248u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16624c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x16624Cu;
    {
        const bool branch_taken_0x16624c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16624c) {
            ctx->pc = 0x1662A0u;
            goto label_1662a0;
        }
    }
    ctx->pc = 0x166254u;
    // 0x166254: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x166254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x166258: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x166258u;
    {
        const bool branch_taken_0x166258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166258) {
            ctx->pc = 0x166270u;
            goto label_166270;
        }
    }
    ctx->pc = 0x166260u;
    // 0x166260: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x166260u;
    SET_GPR_U32(ctx, 31, 0x166268u);
    ctx->pc = 0x166264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166260u;
            // 0x166264: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166268u; }
        if (ctx->pc != 0x166268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166268u; }
        if (ctx->pc != 0x166268u) { return; }
    }
    ctx->pc = 0x166268u;
    // 0x166268: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x166268u;
    {
        const bool branch_taken_0x166268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166268) {
            ctx->pc = 0x166278u;
            goto label_166278;
        }
    }
    ctx->pc = 0x166270u;
label_166270:
    // 0x166270: 0xc0604dc  jal         func_181370
    ctx->pc = 0x166270u;
    SET_GPR_U32(ctx, 31, 0x166278u);
    ctx->pc = 0x166274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166270u;
            // 0x166274: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166278u; }
        if (ctx->pc != 0x166278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166278u; }
        if (ctx->pc != 0x166278u) { return; }
    }
    ctx->pc = 0x166278u;
label_166278:
    // 0x166278: 0x8e23010c  lw          $v1, 0x10C($s1)
    ctx->pc = 0x166278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x16627c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16627Cu;
    {
        const bool branch_taken_0x16627c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16627c) {
            ctx->pc = 0x166290u;
            goto label_166290;
        }
    }
    ctx->pc = 0x166284u;
    // 0x166284: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x166284u;
    {
        const bool branch_taken_0x166284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166284u;
            // 0x166288: 0xae20010c  sw          $zero, 0x10C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166284) {
            ctx->pc = 0x1662F0u;
            goto label_1662f0;
        }
    }
    ctx->pc = 0x16628Cu;
    // 0x16628c: 0x0  nop
    ctx->pc = 0x16628cu;
    // NOP
label_166290:
    // 0x166290: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x166290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166294: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x166294u;
    {
        const bool branch_taken_0x166294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166294u;
            // 0x166298: 0xae23010c  sw          $v1, 0x10C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166294) {
            ctx->pc = 0x1662F0u;
            goto label_1662f0;
        }
    }
    ctx->pc = 0x16629Cu;
    // 0x16629c: 0x0  nop
    ctx->pc = 0x16629cu;
    // NOP
label_1662a0:
    // 0x1662a0: 0x286102bc  slti        $at, $v1, 0x2BC
    ctx->pc = 0x1662a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)700) ? 1 : 0);
    // 0x1662a4: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1662A4u;
    {
        const bool branch_taken_0x1662a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1662a4) {
            ctx->pc = 0x1662E0u;
            goto label_1662e0;
        }
    }
    ctx->pc = 0x1662ACu;
    // 0x1662ac: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1662acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1662b0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1662b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1662b4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1662b4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1662b8: 0x0  nop
    ctx->pc = 0x1662b8u;
    // NOP
    // 0x1662bc: 0x0  nop
    ctx->pc = 0x1662bcu;
    // NOP
    // 0x1662c0: 0x1010  mfhi        $v0
    ctx->pc = 0x1662c0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1662c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1662C4u;
    {
        const bool branch_taken_0x1662c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1662c4) {
            ctx->pc = 0x1662E0u;
            goto label_1662e0;
        }
    }
    ctx->pc = 0x1662CCu;
    // 0x1662cc: 0xc060500  jal         func_181400
    ctx->pc = 0x1662CCu;
    SET_GPR_U32(ctx, 31, 0x1662D4u);
    ctx->pc = 0x1662D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1662CCu;
            // 0x1662d0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181400u;
    if (runtime->hasFunction(0x181400u)) {
        auto targetFn = runtime->lookupFunction(0x181400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1662D4u; }
        if (ctx->pc != 0x1662D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRedColor_0x181400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1662D4u; }
        if (ctx->pc != 0x1662D4u) { return; }
    }
    ctx->pc = 0x1662D4u;
    // 0x1662d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1662D4u;
    {
        const bool branch_taken_0x1662d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1662d4) {
            ctx->pc = 0x1662E8u;
            goto label_1662e8;
        }
    }
    ctx->pc = 0x1662DCu;
    // 0x1662dc: 0x0  nop
    ctx->pc = 0x1662dcu;
    // NOP
label_1662e0:
    // 0x1662e0: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1662E0u;
    SET_GPR_U32(ctx, 31, 0x1662E8u);
    ctx->pc = 0x1662E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1662E0u;
            // 0x1662e4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1662E8u; }
        if (ctx->pc != 0x1662E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1662E8u; }
        if (ctx->pc != 0x1662E8u) { return; }
    }
    ctx->pc = 0x1662E8u;
label_1662e8:
    // 0x1662e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1662e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1662ec: 0xae23010c  sw          $v1, 0x10C($s1)
    ctx->pc = 0x1662ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 3));
label_1662f0:
    // 0x1662f0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1662f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1662f4: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1662f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1662f8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1662f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1662fc: 0x1c80000c  bgtz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1662FCu;
    {
        const bool branch_taken_0x1662fc = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x1662fc) {
            ctx->pc = 0x166330u;
            goto label_166330;
        }
    }
    ctx->pc = 0x166304u;
    // 0x166304: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x166304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x166308: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x166308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x16630c: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x16630cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x166310: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x166310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x166314: 0xae220120  sw          $v0, 0x120($s1)
    ctx->pc = 0x166314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
    // 0x166318: 0x8e250120  lw          $a1, 0x120($s1)
    ctx->pc = 0x166318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x16631c: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x16631Cu;
    SET_GPR_U32(ctx, 31, 0x166324u);
    ctx->pc = 0x166320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16631Cu;
            // 0x166320: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166324u; }
        if (ctx->pc != 0x166324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166324u; }
        if (ctx->pc != 0x166324u) { return; }
    }
    ctx->pc = 0x166324u;
    // 0x166324: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x166324u;
    {
        const bool branch_taken_0x166324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166324) {
            ctx->pc = 0x1665C0u;
            goto label_1665c0;
        }
    }
    ctx->pc = 0x16632Cu;
    // 0x16632c: 0x0  nop
    ctx->pc = 0x16632cu;
    // NOP
label_166330:
    // 0x166330: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x166330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x166334: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x166334u;
    {
        const bool branch_taken_0x166334 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x166338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166334u;
            // 0x166338: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166334) {
            ctx->pc = 0x166350u;
            goto label_166350;
        }
    }
    ctx->pc = 0x16633Cu;
    // 0x16633c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16633Cu;
    {
        const bool branch_taken_0x16633c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16633c) {
            ctx->pc = 0x166350u;
            goto label_166350;
        }
    }
    ctx->pc = 0x166344u;
    // 0x166344: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x166344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x166348: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x166348u;
    {
        const bool branch_taken_0x166348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16634Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166348u;
            // 0x16634c: 0xae230028  sw          $v1, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166348) {
            ctx->pc = 0x1665C0u;
            goto label_1665c0;
        }
    }
    ctx->pc = 0x166350u;
label_166350:
    // 0x166350: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x166350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x166354: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x166354u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x166358: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x166358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16635c: 0x2625002c  addiu       $a1, $s1, 0x2C
    ctx->pc = 0x16635cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x166360: 0x24c61b70  addiu       $a2, $a2, 0x1B70
    ctx->pc = 0x166360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7024));
    // 0x166364: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x166364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166368: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x166368u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16636c: 0x2442ffee  addiu       $v0, $v0, -0x12
    ctx->pc = 0x16636cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967278));
    // 0x166370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166374: 0x0  nop
    ctx->pc = 0x166374u;
    // NOP
    // 0x166378: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x166378u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16637c: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x16637cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x166380: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x166380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166384: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x166384u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x166388: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x166388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x16638c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x16638cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x166390: 0x24420012  addiu       $v0, $v0, 0x12
    ctx->pc = 0x166390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18));
    // 0x166394: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166398: 0x0  nop
    ctx->pc = 0x166398u;
    // NOP
    // 0x16639c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16639cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1663a0: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x1663a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x1663a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1663a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1663a8: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x1663a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1663ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1663acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1663b0: 0x0  nop
    ctx->pc = 0x1663b0u;
    // NOP
    // 0x1663b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1663b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1663b8: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1663B8u;
    SET_GPR_U32(ctx, 31, 0x1663C0u);
    ctx->pc = 0x1663BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1663B8u;
            // 0x1663bc: 0xe6200038  swc1        $f0, 0x38($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1663C0u; }
        if (ctx->pc != 0x1663C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1663C0u; }
        if (ctx->pc != 0x1663C0u) { return; }
    }
    ctx->pc = 0x1663C0u;
    // 0x1663c0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1663c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1663c4: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x1663c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x1663c8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1663c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1663cc: 0x2625003c  addiu       $a1, $s1, 0x3C
    ctx->pc = 0x1663ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x1663d0: 0x24c61b70  addiu       $a2, $a2, 0x1B70
    ctx->pc = 0x1663d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7024));
    // 0x1663d4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1663d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1663d8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1663d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1663dc: 0x2442ffc6  addiu       $v0, $v0, -0x3A
    ctx->pc = 0x1663dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967238));
    // 0x1663e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1663e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1663e4: 0x0  nop
    ctx->pc = 0x1663e4u;
    // NOP
    // 0x1663e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1663e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1663ec: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x1663ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x1663f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1663f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1663f4: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1663f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1663f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1663f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1663fc: 0x0  nop
    ctx->pc = 0x1663fcu;
    // NOP
    // 0x166400: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x166400u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x166404: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x166404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x166408: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x166408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x16640c: 0x2442ffee  addiu       $v0, $v0, -0x12
    ctx->pc = 0x16640cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967278));
    // 0x166410: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166414: 0x0  nop
    ctx->pc = 0x166414u;
    // NOP
    // 0x166418: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x166418u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16641c: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x16641cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x166420: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x166420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x166424: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x166424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x166428: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16642c: 0x0  nop
    ctx->pc = 0x16642cu;
    // NOP
    // 0x166430: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x166430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x166434: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x166434u;
    SET_GPR_U32(ctx, 31, 0x16643Cu);
    ctx->pc = 0x166438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166434u;
            // 0x166438: 0xe6200048  swc1        $f0, 0x48($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16643Cu; }
        if (ctx->pc != 0x16643Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16643Cu; }
        if (ctx->pc != 0x16643Cu) { return; }
    }
    ctx->pc = 0x16643Cu;
    // 0x16643c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x16643cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x166440: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x166440u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x166444: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x166444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x166448: 0x2625004c  addiu       $a1, $s1, 0x4C
    ctx->pc = 0x166448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x16644c: 0x24c61b70  addiu       $a2, $a2, 0x1B70
    ctx->pc = 0x16644cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7024));
    // 0x166450: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x166450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166454: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x166454u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166458: 0x24420012  addiu       $v0, $v0, 0x12
    ctx->pc = 0x166458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18));
    // 0x16645c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16645cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166460: 0x0  nop
    ctx->pc = 0x166460u;
    // NOP
    // 0x166464: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x166464u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x166468: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x166468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x16646c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x16646cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x166470: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x166470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x166474: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166478: 0x0  nop
    ctx->pc = 0x166478u;
    // NOP
    // 0x16647c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16647cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x166480: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x166480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x166484: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x166484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x166488: 0x2442003a  addiu       $v0, $v0, 0x3A
    ctx->pc = 0x166488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 58));
    // 0x16648c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16648cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166490: 0x0  nop
    ctx->pc = 0x166490u;
    // NOP
    // 0x166494: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x166494u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x166498: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x166498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x16649c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x16649cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1664a0: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1664a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1664a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1664a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1664a8: 0x0  nop
    ctx->pc = 0x1664a8u;
    // NOP
    // 0x1664ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1664acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1664b0: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1664B0u;
    SET_GPR_U32(ctx, 31, 0x1664B8u);
    ctx->pc = 0x1664B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1664B0u;
            // 0x1664b4: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1664B8u; }
        if (ctx->pc != 0x1664B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1664B8u; }
        if (ctx->pc != 0x1664B8u) { return; }
    }
    ctx->pc = 0x1664B8u;
    // 0x1664b8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1664b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1664bc: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x1664bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x1664c0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1664c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1664c4: 0x2625005c  addiu       $a1, $s1, 0x5C
    ctx->pc = 0x1664c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    // 0x1664c8: 0x24c61b70  addiu       $a2, $a2, 0x1B70
    ctx->pc = 0x1664c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7024));
    // 0x1664cc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1664ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1664d0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1664d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1664d4: 0x2442ff4e  addiu       $v0, $v0, -0xB2
    ctx->pc = 0x1664d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967118));
    // 0x1664d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1664d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1664dc: 0x0  nop
    ctx->pc = 0x1664dcu;
    // NOP
    // 0x1664e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1664e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1664e4: 0xe620005c  swc1        $f0, 0x5C($s1)
    ctx->pc = 0x1664e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x1664e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1664e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1664ec: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1664ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1664f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1664f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1664f4: 0x0  nop
    ctx->pc = 0x1664f4u;
    // NOP
    // 0x1664f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1664f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1664fc: 0xe6200060  swc1        $f0, 0x60($s1)
    ctx->pc = 0x1664fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x166500: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x166500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x166504: 0x2442ffc6  addiu       $v0, $v0, -0x3A
    ctx->pc = 0x166504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967238));
    // 0x166508: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16650c: 0x0  nop
    ctx->pc = 0x16650cu;
    // NOP
    // 0x166510: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x166510u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x166514: 0xe6200064  swc1        $f0, 0x64($s1)
    ctx->pc = 0x166514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x166518: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x166518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16651c: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x16651cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x166520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166524: 0x0  nop
    ctx->pc = 0x166524u;
    // NOP
    // 0x166528: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x166528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16652c: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x16652Cu;
    SET_GPR_U32(ctx, 31, 0x166534u);
    ctx->pc = 0x166530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16652Cu;
            // 0x166530: 0xe6200068  swc1        $f0, 0x68($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166534u; }
        if (ctx->pc != 0x166534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166534u; }
        if (ctx->pc != 0x166534u) { return; }
    }
    ctx->pc = 0x166534u;
    // 0x166534: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x166534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x166538: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x166538u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x16653c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16653cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x166540: 0x2625006c  addiu       $a1, $s1, 0x6C
    ctx->pc = 0x166540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
    // 0x166544: 0x24c61b70  addiu       $a2, $a2, 0x1B70
    ctx->pc = 0x166544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7024));
    // 0x166548: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x166548u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16654c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x16654cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166550: 0x2442003a  addiu       $v0, $v0, 0x3A
    ctx->pc = 0x166550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 58));
    // 0x166554: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166558: 0x0  nop
    ctx->pc = 0x166558u;
    // NOP
    // 0x16655c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16655cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x166560: 0xe620006c  swc1        $f0, 0x6C($s1)
    ctx->pc = 0x166560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x166564: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x166564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x166568: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x166568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x16656c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16656cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166570: 0x0  nop
    ctx->pc = 0x166570u;
    // NOP
    // 0x166574: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x166574u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x166578: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x166578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x16657c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x16657cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x166580: 0x244200b2  addiu       $v0, $v0, 0xB2
    ctx->pc = 0x166580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 178));
    // 0x166584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166588: 0x0  nop
    ctx->pc = 0x166588u;
    // NOP
    // 0x16658c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16658cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x166590: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x166590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x166594: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x166594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x166598: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x166598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x16659c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16659cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1665a0: 0x0  nop
    ctx->pc = 0x1665a0u;
    // NOP
    // 0x1665a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1665a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1665a8: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1665A8u;
    SET_GPR_U32(ctx, 31, 0x1665B0u);
    ctx->pc = 0x1665ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1665A8u;
            // 0x1665ac: 0xe6200078  swc1        $f0, 0x78($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1665B0u; }
        if (ctx->pc != 0x1665B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1665B0u; }
        if (ctx->pc != 0x1665B0u) { return; }
    }
    ctx->pc = 0x1665B0u;
    // 0x1665b0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1665b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1665b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1665b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1665b8: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x1665b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x1665bc: 0x0  nop
    ctx->pc = 0x1665bcu;
    // NOP
label_1665c0:
    // 0x1665c0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1665c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1665c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1665c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1665c8: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x1665c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x1665cc: 0x0  nop
    ctx->pc = 0x1665ccu;
    // NOP
label_1665d0:
    // 0x1665d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1665d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1665d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1665d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1665d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1665d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1665dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1665DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1665E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1665DCu;
            // 0x1665e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163E20u: goto label_163e20;
            case 0x163E58u: goto label_163e58;
            case 0x163E90u: goto label_163e90;
            case 0x163EC8u: goto label_163ec8;
            case 0x163F28u: goto label_163f28;
            case 0x163F60u: goto label_163f60;
            case 0x163FB0u: goto label_163fb0;
            case 0x164020u: goto label_164020;
            case 0x164090u: goto label_164090;
            case 0x1640B8u: goto label_1640b8;
            case 0x164108u: goto label_164108;
            case 0x164140u: goto label_164140;
            case 0x1641F0u: goto label_1641f0;
            case 0x164310u: goto label_164310;
            case 0x164438u: goto label_164438;
            case 0x1644D8u: goto label_1644d8;
            case 0x164528u: goto label_164528;
            case 0x164560u: goto label_164560;
            case 0x164598u: goto label_164598;
            case 0x164638u: goto label_164638;
            case 0x164758u: goto label_164758;
            case 0x1648E8u: goto label_1648e8;
            case 0x164A80u: goto label_164a80;
            case 0x164B90u: goto label_164b90;
            case 0x164BE0u: goto label_164be0;
            case 0x164C18u: goto label_164c18;
            case 0x164C78u: goto label_164c78;
            case 0x164D28u: goto label_164d28;
            case 0x164DD8u: goto label_164dd8;
            case 0x164EF8u: goto label_164ef8;
            case 0x165018u: goto label_165018;
            case 0x1651A8u: goto label_1651a8;
            case 0x165248u: goto label_165248;
            case 0x1653D8u: goto label_1653d8;
            case 0x1656B0u: goto label_1656b0;
            case 0x1656D8u: goto label_1656d8;
            case 0x165718u: goto label_165718;
            case 0x165768u: goto label_165768;
            case 0x165838u: goto label_165838;
            case 0x165918u: goto label_165918;
            case 0x1659B8u: goto label_1659b8;
            case 0x165A98u: goto label_165a98;
            case 0x165B98u: goto label_165b98;
            case 0x165CD8u: goto label_165cd8;
            case 0x165E48u: goto label_165e48;
            case 0x165E90u: goto label_165e90;
            case 0x165EC8u: goto label_165ec8;
            case 0x165F00u: goto label_165f00;
            case 0x165F78u: goto label_165f78;
            case 0x165FC8u: goto label_165fc8;
            case 0x165FE0u: goto label_165fe0;
            case 0x166008u: goto label_166008;
            case 0x166020u: goto label_166020;
            case 0x166038u: goto label_166038;
            case 0x166050u: goto label_166050;
            case 0x166068u: goto label_166068;
            case 0x166080u: goto label_166080;
            case 0x166098u: goto label_166098;
            case 0x1660B0u: goto label_1660b0;
            case 0x1660C8u: goto label_1660c8;
            case 0x1660E0u: goto label_1660e0;
            case 0x1660F8u: goto label_1660f8;
            case 0x166138u: goto label_166138;
            case 0x166180u: goto label_166180;
            case 0x1661A8u: goto label_1661a8;
            case 0x1661E8u: goto label_1661e8;
            case 0x166270u: goto label_166270;
            case 0x166278u: goto label_166278;
            case 0x166290u: goto label_166290;
            case 0x1662A0u: goto label_1662a0;
            case 0x1662E0u: goto label_1662e0;
            case 0x1662E8u: goto label_1662e8;
            case 0x1662F0u: goto label_1662f0;
            case 0x166330u: goto label_166330;
            case 0x166350u: goto label_166350;
            case 0x1665C0u: goto label_1665c0;
            case 0x1665D0u: goto label_1665d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1665E4u;
}
