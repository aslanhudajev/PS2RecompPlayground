#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ShotRenderFunction
// Address: 0x14fd20 - 0x151aa8
void ShotRenderFunction_0x14fd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ShotRenderFunction_0x14fd20");
#endif

    ctx->pc = 0x14fd20u;

    // 0x14fd20: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x14fd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x14fd24: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x14fd24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x14fd28: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x14fd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x14fd2c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x14fd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x14fd30: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14fd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14fd34: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14fd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14fd38: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14fd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14fd3c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14fd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14fd40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14fd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14fd44: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14fd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14fd48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14fd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14fd4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x14fd4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14fd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14fd54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14fd54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd58: 0x8c342160  lw          $s4, 0x2160($at)
    ctx->pc = 0x14fd58u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8544)));
    // 0x14fd5c: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x14fd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x14fd60: 0x128006d1  beqz        $s4, . + 4 + (0x6D1 << 2)
    ctx->pc = 0x14FD60u;
    {
        const bool branch_taken_0x14fd60 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FD60u;
            // 0x14fd64: 0xafa00140  sw          $zero, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd60) {
            ctx->pc = 0x1518A8u;
            goto label_1518a8;
        }
    }
    ctx->pc = 0x14FD68u;
    // 0x14fd68: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x14fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x14fd6c: 0x2442c160  addiu       $v0, $v0, -0x3EA0
    ctx->pc = 0x14fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951264));
    // 0x14fd70: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x14fd70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x14fd74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14fd78: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x14fd78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x14fd7c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x14fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x14fd80: 0x8fbe0120  lw          $fp, 0x120($sp)
    ctx->pc = 0x14fd80u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x14fd84: 0x2442c160  addiu       $v0, $v0, -0x3EA0
    ctx->pc = 0x14fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951264));
    // 0x14fd88: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x14fd88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x14fd8c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x14fd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x14fd90: 0x2442a160  addiu       $v0, $v0, -0x5EA0
    ctx->pc = 0x14fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943072));
    // 0x14fd94: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x14fd94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x14fd98: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x14fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x14fd9c: 0x24420160  addiu       $v0, $v0, 0x160
    ctx->pc = 0x14fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x14fda0: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x14fda0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x14fda4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x14fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x14fda8: 0x24420160  addiu       $v0, $v0, 0x160
    ctx->pc = 0x14fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x14fdac: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x14fdacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x14fdb0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x14fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x14fdb4: 0x2442e160  addiu       $v0, $v0, -0x1EA0
    ctx->pc = 0x14fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x14fdb8: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x14fdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x14fdbc: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x14fdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x14fdc0: 0x2442e160  addiu       $v0, $v0, -0x1EA0
    ctx->pc = 0x14fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x14fdc4: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x14fdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x14fdc8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x14fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x14fdcc: 0x2442e160  addiu       $v0, $v0, -0x1EA0
    ctx->pc = 0x14fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x14fdd0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x14fdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x14fdd4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x14fdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x14fdd8: 0x2442c160  addiu       $v0, $v0, -0x3EA0
    ctx->pc = 0x14fdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951264));
    // 0x14fddc: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x14fddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_14fde0:
    // 0x14fde0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x14fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x14fde4: 0x2c41000f  sltiu       $at, $v0, 0xF
    ctx->pc = 0x14fde4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x14fde8: 0x102006ab  beqz        $at, . + 4 + (0x6AB << 2)
    ctx->pc = 0x14FDE8u;
    {
        const bool branch_taken_0x14fde8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FDE8u;
            // 0x14fdec: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fde8) {
            ctx->pc = 0x151898u;
            goto label_151898;
        }
    }
    ctx->pc = 0x14FDF0u;
    // 0x14fdf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14fdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14fdf4: 0x24630bc0  addiu       $v1, $v1, 0xBC0
    ctx->pc = 0x14fdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3008));
    // 0x14fdf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14fdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14fdfc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14fe00: 0x400008  jr          $v0
    ctx->pc = 0x14FE00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14FE08u: goto label_14fe08;
            case 0x14FFD8u: goto label_14ffd8;
            case 0x150258u: goto label_150258;
            case 0x1503A8u: goto label_1503a8;
            case 0x1509E8u: goto label_1509e8;
            case 0x150BB8u: goto label_150bb8;
            case 0x150E38u: goto label_150e38;
            case 0x151198u: goto label_151198;
            case 0x1512F8u: goto label_1512f8;
            case 0x1514F8u: goto label_1514f8;
            case 0x151640u: goto label_151640;
            case 0x151898u: goto label_151898;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14FE08u;
label_14fe08:
    // 0x14fe08: 0xc04e072  jal         func_1381C8
    ctx->pc = 0x14FE08u;
    SET_GPR_U32(ctx, 31, 0x14FE10u);
    ctx->pc = 0x14FE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FE08u;
            // 0x14fe0c: 0x8e840018  lw          $a0, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1381C8u;
    if (runtime->hasFunction(0x1381C8u)) {
        auto targetFn = runtime->lookupFunction(0x1381C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FE10u; }
        if (ctx->pc != 0x14FE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        abs_0x1381c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FE10u; }
        if (ctx->pc != 0x14FE10u) { return; }
    }
    ctx->pc = 0x14FE10u;
    // 0x14fe10: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x14fe10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x14fe14: 0xc05c00c  jal         func_170030
    ctx->pc = 0x14FE14u;
    SET_GPR_U32(ctx, 31, 0x14FE1Cu);
    ctx->pc = 0x14FE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FE14u;
            // 0x14fe18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FE1Cu; }
        if (ctx->pc != 0x14FE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FE1Cu; }
        if (ctx->pc != 0x14FE1Cu) { return; }
    }
    ctx->pc = 0x14FE1Cu;
    // 0x14fe1c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x14fe1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fe20: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x14fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x14fe24: 0x4400026  bltz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x14FE24u;
    {
        const bool branch_taken_0x14fe24 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14FE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FE24u;
            // 0x14fe28: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fe24) {
            ctx->pc = 0x14FEC0u;
            goto label_14fec0;
        }
    }
    ctx->pc = 0x14FE2Cu;
    // 0x14fe2c: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x14fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x14fe30: 0xc42099a8  lwc1        $f0, -0x6658($at)
    ctx->pc = 0x14fe30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fe34: 0x128140  sll         $s0, $s2, 5
    ctx->pc = 0x14fe34u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x14fe38: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x14fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x14fe3c: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x14fe3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x14fe40: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x14fe40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14fe44: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x14fe44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14fe48: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x14fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x14fe4c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x14fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14fe50: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14fe50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14fe54: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x14fe54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x14fe58: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x14fe58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x14fe5c: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x14FE5Cu;
    SET_GPR_U32(ctx, 31, 0x14FE64u);
    ctx->pc = 0x14FE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FE5Cu;
            // 0x14fe60: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FE64u; }
        if (ctx->pc != 0x14FE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FE64u; }
        if (ctx->pc != 0x14FE64u) { return; }
    }
    ctx->pc = 0x14FE64u;
    // 0x14fe64: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14fe64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14fe68: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x14fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x14fe6c: 0xc42099a8  lwc1        $f0, -0x6658($at)
    ctx->pc = 0x14fe6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fe70: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x14fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14fe74: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x14fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x14fe78: 0x3a900  sll         $s5, $v1, 4
    ctx->pc = 0x14fe78u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14fe7c: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x14fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x14fe80: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x14fe80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x14fe84: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x14fe84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14fe88: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x14fe88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x14fe8c: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x14fe8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x14fe90: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x14fe90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x14fe94: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x14fe94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14fe98: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14fe98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14fe9c: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x14fe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x14fea0: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x14fea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x14fea4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x14fea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x14fea8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x14fea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14feac: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x14feacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x14feb0: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x14FEB0u;
    SET_GPR_U32(ctx, 31, 0x14FEB8u);
    ctx->pc = 0x14FEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FEB0u;
            // 0x14feb4: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FEB8u; }
        if (ctx->pc != 0x14FEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FEB8u; }
        if (ctx->pc != 0x14FEB8u) { return; }
    }
    ctx->pc = 0x14FEB8u;
    // 0x14feb8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x14FEB8u;
    {
        const bool branch_taken_0x14feb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14feb8) {
            ctx->pc = 0x14FF50u;
            goto label_14ff50;
        }
    }
    ctx->pc = 0x14FEC0u;
label_14fec0:
    // 0x14fec0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14fec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14fec4: 0xc42099a8  lwc1        $f0, -0x6658($at)
    ctx->pc = 0x14fec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fec8: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x14fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x14fecc: 0x128140  sll         $s0, $s2, 5
    ctx->pc = 0x14feccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x14fed0: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x14fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x14fed4: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x14fed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14fed8: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x14fed8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x14fedc: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x14fedcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14fee0: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x14fee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x14fee4: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x14fee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x14fee8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14fee8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14feec: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x14feecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14fef0: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x14fef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x14fef4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x14fef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x14fef8: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x14fef8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x14fefc: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x14FEFCu;
    SET_GPR_U32(ctx, 31, 0x14FF04u);
    ctx->pc = 0x14FF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FEFCu;
            // 0x14ff00: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FF04u; }
        if (ctx->pc != 0x14FF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FF04u; }
        if (ctx->pc != 0x14FF04u) { return; }
    }
    ctx->pc = 0x14FF04u;
    // 0x14ff04: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14ff04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14ff08: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x14ff08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x14ff0c: 0xc42099a8  lwc1        $f0, -0x6658($at)
    ctx->pc = 0x14ff0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ff10: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x14ff10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14ff14: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x14ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x14ff18: 0x3a900  sll         $s5, $v1, 4
    ctx->pc = 0x14ff18u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14ff1c: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x14ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x14ff20: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x14ff20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x14ff24: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x14ff24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14ff28: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x14ff28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x14ff2c: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x14ff2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x14ff30: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x14ff30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14ff34: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14ff34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14ff38: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x14ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x14ff3c: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x14ff3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x14ff40: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x14ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14ff44: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x14ff44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x14ff48: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x14FF48u;
    SET_GPR_U32(ctx, 31, 0x14FF50u);
    ctx->pc = 0x14FF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FF48u;
            // 0x14ff4c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FF50u; }
        if (ctx->pc != 0x14FF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FF50u; }
        if (ctx->pc != 0x14FF50u) { return; }
    }
    ctx->pc = 0x14FF50u;
label_14ff50:
    // 0x14ff50: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x14ff50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x14ff54: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x14ff54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x14ff58: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x14ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x14ff5c: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x14ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x14ff60: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x14FF60u;
    SET_GPR_U32(ctx, 31, 0x14FF68u);
    ctx->pc = 0x14FF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FF60u;
            // 0x14ff64: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FF68u; }
        if (ctx->pc != 0x14FF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FF68u; }
        if (ctx->pc != 0x14FF68u) { return; }
    }
    ctx->pc = 0x14FF68u;
    // 0x14ff68: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x14ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x14ff6c: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x14ff6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x14ff70: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x14ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x14ff74: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x14ff74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x14ff78: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x14ff78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x14ff7c: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x14ff7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x14ff80: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x14ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x14ff84: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x14ff84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x14ff88: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x14FF88u;
    SET_GPR_U32(ctx, 31, 0x14FF90u);
    ctx->pc = 0x14FF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FF88u;
            // 0x14ff8c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FF90u; }
        if (ctx->pc != 0x14FF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FF90u; }
        if (ctx->pc != 0x14FF90u) { return; }
    }
    ctx->pc = 0x14FF90u;
    // 0x14ff90: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x14ff90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14ff94: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x14ff94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x14ff98: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14ff98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14ff9c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x14ff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x14ffa0: 0x24420160  addiu       $v0, $v0, 0x160
    ctx->pc = 0x14ffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x14ffa4: 0x24a598c0  addiu       $a1, $a1, -0x6740
    ctx->pc = 0x14ffa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940864));
    // 0x14ffa8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x14ffa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14ffac: 0x8cc20078  lw          $v0, 0x78($a2)
    ctx->pc = 0x14ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x14ffb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14ffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14ffb4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x14ffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14ffb8: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x14ffb8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ffbc: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x14ffbcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x14ffc0: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x14ffc0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x14ffc4: 0xc0546b4  jal         func_151AD0
    ctx->pc = 0x14FFC4u;
    SET_GPR_U32(ctx, 31, 0x14FFCCu);
    ctx->pc = 0x14FFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FFC4u;
            // 0x14ffc8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AD0u;
    if (runtime->hasFunction(0x151AD0u)) {
        auto targetFn = runtime->lookupFunction(0x151AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FFCCu; }
        if (ctx->pc != 0x14FFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x151ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FFCCu; }
        if (ctx->pc != 0x14FFCCu) { return; }
    }
    ctx->pc = 0x14FFCCu;
    // 0x14ffcc: 0x10000632  b           . + 4 + (0x632 << 2)
    ctx->pc = 0x14FFCCu;
    {
        const bool branch_taken_0x14ffcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FFCCu;
            // 0x14ffd0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ffcc) {
            ctx->pc = 0x151898u;
            goto label_151898;
        }
    }
    ctx->pc = 0x14FFD4u;
    // 0x14ffd4: 0x0  nop
    ctx->pc = 0x14ffd4u;
    // NOP
label_14ffd8:
    // 0x14ffd8: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x14ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x14ffdc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x14ffdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14ffe0: 0xc05c00c  jal         func_170030
    ctx->pc = 0x14FFE0u;
    SET_GPR_U32(ctx, 31, 0x14FFE8u);
    ctx->pc = 0x14FFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FFE0u;
            // 0x14ffe4: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FFE8u; }
        if (ctx->pc != 0x14FFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FFE8u; }
        if (ctx->pc != 0x14FFE8u) { return; }
    }
    ctx->pc = 0x14FFE8u;
    // 0x14ffe8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14ffe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14ffec: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x14ffecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
    // 0x14fff0: 0xc42199a8  lwc1        $f1, -0x6658($at)
    ctx->pc = 0x14fff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fff4: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x14fff4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)16384u)));
    // 0x14fff8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x14fff8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fffc: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x14fffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x150000: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x150000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150004: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x150004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150008: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x150008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x15000c: 0x129940  sll         $s3, $s2, 5
    ctx->pc = 0x15000cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x150010: 0x24632160  addiu       $v1, $v1, 0x2160
    ctx->pc = 0x150010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8544));
    // 0x150014: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x150014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x150018: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x150018u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15001c: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x15001cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x150020: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x150020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x150024: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x150024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x150028: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150028u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x15002c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x15002cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x150030: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x150030u;
    SET_GPR_U32(ctx, 31, 0x150038u);
    ctx->pc = 0x150034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150030u;
            // 0x150034: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150038u; }
        if (ctx->pc != 0x150038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150038u; }
        if (ctx->pc != 0x150038u) { return; }
    }
    ctx->pc = 0x150038u;
    // 0x150038: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x150038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15003c: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x15003cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x150040: 0xc42199a8  lwc1        $f1, -0x6658($at)
    ctx->pc = 0x150040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150044: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x150044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x150048: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x150048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x15004c: 0x3a900  sll         $s5, $v1, 4
    ctx->pc = 0x15004cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x150050: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x150050u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16384u)));
    // 0x150054: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x150054u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x150058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15005c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x15005cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x150060: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x150060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x150064: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x150064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x150068: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x150068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x15006c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x15006cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x150070: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x150070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x150074: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x150074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x150078: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x150078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15007c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15007cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x150080: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x150080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x150084: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150084u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x150088: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x150088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x15008c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x15008cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x150090: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x150090u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x150094: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x150094u;
    SET_GPR_U32(ctx, 31, 0x15009Cu);
    ctx->pc = 0x150098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150094u;
            // 0x150098: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15009Cu; }
        if (ctx->pc != 0x15009Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15009Cu; }
        if (ctx->pc != 0x15009Cu) { return; }
    }
    ctx->pc = 0x15009Cu;
    // 0x15009c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15009cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1500a0: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x1500a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x1500a4: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1500a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1500a8: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x1500a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x1500ac: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x1500ACu;
    SET_GPR_U32(ctx, 31, 0x1500B4u);
    ctx->pc = 0x1500B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1500ACu;
            // 0x1500b0: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1500B4u; }
        if (ctx->pc != 0x1500B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1500B4u; }
        if (ctx->pc != 0x1500B4u) { return; }
    }
    ctx->pc = 0x1500B4u;
    // 0x1500b4: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x1500b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x1500b8: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1500b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1500bc: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x1500bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x1500c0: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1500c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1500c4: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x1500c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1500c8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1500c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1500cc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1500ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1500d0: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1500d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1500d4: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x1500D4u;
    SET_GPR_U32(ctx, 31, 0x1500DCu);
    ctx->pc = 0x1500D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1500D4u;
            // 0x1500d8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1500DCu; }
        if (ctx->pc != 0x1500DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1500DCu; }
        if (ctx->pc != 0x1500DCu) { return; }
    }
    ctx->pc = 0x1500DCu;
    // 0x1500dc: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x1500dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x1500e0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1500e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1500e4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1500e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1500e8: 0x24420160  addiu       $v0, $v0, 0x160
    ctx->pc = 0x1500e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x1500ec: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1500ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1500f0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1500f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1500f4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1500f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1500f8: 0xc0546b4  jal         func_151AD0
    ctx->pc = 0x1500F8u;
    SET_GPR_U32(ctx, 31, 0x150100u);
    ctx->pc = 0x1500FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1500F8u;
            // 0x1500fc: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AD0u;
    if (runtime->hasFunction(0x151AD0u)) {
        auto targetFn = runtime->lookupFunction(0x151AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150100u; }
        if (ctx->pc != 0x150100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x151ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150100u; }
        if (ctx->pc != 0x150100u) { return; }
    }
    ctx->pc = 0x150100u;
    // 0x150100: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x150100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x150104: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x150104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150108: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x150108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x15010c: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15010Cu;
    SET_GPR_U32(ctx, 31, 0x150114u);
    ctx->pc = 0x150110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15010Cu;
            // 0x150110: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150114u; }
        if (ctx->pc != 0x150114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150114u; }
        if (ctx->pc != 0x150114u) { return; }
    }
    ctx->pc = 0x150114u;
    // 0x150114: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x150114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x150118: 0x3c04459c  lui         $a0, 0x459C
    ctx->pc = 0x150118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17820 << 16));
    // 0x15011c: 0xc42199a8  lwc1        $f1, -0x6658($at)
    ctx->pc = 0x15011cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150120: 0x34854000  ori         $a1, $a0, 0x4000
    ctx->pc = 0x150120u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)16384u)));
    // 0x150124: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x150124u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150128: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x150128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15012c: 0x39940  sll         $s3, $v1, 5
    ctx->pc = 0x15012cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x150130: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x150130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150134: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x150134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150138: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x150138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x15013c: 0x24632160  addiu       $v1, $v1, 0x2160
    ctx->pc = 0x15013cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8544));
    // 0x150140: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x150140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x150144: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x150144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x150148: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x150148u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15014c: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x15014cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x150150: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x150150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x150154: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150154u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x150158: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x150158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15015c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x15015cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x150160: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x150160u;
    SET_GPR_U32(ctx, 31, 0x150168u);
    ctx->pc = 0x150164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150160u;
            // 0x150164: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150168u; }
        if (ctx->pc != 0x150168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150168u; }
        if (ctx->pc != 0x150168u) { return; }
    }
    ctx->pc = 0x150168u;
    // 0x150168: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x150168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15016c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x15016cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x150170: 0xc42199a8  lwc1        $f1, -0x6658($at)
    ctx->pc = 0x150170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150174: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x150174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x150178: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x150178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15017c: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x15017cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x150180: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x150180u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16384u)));
    // 0x150184: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x150184u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x150188: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x150188u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15018c: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x15018cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x150190: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x150190u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x150194: 0x4a900  sll         $s5, $a0, 4
    ctx->pc = 0x150194u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x150198: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x150198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x15019c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15019cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1501a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1501a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1501a4: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x1501a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1501a8: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x1501a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1501ac: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1501acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1501b0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1501b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1501b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1501b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1501b8: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x1501b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1501bc: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1501bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1501c0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1501c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1501c4: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1501c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1501c8: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x1501C8u;
    SET_GPR_U32(ctx, 31, 0x1501D0u);
    ctx->pc = 0x1501CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1501C8u;
            // 0x1501cc: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1501D0u; }
        if (ctx->pc != 0x1501D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1501D0u; }
        if (ctx->pc != 0x1501D0u) { return; }
    }
    ctx->pc = 0x1501D0u;
    // 0x1501d0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1501d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1501d4: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x1501d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x1501d8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1501d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1501dc: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x1501dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x1501e0: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x1501E0u;
    SET_GPR_U32(ctx, 31, 0x1501E8u);
    ctx->pc = 0x1501E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1501E0u;
            // 0x1501e4: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1501E8u; }
        if (ctx->pc != 0x1501E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1501E8u; }
        if (ctx->pc != 0x1501E8u) { return; }
    }
    ctx->pc = 0x1501E8u;
    // 0x1501e8: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x1501e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x1501ec: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1501ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1501f0: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x1501f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x1501f4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1501f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1501f8: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x1501f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1501fc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1501fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x150200: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x150200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x150204: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x150204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x150208: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x150208u;
    SET_GPR_U32(ctx, 31, 0x150210u);
    ctx->pc = 0x15020Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150208u;
            // 0x15020c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150210u; }
        if (ctx->pc != 0x150210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150210u; }
        if (ctx->pc != 0x150210u) { return; }
    }
    ctx->pc = 0x150210u;
    // 0x150210: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x150210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x150214: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x150214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x150218: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x150218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x15021c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x15021cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x150220: 0x24420160  addiu       $v0, $v0, 0x160
    ctx->pc = 0x150220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x150224: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x150224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x150228: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x150228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15022c: 0x24a598e0  addiu       $a1, $a1, -0x6720
    ctx->pc = 0x15022cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940896));
    // 0x150230: 0x8cc20078  lw          $v0, 0x78($a2)
    ctx->pc = 0x150230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x150234: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x150234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x150238: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x150238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15023c: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x15023cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150240: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x150240u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x150244: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x150244u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x150248: 0xc0546b4  jal         func_151AD0
    ctx->pc = 0x150248u;
    SET_GPR_U32(ctx, 31, 0x150250u);
    ctx->pc = 0x15024Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150248u;
            // 0x15024c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AD0u;
    if (runtime->hasFunction(0x151AD0u)) {
        auto targetFn = runtime->lookupFunction(0x151AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150250u; }
        if (ctx->pc != 0x150250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x151ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150250u; }
        if (ctx->pc != 0x150250u) { return; }
    }
    ctx->pc = 0x150250u;
    // 0x150250: 0x10000591  b           . + 4 + (0x591 << 2)
    ctx->pc = 0x150250u;
    {
        const bool branch_taken_0x150250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150250u;
            // 0x150254: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150250) {
            ctx->pc = 0x151898u;
            goto label_151898;
        }
    }
    ctx->pc = 0x150258u;
label_150258:
    // 0x150258: 0x8e850038  lw          $a1, 0x38($s4)
    ctx->pc = 0x150258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x15025c: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15025Cu;
    SET_GPR_U32(ctx, 31, 0x150264u);
    ctx->pc = 0x150260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15025Cu;
            // 0x150260: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150264u; }
        if (ctx->pc != 0x150264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150264u; }
        if (ctx->pc != 0x150264u) { return; }
    }
    ctx->pc = 0x150264u;
    // 0x150264: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x150264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x150268: 0x3c034743  lui         $v1, 0x4743
    ctx->pc = 0x150268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18243 << 16));
    // 0x15026c: 0xc42099a8  lwc1        $f0, -0x6658($at)
    ctx->pc = 0x15026cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150270: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x150270u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)20480u)));
    // 0x150274: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x150274u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150278: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x150278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15027c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15027cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150280: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x150280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x150284: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x150284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x150288: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x150288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x15028c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15028cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x150290: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x150290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x150294: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x150294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x150298: 0x24a5fff8  addiu       $a1, $a1, -0x8
    ctx->pc = 0x150298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x15029c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15029cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1502a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1502a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1502a4: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1502a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1502a8: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x1502A8u;
    SET_GPR_U32(ctx, 31, 0x1502B0u);
    ctx->pc = 0x1502ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1502A8u;
            // 0x1502ac: 0x2446fff8  addiu       $a2, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1502B0u; }
        if (ctx->pc != 0x1502B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1502B0u; }
        if (ctx->pc != 0x1502B0u) { return; }
    }
    ctx->pc = 0x1502B0u;
    // 0x1502b0: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1502b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1502b4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1502b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1502b8: 0xc42099a8  lwc1        $f0, -0x6658($at)
    ctx->pc = 0x1502b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1502bc: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x1502bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1502c0: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1502c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1502c4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1502c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1502c8: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x1502c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1502cc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1502ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1502d0: 0x29900  sll         $s3, $v0, 4
    ctx->pc = 0x1502d0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1502d4: 0x3c024743  lui         $v0, 0x4743
    ctx->pc = 0x1502d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18243 << 16));
    // 0x1502d8: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x1502d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)20480u)));
    // 0x1502dc: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x1502dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1502e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1502e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1502e4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1502e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1502e8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1502e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1502ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1502ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1502f0: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1502f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1502f4: 0x2442c160  addiu       $v0, $v0, -0x3EA0
    ctx->pc = 0x1502f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951264));
    // 0x1502f8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1502f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1502fc: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x1502fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x150300: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x150300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x150304: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150304u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x150308: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x150308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15030c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x15030cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x150310: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x150310u;
    SET_GPR_U32(ctx, 31, 0x150318u);
    ctx->pc = 0x150314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150310u;
            // 0x150314: 0x24460008  addiu       $a2, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150318u; }
        if (ctx->pc != 0x150318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150318u; }
        if (ctx->pc != 0x150318u) { return; }
    }
    ctx->pc = 0x150318u;
    // 0x150318: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x150318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15031c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15031cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x150320: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x150320u;
    SET_GPR_U32(ctx, 31, 0x150328u);
    ctx->pc = 0x150324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150320u;
            // 0x150324: 0x8fa40110  lw          $a0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150328u; }
        if (ctx->pc != 0x150328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150328u; }
        if (ctx->pc != 0x150328u) { return; }
    }
    ctx->pc = 0x150328u;
    // 0x150328: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x150328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x15032c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15032cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x150330: 0x2442c160  addiu       $v0, $v0, -0x3EA0
    ctx->pc = 0x150330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951264));
    // 0x150334: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x150334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x150338: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x150338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x15033c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15033cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x150340: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x150340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x150344: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x150344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x150348: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x150348u;
    SET_GPR_U32(ctx, 31, 0x150350u);
    ctx->pc = 0x15034Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150348u;
            // 0x15034c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150350u; }
        if (ctx->pc != 0x150350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150350u; }
        if (ctx->pc != 0x150350u) { return; }
    }
    ctx->pc = 0x150350u;
    // 0x150350: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x150350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x150354: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x150354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x150358: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x150358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15035c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x15035cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150360: 0xc0546b4  jal         func_151AD0
    ctx->pc = 0x150360u;
    SET_GPR_U32(ctx, 31, 0x150368u);
    ctx->pc = 0x150364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150360u;
            // 0x150364: 0x24080050  addiu       $t0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AD0u;
    if (runtime->hasFunction(0x151AD0u)) {
        auto targetFn = runtime->lookupFunction(0x151AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150368u; }
        if (ctx->pc != 0x150368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x151ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150368u; }
        if (ctx->pc != 0x150368u) { return; }
    }
    ctx->pc = 0x150368u;
    // 0x150368: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x150368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x15036c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x15036cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x150370: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x150370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x150374: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x150374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x150378: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x150378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x15037c: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x15037cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x150380: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x150380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x150384: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x150384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x150388: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x150388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x15038c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x15038cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x150390: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x150390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x150394: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x150394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x150398: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x150398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x15039c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15039cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1503a0: 0x1000053d  b           . + 4 + (0x53D << 2)
    ctx->pc = 0x1503A0u;
    {
        const bool branch_taken_0x1503a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1503A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1503A0u;
            // 0x1503a4: 0xafa20150  sw          $v0, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1503a0) {
            ctx->pc = 0x151898u;
            goto label_151898;
        }
    }
    ctx->pc = 0x1503A8u;
label_1503a8:
    // 0x1503a8: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x1503a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x1503ac: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1503acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1503b0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1503b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1503b4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1503b4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1503b8: 0x0  nop
    ctx->pc = 0x1503b8u;
    // NOP
    // 0x1503bc: 0x0  nop
    ctx->pc = 0x1503bcu;
    // NOP
    // 0x1503c0: 0x9810  mfhi        $s3
    ctx->pc = 0x1503c0u;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x1503c4: 0xc05c00c  jal         func_170030
    ctx->pc = 0x1503C4u;
    SET_GPR_U32(ctx, 31, 0x1503CCu);
    ctx->pc = 0x1503C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1503C4u;
            // 0x1503c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1503CCu; }
        if (ctx->pc != 0x1503CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1503CCu; }
        if (ctx->pc != 0x1503CCu) { return; }
    }
    ctx->pc = 0x1503CCu;
    // 0x1503cc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1503ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1503d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1503d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1503d4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1503d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1503d8: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x1503d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1503dc: 0xc42199a8  lwc1        $f1, -0x6658($at)
    ctx->pc = 0x1503dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1503e0: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x1503e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1503e4: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1503e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1503e8: 0x3c0245fa  lui         $v0, 0x45FA
    ctx->pc = 0x1503e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17914 << 16));
    // 0x1503ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1503ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1503f0: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x1503f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1503f4: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x1503f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x1503f8: 0x34435556  ori         $v1, $v0, 0x5556
    ctx->pc = 0x1503f8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)21846u)));
    // 0x1503fc: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1503fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x150400: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x150400u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x150404: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x150404u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x150408: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150408u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x15040c: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x15040cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x150410: 0x2446ffec  addiu       $a2, $v0, -0x14
    ctx->pc = 0x150410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x150414: 0x1010  mfhi        $v0
    ctx->pc = 0x150414u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x150418: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x150418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15041c: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x15041cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x150420: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x150420u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x150424: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x150424u;
    SET_GPR_U32(ctx, 31, 0x15042Cu);
    ctx->pc = 0x150428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150424u;
            // 0x150428: 0x24450008  addiu       $a1, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15042Cu; }
        if (ctx->pc != 0x15042Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15042Cu; }
        if (ctx->pc != 0x15042Cu) { return; }
    }
    ctx->pc = 0x15042Cu;
    // 0x15042c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15042cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x150430: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x150430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x150434: 0x3c0345fa  lui         $v1, 0x45FA
    ctx->pc = 0x150434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17914 << 16));
    // 0x150438: 0x1ea900  sll         $s5, $fp, 4
    ctx->pc = 0x150438u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x15043c: 0x24420160  addiu       $v0, $v0, 0x160
    ctx->pc = 0x15043cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x150440: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x150440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x150444: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x150444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x150448: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x150448u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x15044c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x15044cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x150450: 0xc42199a8  lwc1        $f1, -0x6658($at)
    ctx->pc = 0x150450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150454: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x150454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150458: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x150458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x15045c: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x15045cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x150460: 0x34435556  ori         $v1, $v0, 0x5556
    ctx->pc = 0x150460u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)21846u)));
    // 0x150464: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x150464u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x150468: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x150468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x15046c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x15046cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x150470: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x150470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x150474: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x150474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x150478: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x150478u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x15047c: 0x24460014  addiu       $a2, $v0, 0x14
    ctx->pc = 0x15047cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x150480: 0x1010  mfhi        $v0
    ctx->pc = 0x150480u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x150484: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150484u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x150488: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x150488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15048c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x15048cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x150490: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x150490u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x150494: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x150494u;
    SET_GPR_U32(ctx, 31, 0x15049Cu);
    ctx->pc = 0x150498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150494u;
            // 0x150498: 0x2445fff8  addiu       $a1, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15049Cu; }
        if (ctx->pc != 0x15049Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15049Cu; }
        if (ctx->pc != 0x15049Cu) { return; }
    }
    ctx->pc = 0x15049Cu;
    // 0x15049c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15049cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1504a0: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1504a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1504a4: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1504a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1504a8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1504a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1504ac: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1504acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1504b0: 0x39880  sll         $s3, $v1, 2
    ctx->pc = 0x1504b0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1504b4: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x1504B4u;
    SET_GPR_U32(ctx, 31, 0x1504BCu);
    ctx->pc = 0x1504B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1504B4u;
            // 0x1504b8: 0x533021  addu        $a2, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1504BCu; }
        if (ctx->pc != 0x1504BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1504BCu; }
        if (ctx->pc != 0x1504BCu) { return; }
    }
    ctx->pc = 0x1504BCu;
    // 0x1504bc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1504bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1504c0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1504c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1504c4: 0x24420160  addiu       $v0, $v0, 0x160
    ctx->pc = 0x1504c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x1504c8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1504c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1504cc: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x1504ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1504d0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1504d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1504d4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1504d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1504d8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1504d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1504dc: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x1504DCu;
    SET_GPR_U32(ctx, 31, 0x1504E4u);
    ctx->pc = 0x1504E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1504DCu;
            // 0x1504e0: 0x24460014  addiu       $a2, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1504E4u; }
        if (ctx->pc != 0x1504E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1504E4u; }
        if (ctx->pc != 0x1504E4u) { return; }
    }
    ctx->pc = 0x1504E4u;
    // 0x1504e4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1504e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1504e8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1504e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1504ec: 0x24429920  addiu       $v0, $v0, -0x66E0
    ctx->pc = 0x1504ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940960));
    // 0x1504f0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1504f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1504f4: 0x8c630078  lw          $v1, 0x78($v1)
    ctx->pc = 0x1504f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x1504f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1504f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1504fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1504fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150500: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x150500u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150504: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x150504u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x150508: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x150508u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x15050c: 0xc0546b4  jal         func_151AD0
    ctx->pc = 0x15050Cu;
    SET_GPR_U32(ctx, 31, 0x150514u);
    ctx->pc = 0x150510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15050Cu;
            // 0x150510: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AD0u;
    if (runtime->hasFunction(0x151AD0u)) {
        auto targetFn = runtime->lookupFunction(0x151AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150514u; }
        if (ctx->pc != 0x150514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x151ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150514u; }
        if (ctx->pc != 0x150514u) { return; }
    }
    ctx->pc = 0x150514u;
    // 0x150514: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x150514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x150518: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x150518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x15051c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15051cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150520: 0x27de0002  addiu       $fp, $fp, 0x2
    ctx->pc = 0x150520u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
    // 0x150524: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x150524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x150528: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x150528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x15052c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x15052cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x150530: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x150530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x150534: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x150534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x150538: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x150538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15053c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x15053cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x150540: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x150540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x150544: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x150544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x150548: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x150548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x15054c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x15054cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x150550: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x150550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x150554: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x150554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x150558: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x150558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x15055c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x15055cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x150560: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x150560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x150564: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x150564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x150568: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x150568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x15056c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15056cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x150570: 0xc05c00c  jal         func_170030
    ctx->pc = 0x150570u;
    SET_GPR_U32(ctx, 31, 0x150578u);
    ctx->pc = 0x150574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150570u;
            // 0x150574: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150578u; }
        if (ctx->pc != 0x150578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150578u; }
        if (ctx->pc != 0x150578u) { return; }
    }
    ctx->pc = 0x150578u;
    // 0x150578: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x150578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15057c: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x15057cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x150580: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x150580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150584: 0x11a940  sll         $s5, $s1, 5
    ctx->pc = 0x150584u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x150588: 0xc0409de  jal         func_102778
    ctx->pc = 0x150588u;
    SET_GPR_U32(ctx, 31, 0x150590u);
    ctx->pc = 0x15058Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150588u;
            // 0x15058c: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102778u;
    if (runtime->hasFunction(0x102778u)) {
        auto targetFn = runtime->lookupFunction(0x102778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150590u; }
        if (ctx->pc != 0x150590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x102778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150590u; }
        if (ctx->pc != 0x150590u) { return; }
    }
    ctx->pc = 0x150590u;
    // 0x150590: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x150590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x150594: 0xc0409de  jal         func_102778
    ctx->pc = 0x150594u;
    SET_GPR_U32(ctx, 31, 0x15059Cu);
    ctx->pc = 0x150598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150594u;
            // 0x150598: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102778u;
    if (runtime->hasFunction(0x102778u)) {
        auto targetFn = runtime->lookupFunction(0x102778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15059Cu; }
        if (ctx->pc != 0x15059Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x102778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15059Cu; }
        if (ctx->pc != 0x15059Cu) { return; }
    }
    ctx->pc = 0x15059Cu;
    // 0x15059c: 0x3c033ff8  lui         $v1, 0x3FF8
    ctx->pc = 0x15059cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16376 << 16));
    // 0x1505a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1505a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1505a4: 0xc040880  jal         func_102200
    ctx->pc = 0x1505A4u;
    SET_GPR_U32(ctx, 31, 0x1505ACu);
    ctx->pc = 0x1505A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1505A4u;
            // 0x1505a8: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1505ACu; }
        if (ctx->pc != 0x1505ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1505ACu; }
        if (ctx->pc != 0x1505ACu) { return; }
    }
    ctx->pc = 0x1505ACu;
    // 0x1505ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1505acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1505b0: 0xc040866  jal         func_102198
    ctx->pc = 0x1505B0u;
    SET_GPR_U32(ctx, 31, 0x1505B8u);
    ctx->pc = 0x1505B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1505B0u;
            // 0x1505b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1505B8u; }
        if (ctx->pc != 0x1505B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1505B8u; }
        if (ctx->pc != 0x1505B8u) { return; }
    }
    ctx->pc = 0x1505B8u;
    // 0x1505b8: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x1505b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x1505bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1505bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1505c0: 0xc040850  jal         func_102140
    ctx->pc = 0x1505C0u;
    SET_GPR_U32(ctx, 31, 0x1505C8u);
    ctx->pc = 0x1505C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1505C0u;
            // 0x1505c4: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1505C8u; }
        if (ctx->pc != 0x1505C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1505C8u; }
        if (ctx->pc != 0x1505C8u) { return; }
    }
    ctx->pc = 0x1505C8u;
    // 0x1505c8: 0xc040a0c  jal         func_102830
    ctx->pc = 0x1505C8u;
    SET_GPR_U32(ctx, 31, 0x1505D0u);
    ctx->pc = 0x1505CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1505C8u;
            // 0x1505cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102830u;
    if (runtime->hasFunction(0x102830u)) {
        auto targetFn = runtime->lookupFunction(0x102830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1505D0u; }
        if (ctx->pc != 0x1505D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x102830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1505D0u; }
        if (ctx->pc != 0x1505D0u) { return; }
    }
    ctx->pc = 0x1505D0u;
    // 0x1505d0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1505d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1505d4: 0x3c0345fa  lui         $v1, 0x45FA
    ctx->pc = 0x1505d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17914 << 16));
    // 0x1505d8: 0xc42199a8  lwc1        $f1, -0x6658($at)
    ctx->pc = 0x1505d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1505dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1505dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1505e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1505e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1505e4: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1505e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1505e8: 0x2442e160  addiu       $v0, $v0, -0x1EA0
    ctx->pc = 0x1505e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x1505ec: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x1505ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1505f0: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1505f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1505f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1505f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1505f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1505f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1505fc: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1505fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x150600: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x150600u;
    SET_GPR_U32(ctx, 31, 0x150608u);
    ctx->pc = 0x150604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150600u;
            // 0x150604: 0x2446ffec  addiu       $a2, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150608u; }
        if (ctx->pc != 0x150608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150608u; }
        if (ctx->pc != 0x150608u) { return; }
    }
    ctx->pc = 0x150608u;
    // 0x150608: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x150608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x15060c: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x15060cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x150610: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x150610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x150614: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x150614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x150618: 0x2b100  sll         $s6, $v0, 4
    ctx->pc = 0x150618u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15061c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x15061cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x150620: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x150620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x150624: 0xc0409de  jal         func_102778
    ctx->pc = 0x150624u;
    SET_GPR_U32(ctx, 31, 0x15062Cu);
    ctx->pc = 0x150628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150624u;
            // 0x150628: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102778u;
    if (runtime->hasFunction(0x102778u)) {
        auto targetFn = runtime->lookupFunction(0x102778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15062Cu; }
        if (ctx->pc != 0x15062Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x102778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15062Cu; }
        if (ctx->pc != 0x15062Cu) { return; }
    }
    ctx->pc = 0x15062Cu;
    // 0x15062c: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x15062cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x150630: 0xc0409de  jal         func_102778
    ctx->pc = 0x150630u;
    SET_GPR_U32(ctx, 31, 0x150638u);
    ctx->pc = 0x150634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150630u;
            // 0x150634: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102778u;
    if (runtime->hasFunction(0x102778u)) {
        auto targetFn = runtime->lookupFunction(0x102778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150638u; }
        if (ctx->pc != 0x150638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x102778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150638u; }
        if (ctx->pc != 0x150638u) { return; }
    }
    ctx->pc = 0x150638u;
    // 0x150638: 0x3c033ff8  lui         $v1, 0x3FF8
    ctx->pc = 0x150638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16376 << 16));
    // 0x15063c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15063cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150640: 0xc040880  jal         func_102200
    ctx->pc = 0x150640u;
    SET_GPR_U32(ctx, 31, 0x150648u);
    ctx->pc = 0x150644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150640u;
            // 0x150644: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150648u; }
        if (ctx->pc != 0x150648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150648u; }
        if (ctx->pc != 0x150648u) { return; }
    }
    ctx->pc = 0x150648u;
    // 0x150648: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x150648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15064c: 0xc040850  jal         func_102140
    ctx->pc = 0x15064Cu;
    SET_GPR_U32(ctx, 31, 0x150654u);
    ctx->pc = 0x150650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15064Cu;
            // 0x150650: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150654u; }
        if (ctx->pc != 0x150654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150654u; }
        if (ctx->pc != 0x150654u) { return; }
    }
    ctx->pc = 0x150654u;
    // 0x150654: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x150654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x150658: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x150658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15065c: 0xc040866  jal         func_102198
    ctx->pc = 0x15065Cu;
    SET_GPR_U32(ctx, 31, 0x150664u);
    ctx->pc = 0x150660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15065Cu;
            // 0x150660: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150664u; }
        if (ctx->pc != 0x150664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150664u; }
        if (ctx->pc != 0x150664u) { return; }
    }
    ctx->pc = 0x150664u;
    // 0x150664: 0xc040a0c  jal         func_102830
    ctx->pc = 0x150664u;
    SET_GPR_U32(ctx, 31, 0x15066Cu);
    ctx->pc = 0x150668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150664u;
            // 0x150668: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102830u;
    if (runtime->hasFunction(0x102830u)) {
        auto targetFn = runtime->lookupFunction(0x102830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15066Cu; }
        if (ctx->pc != 0x15066Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x102830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15066Cu; }
        if (ctx->pc != 0x15066Cu) { return; }
    }
    ctx->pc = 0x15066Cu;
    // 0x15066c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15066cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x150670: 0x3c0345fa  lui         $v1, 0x45FA
    ctx->pc = 0x150670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17914 << 16));
    // 0x150674: 0xc42199a8  lwc1        $f1, -0x6658($at)
    ctx->pc = 0x150674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150678: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x150678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15067c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15067cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150680: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x150680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x150684: 0x2442e160  addiu       $v0, $v0, -0x1EA0
    ctx->pc = 0x150684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x150688: 0x562021  addu        $a0, $v0, $s6
    ctx->pc = 0x150688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x15068c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x15068cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x150690: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x150690u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x150694: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150694u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x150698: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x150698u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x15069c: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x15069Cu;
    SET_GPR_U32(ctx, 31, 0x1506A4u);
    ctx->pc = 0x1506A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15069Cu;
            // 0x1506a0: 0x24460014  addiu       $a2, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1506A4u; }
        if (ctx->pc != 0x1506A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1506A4u; }
        if (ctx->pc != 0x1506A4u) { return; }
    }
    ctx->pc = 0x1506A4u;
    // 0x1506a4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1506a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1506a8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1506a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1506ac: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1506acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1506b0: 0x2463e160  addiu       $v1, $v1, -0x1EA0
    ctx->pc = 0x1506b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959456));
    // 0x1506b4: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x1506b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1506b8: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x1506B8u;
    SET_GPR_U32(ctx, 31, 0x1506C0u);
    ctx->pc = 0x1506BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1506B8u;
            // 0x1506bc: 0x533021  addu        $a2, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1506C0u; }
        if (ctx->pc != 0x1506C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1506C0u; }
        if (ctx->pc != 0x1506C0u) { return; }
    }
    ctx->pc = 0x1506C0u;
    // 0x1506c0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1506c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1506c4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1506c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1506c8: 0x2442e160  addiu       $v0, $v0, -0x1EA0
    ctx->pc = 0x1506c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x1506cc: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1506ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1506d0: 0x562021  addu        $a0, $v0, $s6
    ctx->pc = 0x1506d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1506d4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1506d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1506d8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1506d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1506dc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1506dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1506e0: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x1506E0u;
    SET_GPR_U32(ctx, 31, 0x1506E8u);
    ctx->pc = 0x1506E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1506E0u;
            // 0x1506e4: 0x24460014  addiu       $a2, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1506E8u; }
        if (ctx->pc != 0x1506E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1506E8u; }
        if (ctx->pc != 0x1506E8u) { return; }
    }
    ctx->pc = 0x1506E8u;
    // 0x1506e8: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x1506e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1506ec: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1506ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1506f0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1506f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1506f4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1506f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1506f8: 0x2442c160  addiu       $v0, $v0, -0x3EA0
    ctx->pc = 0x1506f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951264));
    // 0x1506fc: 0x24a59900  addiu       $a1, $a1, -0x6700
    ctx->pc = 0x1506fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940928));
    // 0x150700: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x150700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150704: 0x8cc20078  lw          $v0, 0x78($a2)
    ctx->pc = 0x150704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x150708: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x150708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15070c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15070cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x150710: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x150710u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150714: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x150714u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x150718: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x150718u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x15071c: 0xc0546b4  jal         func_151AD0
    ctx->pc = 0x15071Cu;
    SET_GPR_U32(ctx, 31, 0x150724u);
    ctx->pc = 0x150720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15071Cu;
            // 0x150720: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AD0u;
    if (runtime->hasFunction(0x151AD0u)) {
        auto targetFn = runtime->lookupFunction(0x151AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150724u; }
        if (ctx->pc != 0x150724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x151ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150724u; }
        if (ctx->pc != 0x150724u) { return; }
    }
    ctx->pc = 0x150724u;
    // 0x150724: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x150724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x150728: 0x1440045b  bnez        $v0, . + 4 + (0x45B << 2)
    ctx->pc = 0x150728u;
    {
        const bool branch_taken_0x150728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15072Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150728u;
            // 0x15072c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150728) {
            ctx->pc = 0x151898u;
            goto label_151898;
        }
    }
    ctx->pc = 0x150730u;
    // 0x150730: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x150730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x150734: 0xc05c00c  jal         func_170030
    ctx->pc = 0x150734u;
    SET_GPR_U32(ctx, 31, 0x15073Cu);
    ctx->pc = 0x150738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150734u;
            // 0x150738: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15073Cu; }
        if (ctx->pc != 0x15073Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15073Cu; }
        if (ctx->pc != 0x15073Cu) { return; }
    }
    ctx->pc = 0x15073Cu;
    // 0x15073c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15073cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x150740: 0x3c0345fa  lui         $v1, 0x45FA
    ctx->pc = 0x150740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17914 << 16));
    // 0x150744: 0xc42199a8  lwc1        $f1, -0x6658($at)
    ctx->pc = 0x150744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150748: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x150748u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15074c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15074cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150750: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x150750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150754: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x150754u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x150758: 0x119940  sll         $s3, $s1, 5
    ctx->pc = 0x150758u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x15075c: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x15075cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x150760: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x150760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x150764: 0x2463e160  addiu       $v1, $v1, -0x1EA0
    ctx->pc = 0x150764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959456));
    // 0x150768: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x150768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x15076c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x15076cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x150770: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x150770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x150774: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x150774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x150778: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x150778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15077c: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x15077cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x150780: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150780u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x150784: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x150784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x150788: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x150788u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x15078c: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x15078Cu;
    SET_GPR_U32(ctx, 31, 0x150794u);
    ctx->pc = 0x150790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15078Cu;
            // 0x150790: 0x2446fff6  addiu       $a2, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150794u; }
        if (ctx->pc != 0x150794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150794u; }
        if (ctx->pc != 0x150794u) { return; }
    }
    ctx->pc = 0x150794u;
    // 0x150794: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x150794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x150798: 0x3c0345fa  lui         $v1, 0x45FA
    ctx->pc = 0x150798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17914 << 16));
    // 0x15079c: 0xc42199a8  lwc1        $f1, -0x6658($at)
    ctx->pc = 0x15079cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1507a0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1507a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1507a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1507a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1507a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1507a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1507ac: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x1507acu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1507b0: 0x8e890008  lw          $t1, 0x8($s4)
    ctx->pc = 0x1507b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1507b4: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1507b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1507b8: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x1507b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1507bc: 0x2442e160  addiu       $v0, $v0, -0x1EA0
    ctx->pc = 0x1507bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x1507c0: 0x8e070014  lw          $a3, 0x14($s0)
    ctx->pc = 0x1507c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1507c4: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x1507c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1507c8: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x1507c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1507cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1507ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1507d0: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x1507d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1507d4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1507d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1507d8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1507d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1507dc: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x1507dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1507e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1507e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1507e4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1507e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1507e8: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1507e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1507ec: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1507ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1507f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1507f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1507f4: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1507f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1507f8: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x1507F8u;
    SET_GPR_U32(ctx, 31, 0x150800u);
    ctx->pc = 0x1507FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1507F8u;
            // 0x1507fc: 0x2446000a  addiu       $a2, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150800u; }
        if (ctx->pc != 0x150800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150800u; }
        if (ctx->pc != 0x150800u) { return; }
    }
    ctx->pc = 0x150800u;
    // 0x150800: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x150800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x150804: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x150804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x150808: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x150808u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15080c: 0x2442e160  addiu       $v0, $v0, -0x1EA0
    ctx->pc = 0x15080cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x150810: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x150810u;
    SET_GPR_U32(ctx, 31, 0x150818u);
    ctx->pc = 0x150814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150810u;
            // 0x150814: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150818u; }
        if (ctx->pc != 0x150818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150818u; }
        if (ctx->pc != 0x150818u) { return; }
    }
    ctx->pc = 0x150818u;
    // 0x150818: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x150818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x15081c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15081cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x150820: 0x2442e160  addiu       $v0, $v0, -0x1EA0
    ctx->pc = 0x150820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x150824: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x150824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x150828: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x150828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x15082c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15082cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x150830: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x150830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x150834: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x150834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x150838: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x150838u;
    SET_GPR_U32(ctx, 31, 0x150840u);
    ctx->pc = 0x15083Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150838u;
            // 0x15083c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150840u; }
        if (ctx->pc != 0x150840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150840u; }
        if (ctx->pc != 0x150840u) { return; }
    }
    ctx->pc = 0x150840u;
    // 0x150840: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x150840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x150844: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x150844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x150848: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x150848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x15084c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x15084cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x150850: 0x2442c160  addiu       $v0, $v0, -0x3EA0
    ctx->pc = 0x150850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951264));
    // 0x150854: 0x24a59900  addiu       $a1, $a1, -0x6700
    ctx->pc = 0x150854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940928));
    // 0x150858: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x150858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15085c: 0x8cc20078  lw          $v0, 0x78($a2)
    ctx->pc = 0x15085cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x150860: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x150860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x150864: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x150864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x150868: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x150868u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15086c: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x15086cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x150870: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x150870u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x150874: 0xc0546b4  jal         func_151AD0
    ctx->pc = 0x150874u;
    SET_GPR_U32(ctx, 31, 0x15087Cu);
    ctx->pc = 0x150878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150874u;
            // 0x150878: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AD0u;
    if (runtime->hasFunction(0x151AD0u)) {
        auto targetFn = runtime->lookupFunction(0x151AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15087Cu; }
        if (ctx->pc != 0x15087Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x151ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15087Cu; }
        if (ctx->pc != 0x15087Cu) { return; }
    }
    ctx->pc = 0x15087Cu;
    // 0x15087c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x15087cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x150880: 0xc05c00c  jal         func_170030
    ctx->pc = 0x150880u;
    SET_GPR_U32(ctx, 31, 0x150888u);
    ctx->pc = 0x150884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150880u;
            // 0x150884: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150888u; }
        if (ctx->pc != 0x150888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150888u; }
        if (ctx->pc != 0x150888u) { return; }
    }
    ctx->pc = 0x150888u;
    // 0x150888: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x150888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15088c: 0x3c0445fa  lui         $a0, 0x45FA
    ctx->pc = 0x15088cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17914 << 16));
    // 0x150890: 0xc42199a8  lwc1        $f1, -0x6658($at)
    ctx->pc = 0x150890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150894: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x150894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x150898: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x150898u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15089c: 0x39940  sll         $s3, $v1, 5
    ctx->pc = 0x15089cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1508a0: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1508a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x1508a4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1508a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1508a8: 0x2463e160  addiu       $v1, $v1, -0x1EA0
    ctx->pc = 0x1508a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959456));
    // 0x1508ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1508acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1508b0: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x1508b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1508b4: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x1508b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1508b8: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x1508b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1508bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1508bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1508c0: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x1508c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1508c4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1508c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1508c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1508c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1508cc: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1508ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1508d0: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x1508d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1508d4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1508d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1508d8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1508d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1508dc: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1508dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1508e0: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x1508E0u;
    SET_GPR_U32(ctx, 31, 0x1508E8u);
    ctx->pc = 0x1508E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1508E0u;
            // 0x1508e4: 0x2446fff6  addiu       $a2, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1508E8u; }
        if (ctx->pc != 0x1508E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1508E8u; }
        if (ctx->pc != 0x1508E8u) { return; }
    }
    ctx->pc = 0x1508E8u;
    // 0x1508e8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1508e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1508ec: 0x3c0345fa  lui         $v1, 0x45FA
    ctx->pc = 0x1508ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17914 << 16));
    // 0x1508f0: 0xc42199a8  lwc1        $f1, -0x6658($at)
    ctx->pc = 0x1508f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1508f4: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1508f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1508f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1508f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1508fc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1508fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x150900: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x150900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x150904: 0x8e890008  lw          $t1, 0x8($s4)
    ctx->pc = 0x150904u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x150908: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x150908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x15090c: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x15090cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x150910: 0x2442e160  addiu       $v0, $v0, -0x1EA0
    ctx->pc = 0x150910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x150914: 0x4a900  sll         $s5, $a0, 4
    ctx->pc = 0x150914u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x150918: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x150918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x15091c: 0x8e070014  lw          $a3, 0x14($s0)
    ctx->pc = 0x15091cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x150920: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x150920u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x150924: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x150924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x150928: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x150928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x15092c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15092cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x150930: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x150930u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x150934: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x150934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x150938: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150938u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x15093c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x15093cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x150940: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x150940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x150944: 0x24a5fff8  addiu       $a1, $a1, -0x8
    ctx->pc = 0x150944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x150948: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x150948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x15094c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15094cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150950: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x150950u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x150954: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x150954u;
    SET_GPR_U32(ctx, 31, 0x15095Cu);
    ctx->pc = 0x150958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150954u;
            // 0x150958: 0x2446000a  addiu       $a2, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15095Cu; }
        if (ctx->pc != 0x15095Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15095Cu; }
        if (ctx->pc != 0x15095Cu) { return; }
    }
    ctx->pc = 0x15095Cu;
    // 0x15095c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15095cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x150960: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x150960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x150964: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x150964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x150968: 0x2442e160  addiu       $v0, $v0, -0x1EA0
    ctx->pc = 0x150968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x15096c: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x15096Cu;
    SET_GPR_U32(ctx, 31, 0x150974u);
    ctx->pc = 0x150970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15096Cu;
            // 0x150970: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150974u; }
        if (ctx->pc != 0x150974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150974u; }
        if (ctx->pc != 0x150974u) { return; }
    }
    ctx->pc = 0x150974u;
    // 0x150974: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x150974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x150978: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x150978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15097c: 0x2442e160  addiu       $v0, $v0, -0x1EA0
    ctx->pc = 0x15097cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x150980: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x150980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x150984: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x150984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x150988: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x150988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15098c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15098cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x150990: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x150990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x150994: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x150994u;
    SET_GPR_U32(ctx, 31, 0x15099Cu);
    ctx->pc = 0x150998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150994u;
            // 0x150998: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15099Cu; }
        if (ctx->pc != 0x15099Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15099Cu; }
        if (ctx->pc != 0x15099Cu) { return; }
    }
    ctx->pc = 0x15099Cu;
    // 0x15099c: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x15099cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1509a0: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1509a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1509a4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1509a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1509a8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1509a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1509ac: 0x2442c160  addiu       $v0, $v0, -0x3EA0
    ctx->pc = 0x1509acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951264));
    // 0x1509b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1509b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1509b4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1509b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1509b8: 0x24a59900  addiu       $a1, $a1, -0x6700
    ctx->pc = 0x1509b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940928));
    // 0x1509bc: 0x8cc20078  lw          $v0, 0x78($a2)
    ctx->pc = 0x1509bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x1509c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1509c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1509c4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1509c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1509c8: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1509c8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1509cc: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x1509ccu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1509d0: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x1509d0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1509d4: 0xc0546b4  jal         func_151AD0
    ctx->pc = 0x1509D4u;
    SET_GPR_U32(ctx, 31, 0x1509DCu);
    ctx->pc = 0x1509D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1509D4u;
            // 0x1509d8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AD0u;
    if (runtime->hasFunction(0x151AD0u)) {
        auto targetFn = runtime->lookupFunction(0x151AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1509DCu; }
        if (ctx->pc != 0x1509DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x151ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1509DCu; }
        if (ctx->pc != 0x1509DCu) { return; }
    }
    ctx->pc = 0x1509DCu;
    // 0x1509dc: 0x100003ae  b           . + 4 + (0x3AE << 2)
    ctx->pc = 0x1509DCu;
    {
        const bool branch_taken_0x1509dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1509E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1509DCu;
            // 0x1509e0: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1509dc) {
            ctx->pc = 0x151898u;
            goto label_151898;
        }
    }
    ctx->pc = 0x1509E4u;
    // 0x1509e4: 0x0  nop
    ctx->pc = 0x1509e4u;
    // NOP
label_1509e8:
    // 0x1509e8: 0xc04e072  jal         func_1381C8
    ctx->pc = 0x1509E8u;
    SET_GPR_U32(ctx, 31, 0x1509F0u);
    ctx->pc = 0x1509ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1509E8u;
            // 0x1509ec: 0x8e840018  lw          $a0, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1381C8u;
    if (runtime->hasFunction(0x1381C8u)) {
        auto targetFn = runtime->lookupFunction(0x1381C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1509F0u; }
        if (ctx->pc != 0x1509F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        abs_0x1381c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1509F0u; }
        if (ctx->pc != 0x1509F0u) { return; }
    }
    ctx->pc = 0x1509F0u;
    // 0x1509f0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1509f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1509f4: 0xc05c00c  jal         func_170030
    ctx->pc = 0x1509F4u;
    SET_GPR_U32(ctx, 31, 0x1509FCu);
    ctx->pc = 0x1509F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1509F4u;
            // 0x1509f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1509FCu; }
        if (ctx->pc != 0x1509FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1509FCu; }
        if (ctx->pc != 0x1509FCu) { return; }
    }
    ctx->pc = 0x1509FCu;
    // 0x1509fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1509fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150a00: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x150a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x150a04: 0x4400026  bltz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x150A04u;
    {
        const bool branch_taken_0x150a04 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x150A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150A04u;
            // 0x150a08: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150a04) {
            ctx->pc = 0x150AA0u;
            goto label_150aa0;
        }
    }
    ctx->pc = 0x150A0Cu;
    // 0x150a0c: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x150a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x150a10: 0xc42099a8  lwc1        $f0, -0x6658($at)
    ctx->pc = 0x150a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150a14: 0x129940  sll         $s3, $s2, 5
    ctx->pc = 0x150a14u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x150a18: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x150a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x150a1c: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x150a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x150a20: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x150a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x150a24: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x150a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x150a28: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x150a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x150a2c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x150a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x150a30: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150a30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x150a34: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x150a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x150a38: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x150a38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x150a3c: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x150A3Cu;
    SET_GPR_U32(ctx, 31, 0x150A44u);
    ctx->pc = 0x150A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150A3Cu;
            // 0x150a40: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150A44u; }
        if (ctx->pc != 0x150A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150A44u; }
        if (ctx->pc != 0x150A44u) { return; }
    }
    ctx->pc = 0x150A44u;
    // 0x150a44: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x150a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x150a48: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x150a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x150a4c: 0xc42099a8  lwc1        $f0, -0x6658($at)
    ctx->pc = 0x150a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150a50: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x150a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x150a54: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x150a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x150a58: 0x3a900  sll         $s5, $v1, 4
    ctx->pc = 0x150a58u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x150a5c: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x150a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x150a60: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x150a60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x150a64: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x150a64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x150a68: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x150a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x150a6c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x150a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x150a70: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x150a70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x150a74: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x150a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x150a78: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150a78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x150a7c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x150a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x150a80: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x150a80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x150a84: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x150a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x150a88: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x150a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x150a8c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x150a8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x150a90: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x150A90u;
    SET_GPR_U32(ctx, 31, 0x150A98u);
    ctx->pc = 0x150A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150A90u;
            // 0x150a94: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150A98u; }
        if (ctx->pc != 0x150A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150A98u; }
        if (ctx->pc != 0x150A98u) { return; }
    }
    ctx->pc = 0x150A98u;
    // 0x150a98: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x150A98u;
    {
        const bool branch_taken_0x150a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150a98) {
            ctx->pc = 0x150B30u;
            goto label_150b30;
        }
    }
    ctx->pc = 0x150AA0u;
label_150aa0:
    // 0x150aa0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x150aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x150aa4: 0xc42099a8  lwc1        $f0, -0x6658($at)
    ctx->pc = 0x150aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150aa8: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x150aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x150aac: 0x129940  sll         $s3, $s2, 5
    ctx->pc = 0x150aacu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x150ab0: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x150ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x150ab4: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x150ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x150ab8: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x150ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x150abc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x150abcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x150ac0: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x150ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x150ac4: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x150ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x150ac8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150ac8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x150acc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x150accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x150ad0: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x150ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x150ad4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x150ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x150ad8: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x150ad8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x150adc: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x150ADCu;
    SET_GPR_U32(ctx, 31, 0x150AE4u);
    ctx->pc = 0x150AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150ADCu;
            // 0x150ae0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150AE4u; }
        if (ctx->pc != 0x150AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150AE4u; }
        if (ctx->pc != 0x150AE4u) { return; }
    }
    ctx->pc = 0x150AE4u;
    // 0x150ae4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x150ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x150ae8: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x150ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x150aec: 0xc42099a8  lwc1        $f0, -0x6658($at)
    ctx->pc = 0x150aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150af0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x150af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x150af4: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x150af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x150af8: 0x3a900  sll         $s5, $v1, 4
    ctx->pc = 0x150af8u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x150afc: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x150afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x150b00: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x150b00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x150b04: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x150b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x150b08: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x150b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x150b0c: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x150b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x150b10: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x150b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x150b14: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150b14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x150b18: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x150b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x150b1c: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x150b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x150b20: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x150b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x150b24: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x150b24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x150b28: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x150B28u;
    SET_GPR_U32(ctx, 31, 0x150B30u);
    ctx->pc = 0x150B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150B28u;
            // 0x150b2c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150B30u; }
        if (ctx->pc != 0x150B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150B30u; }
        if (ctx->pc != 0x150B30u) { return; }
    }
    ctx->pc = 0x150B30u;
label_150b30:
    // 0x150b30: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x150b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x150b34: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x150b34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x150b38: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x150b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x150b3c: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x150b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x150b40: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x150B40u;
    SET_GPR_U32(ctx, 31, 0x150B48u);
    ctx->pc = 0x150B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150B40u;
            // 0x150b44: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150B48u; }
        if (ctx->pc != 0x150B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150B48u; }
        if (ctx->pc != 0x150B48u) { return; }
    }
    ctx->pc = 0x150B48u;
    // 0x150b48: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x150b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x150b4c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x150b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x150b50: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x150b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x150b54: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x150b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x150b58: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x150b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x150b5c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x150b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x150b60: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x150b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x150b64: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x150b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x150b68: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x150B68u;
    SET_GPR_U32(ctx, 31, 0x150B70u);
    ctx->pc = 0x150B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150B68u;
            // 0x150b6c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150B70u; }
        if (ctx->pc != 0x150B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150B70u; }
        if (ctx->pc != 0x150B70u) { return; }
    }
    ctx->pc = 0x150B70u;
    // 0x150b70: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x150b70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x150b74: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x150b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x150b78: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x150b78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x150b7c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x150b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x150b80: 0x24420160  addiu       $v0, $v0, 0x160
    ctx->pc = 0x150b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x150b84: 0x24a598c0  addiu       $a1, $a1, -0x6740
    ctx->pc = 0x150b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940864));
    // 0x150b88: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x150b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150b8c: 0x8cc20078  lw          $v0, 0x78($a2)
    ctx->pc = 0x150b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x150b90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x150b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x150b94: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x150b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x150b98: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x150b98u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150b9c: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x150b9cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x150ba0: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x150ba0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x150ba4: 0xc0546b4  jal         func_151AD0
    ctx->pc = 0x150BA4u;
    SET_GPR_U32(ctx, 31, 0x150BACu);
    ctx->pc = 0x150BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150BA4u;
            // 0x150ba8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AD0u;
    if (runtime->hasFunction(0x151AD0u)) {
        auto targetFn = runtime->lookupFunction(0x151AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150BACu; }
        if (ctx->pc != 0x150BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x151ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150BACu; }
        if (ctx->pc != 0x150BACu) { return; }
    }
    ctx->pc = 0x150BACu;
    // 0x150bac: 0x1000033a  b           . + 4 + (0x33A << 2)
    ctx->pc = 0x150BACu;
    {
        const bool branch_taken_0x150bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150BACu;
            // 0x150bb0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150bac) {
            ctx->pc = 0x151898u;
            goto label_151898;
        }
    }
    ctx->pc = 0x150BB4u;
    // 0x150bb4: 0x0  nop
    ctx->pc = 0x150bb4u;
    // NOP
label_150bb8:
    // 0x150bb8: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x150bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x150bbc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x150bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150bc0: 0xc05c00c  jal         func_170030
    ctx->pc = 0x150BC0u;
    SET_GPR_U32(ctx, 31, 0x150BC8u);
    ctx->pc = 0x150BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150BC0u;
            // 0x150bc4: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150BC8u; }
        if (ctx->pc != 0x150BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150BC8u; }
        if (ctx->pc != 0x150BC8u) { return; }
    }
    ctx->pc = 0x150BC8u;
    // 0x150bc8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x150bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x150bcc: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x150bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
    // 0x150bd0: 0xc42199a8  lwc1        $f1, -0x6658($at)
    ctx->pc = 0x150bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150bd4: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x150bd4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)16384u)));
    // 0x150bd8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x150bd8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150bdc: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x150bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x150be0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x150be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150be4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x150be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150be8: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x150be8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x150bec: 0x129940  sll         $s3, $s2, 5
    ctx->pc = 0x150becu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x150bf0: 0x24632160  addiu       $v1, $v1, 0x2160
    ctx->pc = 0x150bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8544));
    // 0x150bf4: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x150bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x150bf8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x150bf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x150bfc: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x150bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x150c00: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x150c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x150c04: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x150c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x150c08: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150c08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x150c0c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x150c0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x150c10: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x150C10u;
    SET_GPR_U32(ctx, 31, 0x150C18u);
    ctx->pc = 0x150C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150C10u;
            // 0x150c14: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150C18u; }
        if (ctx->pc != 0x150C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150C18u; }
        if (ctx->pc != 0x150C18u) { return; }
    }
    ctx->pc = 0x150C18u;
    // 0x150c18: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x150c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x150c1c: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x150c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x150c20: 0xc42199a8  lwc1        $f1, -0x6658($at)
    ctx->pc = 0x150c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150c24: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x150c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x150c28: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x150c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x150c2c: 0x3a900  sll         $s5, $v1, 4
    ctx->pc = 0x150c2cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x150c30: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x150c30u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16384u)));
    // 0x150c34: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x150c34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x150c38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150c3c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x150c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x150c40: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x150c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x150c44: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x150c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x150c48: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x150c48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x150c4c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x150c4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x150c50: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x150c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x150c54: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x150c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x150c58: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x150c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x150c5c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x150c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x150c60: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x150c60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x150c64: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150c64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x150c68: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x150c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x150c6c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x150c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x150c70: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x150c70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x150c74: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x150C74u;
    SET_GPR_U32(ctx, 31, 0x150C7Cu);
    ctx->pc = 0x150C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150C74u;
            // 0x150c78: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150C7Cu; }
        if (ctx->pc != 0x150C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150C7Cu; }
        if (ctx->pc != 0x150C7Cu) { return; }
    }
    ctx->pc = 0x150C7Cu;
    // 0x150c7c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x150c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x150c80: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x150c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x150c84: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x150c84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x150c88: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x150c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x150c8c: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x150C8Cu;
    SET_GPR_U32(ctx, 31, 0x150C94u);
    ctx->pc = 0x150C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150C8Cu;
            // 0x150c90: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150C94u; }
        if (ctx->pc != 0x150C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150C94u; }
        if (ctx->pc != 0x150C94u) { return; }
    }
    ctx->pc = 0x150C94u;
    // 0x150c94: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x150c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x150c98: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x150c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x150c9c: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x150c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x150ca0: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x150ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x150ca4: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x150ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x150ca8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x150ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x150cac: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x150cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x150cb0: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x150cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x150cb4: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x150CB4u;
    SET_GPR_U32(ctx, 31, 0x150CBCu);
    ctx->pc = 0x150CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150CB4u;
            // 0x150cb8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150CBCu; }
        if (ctx->pc != 0x150CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150CBCu; }
        if (ctx->pc != 0x150CBCu) { return; }
    }
    ctx->pc = 0x150CBCu;
    // 0x150cbc: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x150cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x150cc0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x150cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x150cc4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x150cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x150cc8: 0x24420160  addiu       $v0, $v0, 0x160
    ctx->pc = 0x150cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x150ccc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x150cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150cd0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x150cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150cd4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x150cd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150cd8: 0xc0546b4  jal         func_151AD0
    ctx->pc = 0x150CD8u;
    SET_GPR_U32(ctx, 31, 0x150CE0u);
    ctx->pc = 0x150CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150CD8u;
            // 0x150cdc: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AD0u;
    if (runtime->hasFunction(0x151AD0u)) {
        auto targetFn = runtime->lookupFunction(0x151AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150CE0u; }
        if (ctx->pc != 0x150CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x151ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150CE0u; }
        if (ctx->pc != 0x150CE0u) { return; }
    }
    ctx->pc = 0x150CE0u;
    // 0x150ce0: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x150ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x150ce4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x150ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150ce8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x150ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x150cec: 0xc05c00c  jal         func_170030
    ctx->pc = 0x150CECu;
    SET_GPR_U32(ctx, 31, 0x150CF4u);
    ctx->pc = 0x150CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150CECu;
            // 0x150cf0: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150CF4u; }
        if (ctx->pc != 0x150CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150CF4u; }
        if (ctx->pc != 0x150CF4u) { return; }
    }
    ctx->pc = 0x150CF4u;
    // 0x150cf4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x150cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x150cf8: 0x3c04459c  lui         $a0, 0x459C
    ctx->pc = 0x150cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17820 << 16));
    // 0x150cfc: 0xc42199a8  lwc1        $f1, -0x6658($at)
    ctx->pc = 0x150cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150d00: 0x34854000  ori         $a1, $a0, 0x4000
    ctx->pc = 0x150d00u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)16384u)));
    // 0x150d04: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x150d04u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150d08: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x150d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x150d0c: 0x39940  sll         $s3, $v1, 5
    ctx->pc = 0x150d0cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x150d10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x150d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150d14: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x150d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150d18: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x150d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x150d1c: 0x24632160  addiu       $v1, $v1, 0x2160
    ctx->pc = 0x150d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8544));
    // 0x150d20: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x150d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x150d24: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x150d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x150d28: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x150d28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x150d2c: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x150d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x150d30: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x150d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x150d34: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150d34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x150d38: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x150d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x150d3c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x150d3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x150d40: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x150D40u;
    SET_GPR_U32(ctx, 31, 0x150D48u);
    ctx->pc = 0x150D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150D40u;
            // 0x150d44: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D48u; }
        if (ctx->pc != 0x150D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D48u; }
        if (ctx->pc != 0x150D48u) { return; }
    }
    ctx->pc = 0x150D48u;
    // 0x150d48: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x150d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x150d4c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x150d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x150d50: 0xc42199a8  lwc1        $f1, -0x6658($at)
    ctx->pc = 0x150d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150d54: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x150d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x150d58: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x150d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x150d5c: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x150d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x150d60: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x150d60u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16384u)));
    // 0x150d64: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x150d64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x150d68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x150d68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150d6c: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x150d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x150d70: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x150d70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x150d74: 0x4a900  sll         $s5, $a0, 4
    ctx->pc = 0x150d74u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x150d78: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x150d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x150d7c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x150d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x150d80: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x150d80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x150d84: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x150d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x150d88: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x150d88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x150d8c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x150d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x150d90: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x150d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x150d94: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150d94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x150d98: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x150d98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x150d9c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x150d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x150da0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x150da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x150da4: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x150da4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x150da8: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x150DA8u;
    SET_GPR_U32(ctx, 31, 0x150DB0u);
    ctx->pc = 0x150DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150DA8u;
            // 0x150dac: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150DB0u; }
        if (ctx->pc != 0x150DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150DB0u; }
        if (ctx->pc != 0x150DB0u) { return; }
    }
    ctx->pc = 0x150DB0u;
    // 0x150db0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x150db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x150db4: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x150db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x150db8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x150db8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x150dbc: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x150dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x150dc0: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x150DC0u;
    SET_GPR_U32(ctx, 31, 0x150DC8u);
    ctx->pc = 0x150DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150DC0u;
            // 0x150dc4: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150DC8u; }
        if (ctx->pc != 0x150DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150DC8u; }
        if (ctx->pc != 0x150DC8u) { return; }
    }
    ctx->pc = 0x150DC8u;
    // 0x150dc8: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x150dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x150dcc: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x150dccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x150dd0: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x150dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x150dd4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x150dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x150dd8: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x150dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x150ddc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x150ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x150de0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x150de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x150de4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x150de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x150de8: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x150DE8u;
    SET_GPR_U32(ctx, 31, 0x150DF0u);
    ctx->pc = 0x150DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150DE8u;
            // 0x150dec: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150DF0u; }
        if (ctx->pc != 0x150DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150DF0u; }
        if (ctx->pc != 0x150DF0u) { return; }
    }
    ctx->pc = 0x150DF0u;
    // 0x150df0: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x150df0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x150df4: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x150df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x150df8: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x150df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x150dfc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x150dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x150e00: 0x24420160  addiu       $v0, $v0, 0x160
    ctx->pc = 0x150e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x150e04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x150e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x150e08: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x150e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150e0c: 0x24a598e0  addiu       $a1, $a1, -0x6720
    ctx->pc = 0x150e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940896));
    // 0x150e10: 0x8cc20078  lw          $v0, 0x78($a2)
    ctx->pc = 0x150e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x150e14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x150e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x150e18: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x150e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x150e1c: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x150e1cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150e20: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x150e20u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x150e24: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x150e24u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x150e28: 0xc0546b4  jal         func_151AD0
    ctx->pc = 0x150E28u;
    SET_GPR_U32(ctx, 31, 0x150E30u);
    ctx->pc = 0x150E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150E28u;
            // 0x150e2c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AD0u;
    if (runtime->hasFunction(0x151AD0u)) {
        auto targetFn = runtime->lookupFunction(0x151AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150E30u; }
        if (ctx->pc != 0x150E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x151ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150E30u; }
        if (ctx->pc != 0x150E30u) { return; }
    }
    ctx->pc = 0x150E30u;
    // 0x150e30: 0x10000299  b           . + 4 + (0x299 << 2)
    ctx->pc = 0x150E30u;
    {
        const bool branch_taken_0x150e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150E30u;
            // 0x150e34: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e30) {
            ctx->pc = 0x151898u;
            goto label_151898;
        }
    }
    ctx->pc = 0x150E38u;
label_150e38:
    // 0x150e38: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x150e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x150e3c: 0xc05c00c  jal         func_170030
    ctx->pc = 0x150E3Cu;
    SET_GPR_U32(ctx, 31, 0x150E44u);
    ctx->pc = 0x150E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150E3Cu;
            // 0x150e40: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150E44u; }
        if (ctx->pc != 0x150E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150E44u; }
        if (ctx->pc != 0x150E44u) { return; }
    }
    ctx->pc = 0x150E44u;
    // 0x150e44: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x150e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x150e48: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x150e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x150e4c: 0xc42099a8  lwc1        $f0, -0x6658($at)
    ctx->pc = 0x150e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150e50: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x150e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150e54: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x150e54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150e58: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x150e58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150e5c: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x150e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x150e60: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x150e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x150e64: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x150e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x150e68: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x150e68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x150e6c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x150e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x150e70: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x150e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x150e74: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150e74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x150e78: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x150e78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x150e7c: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x150E7Cu;
    SET_GPR_U32(ctx, 31, 0x150E84u);
    ctx->pc = 0x150E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150E7Cu;
            // 0x150e80: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150E84u; }
        if (ctx->pc != 0x150E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150E84u; }
        if (ctx->pc != 0x150E84u) { return; }
    }
    ctx->pc = 0x150E84u;
    // 0x150e84: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x150e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x150e88: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x150e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x150e8c: 0xc42099a8  lwc1        $f0, -0x6658($at)
    ctx->pc = 0x150e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150e90: 0x1e8100  sll         $s0, $fp, 4
    ctx->pc = 0x150e90u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x150e94: 0x2442e160  addiu       $v0, $v0, -0x1EA0
    ctx->pc = 0x150e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x150e98: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x150e98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x150e9c: 0x50a821  addu        $s5, $v0, $s0
    ctx->pc = 0x150e9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x150ea0: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x150ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x150ea4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x150ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x150ea8: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x150ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x150eac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x150eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150eb0: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x150eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x150eb4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x150eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x150eb8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x150eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150ebc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x150ebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x150ec0: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x150ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x150ec4: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x150ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x150ec8: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x150ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x150ecc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150eccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x150ed0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x150ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x150ed4: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x150ed4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x150ed8: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x150ED8u;
    SET_GPR_U32(ctx, 31, 0x150EE0u);
    ctx->pc = 0x150EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150ED8u;
            // 0x150edc: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150EE0u; }
        if (ctx->pc != 0x150EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150EE0u; }
        if (ctx->pc != 0x150EE0u) { return; }
    }
    ctx->pc = 0x150EE0u;
    // 0x150ee0: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x150ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x150ee4: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x150ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x150ee8: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x150EE8u;
    SET_GPR_U32(ctx, 31, 0x150EF0u);
    ctx->pc = 0x150EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150EE8u;
            // 0x150eec: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150EF0u; }
        if (ctx->pc != 0x150EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150EF0u; }
        if (ctx->pc != 0x150EF0u) { return; }
    }
    ctx->pc = 0x150EF0u;
    // 0x150ef0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x150ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x150ef4: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x150ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x150ef8: 0x2442e160  addiu       $v0, $v0, -0x1EA0
    ctx->pc = 0x150ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x150efc: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x150efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x150f00: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x150f00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x150f04: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x150f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x150f08: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x150f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x150f0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150f10: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x150f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x150f14: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x150F14u;
    SET_GPR_U32(ctx, 31, 0x150F1Cu);
    ctx->pc = 0x150F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150F14u;
            // 0x150f18: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F1Cu; }
        if (ctx->pc != 0x150F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F1Cu; }
        if (ctx->pc != 0x150F1Cu) { return; }
    }
    ctx->pc = 0x150F1Cu;
    // 0x150f1c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x150f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x150f20: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x150f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x150f24: 0x24429900  addiu       $v0, $v0, -0x6700
    ctx->pc = 0x150f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940928));
    // 0x150f28: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x150f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x150f2c: 0x8c630078  lw          $v1, 0x78($v1)
    ctx->pc = 0x150f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x150f30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x150f30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x150f34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x150f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150f38: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x150f38u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150f3c: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x150f3cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x150f40: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x150f40u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x150f44: 0xc0546b4  jal         func_151AD0
    ctx->pc = 0x150F44u;
    SET_GPR_U32(ctx, 31, 0x150F4Cu);
    ctx->pc = 0x150F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150F44u;
            // 0x150f48: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AD0u;
    if (runtime->hasFunction(0x151AD0u)) {
        auto targetFn = runtime->lookupFunction(0x151AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F4Cu; }
        if (ctx->pc != 0x150F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x151ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F4Cu; }
        if (ctx->pc != 0x150F4Cu) { return; }
    }
    ctx->pc = 0x150F4Cu;
    // 0x150f4c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x150f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x150f50: 0xc05c00c  jal         func_170030
    ctx->pc = 0x150F50u;
    SET_GPR_U32(ctx, 31, 0x150F58u);
    ctx->pc = 0x150F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150F50u;
            // 0x150f54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F58u; }
        if (ctx->pc != 0x150F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F58u; }
        if (ctx->pc != 0x150F58u) { return; }
    }
    ctx->pc = 0x150F58u;
    // 0x150f58: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x150f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x150f5c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x150f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x150f60: 0xc42099a8  lwc1        $f0, -0x6658($at)
    ctx->pc = 0x150f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150f64: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x150f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150f68: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x150f68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150f6c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x150f6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150f70: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x150f70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x150f74: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x150f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x150f78: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x150f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x150f7c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x150f7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x150f80: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x150f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x150f84: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x150f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x150f88: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150f88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x150f8c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x150f8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x150f90: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x150F90u;
    SET_GPR_U32(ctx, 31, 0x150F98u);
    ctx->pc = 0x150F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150F90u;
            // 0x150f94: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F98u; }
        if (ctx->pc != 0x150F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F98u; }
        if (ctx->pc != 0x150F98u) { return; }
    }
    ctx->pc = 0x150F98u;
    // 0x150f98: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x150f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x150f9c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x150f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x150fa0: 0xc42099a8  lwc1        $f0, -0x6658($at)
    ctx->pc = 0x150fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150fa4: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x150fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x150fa8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x150fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150fac: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x150facu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x150fb0: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x150fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x150fb4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x150fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150fb8: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x150fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x150fbc: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x150fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x150fc0: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x150fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x150fc4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x150fc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x150fc8: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x150fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x150fcc: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x150fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x150fd0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x150fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x150fd4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150fd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x150fd8: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x150fd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x150fdc: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x150FDCu;
    SET_GPR_U32(ctx, 31, 0x150FE4u);
    ctx->pc = 0x150FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150FDCu;
            // 0x150fe0: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150FE4u; }
        if (ctx->pc != 0x150FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150FE4u; }
        if (ctx->pc != 0x150FE4u) { return; }
    }
    ctx->pc = 0x150FE4u;
    // 0x150fe4: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x150fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x150fe8: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x150fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x150fec: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x150FECu;
    SET_GPR_U32(ctx, 31, 0x150FF4u);
    ctx->pc = 0x150FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150FECu;
            // 0x150ff0: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150FF4u; }
        if (ctx->pc != 0x150FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150FF4u; }
        if (ctx->pc != 0x150FF4u) { return; }
    }
    ctx->pc = 0x150FF4u;
    // 0x150ff4: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x150ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x150ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150ffc: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x150ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x151000: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x151000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x151004: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x151004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x151008: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x151008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15100c: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x15100Cu;
    SET_GPR_U32(ctx, 31, 0x151014u);
    ctx->pc = 0x151010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15100Cu;
            // 0x151010: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151014u; }
        if (ctx->pc != 0x151014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151014u; }
        if (ctx->pc != 0x151014u) { return; }
    }
    ctx->pc = 0x151014u;
    // 0x151014: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x151014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x151018: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x151018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x15101c: 0x24429900  addiu       $v0, $v0, -0x6700
    ctx->pc = 0x15101cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940928));
    // 0x151020: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x151020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x151024: 0x8c630078  lw          $v1, 0x78($v1)
    ctx->pc = 0x151024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x151028: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x151028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15102c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15102cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x151030: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x151030u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151034: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x151034u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x151038: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x151038u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x15103c: 0xc0546b4  jal         func_151AD0
    ctx->pc = 0x15103Cu;
    SET_GPR_U32(ctx, 31, 0x151044u);
    ctx->pc = 0x151040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15103Cu;
            // 0x151040: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AD0u;
    if (runtime->hasFunction(0x151AD0u)) {
        auto targetFn = runtime->lookupFunction(0x151AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151044u; }
        if (ctx->pc != 0x151044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x151ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151044u; }
        if (ctx->pc != 0x151044u) { return; }
    }
    ctx->pc = 0x151044u;
    // 0x151044: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x151044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x151048: 0xc05c00c  jal         func_170030
    ctx->pc = 0x151048u;
    SET_GPR_U32(ctx, 31, 0x151050u);
    ctx->pc = 0x15104Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151048u;
            // 0x15104c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151050u; }
        if (ctx->pc != 0x151050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151050u; }
        if (ctx->pc != 0x151050u) { return; }
    }
    ctx->pc = 0x151050u;
    // 0x151050: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x151050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x151054: 0x26230002  addiu       $v1, $s1, 0x2
    ctx->pc = 0x151054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x151058: 0xc42099a8  lwc1        $f0, -0x6658($at)
    ctx->pc = 0x151058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15105c: 0x39940  sll         $s3, $v1, 5
    ctx->pc = 0x15105cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x151060: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x151060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x151064: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x151064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151068: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x151068u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15106c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15106cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151070: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x151070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x151074: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x151074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x151078: 0x2463e160  addiu       $v1, $v1, -0x1EA0
    ctx->pc = 0x151078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959456));
    // 0x15107c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15107cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x151080: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x151080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x151084: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x151084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x151088: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x151088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x15108c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15108cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x151090: 0x24a5ffd8  addiu       $a1, $a1, -0x28
    ctx->pc = 0x151090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967256));
    // 0x151094: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x151094u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x151098: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x151098u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x15109c: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x15109Cu;
    SET_GPR_U32(ctx, 31, 0x1510A4u);
    ctx->pc = 0x1510A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15109Cu;
            // 0x1510a0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1510A4u; }
        if (ctx->pc != 0x1510A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1510A4u; }
        if (ctx->pc != 0x1510A4u) { return; }
    }
    ctx->pc = 0x1510A4u;
    // 0x1510a4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1510a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1510a8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1510a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1510ac: 0xc42099a8  lwc1        $f0, -0x6658($at)
    ctx->pc = 0x1510acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1510b0: 0x26220002  addiu       $v0, $s1, 0x2
    ctx->pc = 0x1510b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1510b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1510b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1510b8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1510b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1510bc: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1510bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1510c0: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x1510c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1510c4: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1510c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1510c8: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1510c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1510cc: 0x2442e160  addiu       $v0, $v0, -0x1EA0
    ctx->pc = 0x1510ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x1510d0: 0x4a900  sll         $s5, $a0, 4
    ctx->pc = 0x1510d0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1510d4: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x1510d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1510d8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1510d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1510dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1510dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1510e0: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x1510e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1510e4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1510e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1510e8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1510e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1510ec: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x1510ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1510f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1510f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1510f4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1510f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1510f8: 0x24a50028  addiu       $a1, $a1, 0x28
    ctx->pc = 0x1510f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x1510fc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1510fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x151100: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x151100u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x151104: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x151104u;
    SET_GPR_U32(ctx, 31, 0x15110Cu);
    ctx->pc = 0x151108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151104u;
            // 0x151108: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15110Cu; }
        if (ctx->pc != 0x15110Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15110Cu; }
        if (ctx->pc != 0x15110Cu) { return; }
    }
    ctx->pc = 0x15110Cu;
    // 0x15110c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15110cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x151110: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x151110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x151114: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x151114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x151118: 0x2442e160  addiu       $v0, $v0, -0x1EA0
    ctx->pc = 0x151118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x15111c: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x15111Cu;
    SET_GPR_U32(ctx, 31, 0x151124u);
    ctx->pc = 0x151120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15111Cu;
            // 0x151120: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151124u; }
        if (ctx->pc != 0x151124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151124u; }
        if (ctx->pc != 0x151124u) { return; }
    }
    ctx->pc = 0x151124u;
    // 0x151124: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x151124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x151128: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x151128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15112c: 0x2442e160  addiu       $v0, $v0, -0x1EA0
    ctx->pc = 0x15112cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x151130: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x151130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x151134: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x151134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x151138: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x151138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15113c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15113cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x151140: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x151140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x151144: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x151144u;
    SET_GPR_U32(ctx, 31, 0x15114Cu);
    ctx->pc = 0x151148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151144u;
            // 0x151148: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15114Cu; }
        if (ctx->pc != 0x15114Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15114Cu; }
        if (ctx->pc != 0x15114Cu) { return; }
    }
    ctx->pc = 0x15114Cu;
    // 0x15114c: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x15114cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x151150: 0x26230002  addiu       $v1, $s1, 0x2
    ctx->pc = 0x151150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x151154: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x151154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x151158: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x151158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x15115c: 0x2442c160  addiu       $v0, $v0, -0x3EA0
    ctx->pc = 0x15115cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951264));
    // 0x151160: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x151160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x151164: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x151164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x151168: 0x24a59900  addiu       $a1, $a1, -0x6700
    ctx->pc = 0x151168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940928));
    // 0x15116c: 0x8cc20078  lw          $v0, 0x78($a2)
    ctx->pc = 0x15116cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x151170: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x151170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x151174: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x151174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x151178: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x151178u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15117c: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x15117cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x151180: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x151180u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x151184: 0xc0546b4  jal         func_151AD0
    ctx->pc = 0x151184u;
    SET_GPR_U32(ctx, 31, 0x15118Cu);
    ctx->pc = 0x151188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151184u;
            // 0x151188: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AD0u;
    if (runtime->hasFunction(0x151AD0u)) {
        auto targetFn = runtime->lookupFunction(0x151AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15118Cu; }
        if (ctx->pc != 0x15118Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x151ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15118Cu; }
        if (ctx->pc != 0x15118Cu) { return; }
    }
    ctx->pc = 0x15118Cu;
    // 0x15118c: 0x100001c2  b           . + 4 + (0x1C2 << 2)
    ctx->pc = 0x15118Cu;
    {
        const bool branch_taken_0x15118c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15118Cu;
            // 0x151190: 0x26310003  addiu       $s1, $s1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15118c) {
            ctx->pc = 0x151898u;
            goto label_151898;
        }
    }
    ctx->pc = 0x151194u;
    // 0x151194: 0x0  nop
    ctx->pc = 0x151194u;
    // NOP
label_151198:
    // 0x151198: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x151198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15119c: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15119Cu;
    SET_GPR_U32(ctx, 31, 0x1511A4u);
    ctx->pc = 0x1511A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15119Cu;
            // 0x1511a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1511A4u; }
        if (ctx->pc != 0x1511A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1511A4u; }
        if (ctx->pc != 0x1511A4u) { return; }
    }
    ctx->pc = 0x1511A4u;
    // 0x1511a4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1511a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1511a8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1511a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1511ac: 0xc42099a8  lwc1        $f0, -0x6658($at)
    ctx->pc = 0x1511acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1511b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1511b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1511b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1511b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1511b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1511b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1511bc: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x1511bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1511c0: 0x119940  sll         $s3, $s1, 5
    ctx->pc = 0x1511c0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x1511c4: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1511c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x1511c8: 0x8e870038  lw          $a3, 0x38($s4)
    ctx->pc = 0x1511c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x1511cc: 0x2463e160  addiu       $v1, $v1, -0x1EA0
    ctx->pc = 0x1511ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959456));
    // 0x1511d0: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x1511d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1511d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1511d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1511d8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1511d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1511dc: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x1511dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1511e0: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1511e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1511e4: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x1511e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1511e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1511e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1511ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1511ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1511f0: 0x473023  subu        $a2, $v0, $a3
    ctx->pc = 0x1511f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1511f4: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1511f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1511f8: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x1511F8u;
    SET_GPR_U32(ctx, 31, 0x151200u);
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151200u; }
        if (ctx->pc != 0x151200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151200u; }
        if (ctx->pc != 0x151200u) { return; }
    }
    ctx->pc = 0x151200u;
    // 0x151200: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x151200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x151204: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x151204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x151208: 0xc42099a8  lwc1        $f0, -0x6658($at)
    ctx->pc = 0x151208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15120c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x15120cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x151210: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x151210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x151214: 0x3a900  sll         $s5, $v1, 4
    ctx->pc = 0x151214u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x151218: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x151218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15121c: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x15121cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x151220: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x151220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151224: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x151224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x151228: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x151228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x15122c: 0x2442e160  addiu       $v0, $v0, -0x1EA0
    ctx->pc = 0x15122cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x151230: 0x8e870038  lw          $a3, 0x38($s4)
    ctx->pc = 0x151230u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x151234: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x151234u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x151238: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x151238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x15123c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x15123cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x151240: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x151240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x151244: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x151244u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x151248: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x151248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x15124c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15124cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x151250: 0xe23021  addu        $a2, $a3, $v0
    ctx->pc = 0x151250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x151254: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x151254u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x151258: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x151258u;
    SET_GPR_U32(ctx, 31, 0x151260u);
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151260u; }
        if (ctx->pc != 0x151260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151260u; }
        if (ctx->pc != 0x151260u) { return; }
    }
    ctx->pc = 0x151260u;
    // 0x151260: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x151260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x151264: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x151264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x151268: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x151268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15126c: 0x2442e160  addiu       $v0, $v0, -0x1EA0
    ctx->pc = 0x15126cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x151270: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x151270u;
    SET_GPR_U32(ctx, 31, 0x151278u);
    ctx->pc = 0x151274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151270u;
            // 0x151274: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151278u; }
        if (ctx->pc != 0x151278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151278u; }
        if (ctx->pc != 0x151278u) { return; }
    }
    ctx->pc = 0x151278u;
    // 0x151278: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x151278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x15127c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15127cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x151280: 0x2442e160  addiu       $v0, $v0, -0x1EA0
    ctx->pc = 0x151280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x151284: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x151284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x151288: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x151288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x15128c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15128cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x151290: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x151290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x151294: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x151294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x151298: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x151298u;
    SET_GPR_U32(ctx, 31, 0x1512A0u);
    ctx->pc = 0x15129Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151298u;
            // 0x15129c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1512A0u; }
        if (ctx->pc != 0x1512A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1512A0u; }
        if (ctx->pc != 0x1512A0u) { return; }
    }
    ctx->pc = 0x1512A0u;
    // 0x1512a0: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x1512a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1512a4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1512a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1512a8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1512a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1512ac: 0x2442c160  addiu       $v0, $v0, -0x3EA0
    ctx->pc = 0x1512acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951264));
    // 0x1512b0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1512b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1512b4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1512b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1512b8: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x1512b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x1512bc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1512bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1512c0: 0x24a59900  addiu       $a1, $a1, -0x6700
    ctx->pc = 0x1512c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940928));
    // 0x1512c4: 0x8cc60078  lw          $a2, 0x78($a2)
    ctx->pc = 0x1512c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x1512c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1512c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1512cc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1512ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1512d0: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x1512d0u;
    SET_GPR_VEC(ctx, 8, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x1512d4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1512d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1512d8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1512d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1512dc: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x1512dcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1512e0: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x1512e0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1512e4: 0xc0546b4  jal         func_151AD0
    ctx->pc = 0x1512E4u;
    SET_GPR_U32(ctx, 31, 0x1512ECu);
    ctx->pc = 0x1512E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1512E4u;
            // 0x1512e8: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AD0u;
    if (runtime->hasFunction(0x151AD0u)) {
        auto targetFn = runtime->lookupFunction(0x151AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1512ECu; }
        if (ctx->pc != 0x1512ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x151ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1512ECu; }
        if (ctx->pc != 0x1512ECu) { return; }
    }
    ctx->pc = 0x1512ECu;
    // 0x1512ec: 0x1000016a  b           . + 4 + (0x16A << 2)
    ctx->pc = 0x1512ECu;
    {
        const bool branch_taken_0x1512ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1512F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1512ECu;
            // 0x1512f0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1512ec) {
            ctx->pc = 0x151898u;
            goto label_151898;
        }
    }
    ctx->pc = 0x1512F4u;
    // 0x1512f4: 0x0  nop
    ctx->pc = 0x1512f4u;
    // NOP
label_1512f8:
    // 0x1512f8: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x1512f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1512fc: 0xc05c00c  jal         func_170030
    ctx->pc = 0x1512FCu;
    SET_GPR_U32(ctx, 31, 0x151304u);
    ctx->pc = 0x151300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1512FCu;
            // 0x151300: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151304u; }
        if (ctx->pc != 0x151304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151304u; }
        if (ctx->pc != 0x151304u) { return; }
    }
    ctx->pc = 0x151304u;
    // 0x151304: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x151304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x151308: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x151308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15130c: 0xc42099a8  lwc1        $f0, -0x6658($at)
    ctx->pc = 0x15130cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151310: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x151310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x151314: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x151314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x151318: 0x129940  sll         $s3, $s2, 5
    ctx->pc = 0x151318u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x15131c: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x15131cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x151320: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x151320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x151324: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x151324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x151328: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x151328u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x15132c: 0x2465fff4  addiu       $a1, $v1, -0xC
    ctx->pc = 0x15132cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    // 0x151330: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x151330u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x151334: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x151334u;
    SET_GPR_U32(ctx, 31, 0x15133Cu);
    ctx->pc = 0x151338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151334u;
            // 0x151338: 0x2446ffd6  addiu       $a2, $v0, -0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967254));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15133Cu; }
        if (ctx->pc != 0x15133Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15133Cu; }
        if (ctx->pc != 0x15133Cu) { return; }
    }
    ctx->pc = 0x15133Cu;
    // 0x15133c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15133cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x151340: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x151340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x151344: 0xc42099a8  lwc1        $f0, -0x6658($at)
    ctx->pc = 0x151344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151348: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x151348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15134c: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x15134cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x151350: 0x3a900  sll         $s5, $v1, 4
    ctx->pc = 0x151350u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x151354: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x151354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x151358: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x151358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x15135c: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x15135cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x151360: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x151360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x151364: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x151364u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x151368: 0x24650018  addiu       $a1, $v1, 0x18
    ctx->pc = 0x151368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x15136c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x15136cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x151370: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x151370u;
    SET_GPR_U32(ctx, 31, 0x151378u);
    ctx->pc = 0x151374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151370u;
            // 0x151374: 0x2446fff6  addiu       $a2, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151378u; }
        if (ctx->pc != 0x151378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151378u; }
        if (ctx->pc != 0x151378u) { return; }
    }
    ctx->pc = 0x151378u;
    // 0x151378: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x151378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15137c: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x15137cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x151380: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x151380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x151384: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x151384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x151388: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x151388u;
    SET_GPR_U32(ctx, 31, 0x151390u);
    ctx->pc = 0x15138Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151388u;
            // 0x15138c: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151390u; }
        if (ctx->pc != 0x151390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151390u; }
        if (ctx->pc != 0x151390u) { return; }
    }
    ctx->pc = 0x151390u;
    // 0x151390: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x151390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x151394: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x151394u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x151398: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x151398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x15139c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15139cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1513a0: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x1513a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1513a4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1513a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1513a8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1513a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1513ac: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1513acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1513b0: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x1513B0u;
    SET_GPR_U32(ctx, 31, 0x1513B8u);
    ctx->pc = 0x1513B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1513B0u;
            // 0x1513b4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1513B8u; }
        if (ctx->pc != 0x1513B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1513B8u; }
        if (ctx->pc != 0x1513B8u) { return; }
    }
    ctx->pc = 0x1513B8u;
    // 0x1513b8: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x1513b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1513bc: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x1513bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x1513c0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1513c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1513c4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1513c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1513c8: 0x24420160  addiu       $v0, $v0, 0x160
    ctx->pc = 0x1513c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x1513cc: 0x24a598c0  addiu       $a1, $a1, -0x6740
    ctx->pc = 0x1513ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940864));
    // 0x1513d0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1513d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1513d4: 0x8cc20078  lw          $v0, 0x78($a2)
    ctx->pc = 0x1513d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x1513d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1513d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1513dc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1513dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1513e0: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1513e0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1513e4: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x1513e4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1513e8: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x1513e8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1513ec: 0xc0546b4  jal         func_151AD0
    ctx->pc = 0x1513ECu;
    SET_GPR_U32(ctx, 31, 0x1513F4u);
    ctx->pc = 0x1513F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1513ECu;
            // 0x1513f0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AD0u;
    if (runtime->hasFunction(0x151AD0u)) {
        auto targetFn = runtime->lookupFunction(0x151AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1513F4u; }
        if (ctx->pc != 0x1513F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x151ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1513F4u; }
        if (ctx->pc != 0x1513F4u) { return; }
    }
    ctx->pc = 0x1513F4u;
    // 0x1513f4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1513f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1513f8: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1513f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1513fc: 0xc42099a8  lwc1        $f0, -0x6658($at)
    ctx->pc = 0x1513fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151400: 0x29940  sll         $s3, $v0, 5
    ctx->pc = 0x151400u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x151404: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x151404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x151408: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x151408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x15140c: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x15140cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x151410: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x151410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x151414: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x151414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x151418: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x151418u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x15141c: 0x2465000c  addiu       $a1, $v1, 0xC
    ctx->pc = 0x15141cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x151420: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x151420u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x151424: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x151424u;
    SET_GPR_U32(ctx, 31, 0x15142Cu);
    ctx->pc = 0x151428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151424u;
            // 0x151428: 0x2446ffd6  addiu       $a2, $v0, -0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967254));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15142Cu; }
        if (ctx->pc != 0x15142Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15142Cu; }
        if (ctx->pc != 0x15142Cu) { return; }
    }
    ctx->pc = 0x15142Cu;
    // 0x15142c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15142cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x151430: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x151430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x151434: 0xc42099a8  lwc1        $f0, -0x6658($at)
    ctx->pc = 0x151434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151438: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x151438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x15143c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15143cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x151440: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x151440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x151444: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x151444u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x151448: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x151448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x15144c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x15144cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x151450: 0x24842160  addiu       $a0, $a0, 0x2160
    ctx->pc = 0x151450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8544));
    // 0x151454: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x151454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x151458: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x151458u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x15145c: 0x2465ffe8  addiu       $a1, $v1, -0x18
    ctx->pc = 0x15145cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x151460: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x151460u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x151464: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x151464u;
    SET_GPR_U32(ctx, 31, 0x15146Cu);
    ctx->pc = 0x151468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151464u;
            // 0x151468: 0x2446fff6  addiu       $a2, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15146Cu; }
        if (ctx->pc != 0x15146Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15146Cu; }
        if (ctx->pc != 0x15146Cu) { return; }
    }
    ctx->pc = 0x15146Cu;
    // 0x15146c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15146cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x151470: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x151470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x151474: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x151474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x151478: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x151478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x15147c: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x15147Cu;
    SET_GPR_U32(ctx, 31, 0x151484u);
    ctx->pc = 0x151480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15147Cu;
            // 0x151480: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151484u; }
        if (ctx->pc != 0x151484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151484u; }
        if (ctx->pc != 0x151484u) { return; }
    }
    ctx->pc = 0x151484u;
    // 0x151484: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x151484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x151488: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x151488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15148c: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x15148cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x151490: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x151490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x151494: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x151494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x151498: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x151498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15149c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15149cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1514a0: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1514a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1514a4: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x1514A4u;
    SET_GPR_U32(ctx, 31, 0x1514ACu);
    ctx->pc = 0x1514A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1514A4u;
            // 0x1514a8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1514ACu; }
        if (ctx->pc != 0x1514ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1514ACu; }
        if (ctx->pc != 0x1514ACu) { return; }
    }
    ctx->pc = 0x1514ACu;
    // 0x1514ac: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x1514acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1514b0: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1514b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1514b4: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x1514b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x1514b8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1514b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1514bc: 0x24420160  addiu       $v0, $v0, 0x160
    ctx->pc = 0x1514bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x1514c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1514c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1514c4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1514c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1514c8: 0x24a598c0  addiu       $a1, $a1, -0x6740
    ctx->pc = 0x1514c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940864));
    // 0x1514cc: 0x8cc20078  lw          $v0, 0x78($a2)
    ctx->pc = 0x1514ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x1514d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1514d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1514d4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1514d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1514d8: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1514d8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1514dc: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x1514dcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1514e0: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x1514e0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1514e4: 0xc0546b4  jal         func_151AD0
    ctx->pc = 0x1514E4u;
    SET_GPR_U32(ctx, 31, 0x1514ECu);
    ctx->pc = 0x1514E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1514E4u;
            // 0x1514e8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AD0u;
    if (runtime->hasFunction(0x151AD0u)) {
        auto targetFn = runtime->lookupFunction(0x151AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1514ECu; }
        if (ctx->pc != 0x1514ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x151ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1514ECu; }
        if (ctx->pc != 0x1514ECu) { return; }
    }
    ctx->pc = 0x1514ECu;
    // 0x1514ec: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x1514ECu;
    {
        const bool branch_taken_0x1514ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1514F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1514ECu;
            // 0x1514f0: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1514ec) {
            ctx->pc = 0x151898u;
            goto label_151898;
        }
    }
    ctx->pc = 0x1514F4u;
    // 0x1514f4: 0x0  nop
    ctx->pc = 0x1514f4u;
    // NOP
label_1514f8:
    // 0x1514f8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1514f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1514fc: 0xc05c00c  jal         func_170030
    ctx->pc = 0x1514FCu;
    SET_GPR_U32(ctx, 31, 0x151504u);
    ctx->pc = 0x151500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1514FCu;
            // 0x151500: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151504u; }
        if (ctx->pc != 0x151504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151504u; }
        if (ctx->pc != 0x151504u) { return; }
    }
    ctx->pc = 0x151504u;
    // 0x151504: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x151504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x151508: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x151508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x15150c: 0xc42099a8  lwc1        $f0, -0x6658($at)
    ctx->pc = 0x15150cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151510: 0x119940  sll         $s3, $s1, 5
    ctx->pc = 0x151510u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x151514: 0x2463e160  addiu       $v1, $v1, -0x1EA0
    ctx->pc = 0x151514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959456));
    // 0x151518: 0x8e880018  lw          $t0, 0x18($s4)
    ctx->pc = 0x151518u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x15151c: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x15151cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x151520: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x151520u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x151524: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x151524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151528: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x151528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15152c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15152cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x151530: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x151530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x151534: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x151534u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x151538: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x151538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x15153c: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x15153cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x151540: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x151540u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x151544: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x151544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x151548: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x151548u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15154c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x15154cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x151550: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x151550u;
    SET_GPR_U32(ctx, 31, 0x151558u);
    ctx->pc = 0x151554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151550u;
            // 0x151554: 0x2446fff4  addiu       $a2, $v0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151558u; }
        if (ctx->pc != 0x151558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151558u; }
        if (ctx->pc != 0x151558u) { return; }
    }
    ctx->pc = 0x151558u;
    // 0x151558: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x151558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15155c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x15155cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x151560: 0xc42099a8  lwc1        $f0, -0x6658($at)
    ctx->pc = 0x151560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151564: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x151564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x151568: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x151568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x15156c: 0x3a900  sll         $s5, $v1, 4
    ctx->pc = 0x15156cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x151570: 0x2442e160  addiu       $v0, $v0, -0x1EA0
    ctx->pc = 0x151570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x151574: 0x8e890008  lw          $t1, 0x8($s4)
    ctx->pc = 0x151574u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x151578: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x151578u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15157c: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x15157cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x151580: 0x8e070014  lw          $a3, 0x14($s0)
    ctx->pc = 0x151580u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x151584: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x151584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x151588: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x151588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x15158c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15158cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x151590: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x151590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x151594: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x151594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x151598: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x151598u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x15159c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x15159cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1515a0: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1515a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1515a4: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1515a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1515a8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1515a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1515ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1515acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1515b0: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x1515B0u;
    SET_GPR_U32(ctx, 31, 0x1515B8u);
    ctx->pc = 0x1515B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1515B0u;
            // 0x1515b4: 0x2446fff4  addiu       $a2, $v0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1515B8u; }
        if (ctx->pc != 0x1515B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1515B8u; }
        if (ctx->pc != 0x1515B8u) { return; }
    }
    ctx->pc = 0x1515B8u;
    // 0x1515b8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1515b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1515bc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1515bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1515c0: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1515c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1515c4: 0x2442e160  addiu       $v0, $v0, -0x1EA0
    ctx->pc = 0x1515c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x1515c8: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x1515C8u;
    SET_GPR_U32(ctx, 31, 0x1515D0u);
    ctx->pc = 0x1515CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1515C8u;
            // 0x1515cc: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1515D0u; }
        if (ctx->pc != 0x1515D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1515D0u; }
        if (ctx->pc != 0x1515D0u) { return; }
    }
    ctx->pc = 0x1515D0u;
    // 0x1515d0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1515d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1515d4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1515d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1515d8: 0x2442e160  addiu       $v0, $v0, -0x1EA0
    ctx->pc = 0x1515d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x1515dc: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1515dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1515e0: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x1515e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1515e4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1515e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1515e8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1515e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1515ec: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1515ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1515f0: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x1515F0u;
    SET_GPR_U32(ctx, 31, 0x1515F8u);
    ctx->pc = 0x1515F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1515F0u;
            // 0x1515f4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1515F8u; }
        if (ctx->pc != 0x1515F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1515F8u; }
        if (ctx->pc != 0x1515F8u) { return; }
    }
    ctx->pc = 0x1515F8u;
    // 0x1515f8: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x1515f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1515fc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1515fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x151600: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x151600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x151604: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x151604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x151608: 0x2442c160  addiu       $v0, $v0, -0x3EA0
    ctx->pc = 0x151608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951264));
    // 0x15160c: 0x24a59900  addiu       $a1, $a1, -0x6700
    ctx->pc = 0x15160cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940928));
    // 0x151610: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x151610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x151614: 0x8cc20078  lw          $v0, 0x78($a2)
    ctx->pc = 0x151614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x151618: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x151618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15161c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15161cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x151620: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x151620u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151624: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x151624u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x151628: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x151628u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x15162c: 0xc0546b4  jal         func_151AD0
    ctx->pc = 0x15162Cu;
    SET_GPR_U32(ctx, 31, 0x151634u);
    ctx->pc = 0x151630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15162Cu;
            // 0x151630: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AD0u;
    if (runtime->hasFunction(0x151AD0u)) {
        auto targetFn = runtime->lookupFunction(0x151AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151634u; }
        if (ctx->pc != 0x151634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x151ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151634u; }
        if (ctx->pc != 0x151634u) { return; }
    }
    ctx->pc = 0x151634u;
    // 0x151634: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x151634u;
    {
        const bool branch_taken_0x151634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151634u;
            // 0x151638: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151634) {
            ctx->pc = 0x151898u;
            goto label_151898;
        }
    }
    ctx->pc = 0x15163Cu;
    // 0x15163c: 0x0  nop
    ctx->pc = 0x15163cu;
    // NOP
label_151640:
    // 0x151640: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x151640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x151644: 0xc05c00c  jal         func_170030
    ctx->pc = 0x151644u;
    SET_GPR_U32(ctx, 31, 0x15164Cu);
    ctx->pc = 0x151648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151644u;
            // 0x151648: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15164Cu; }
        if (ctx->pc != 0x15164Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15164Cu; }
        if (ctx->pc != 0x15164Cu) { return; }
    }
    ctx->pc = 0x15164Cu;
    // 0x15164c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15164cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x151650: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x151650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x151654: 0xc42099a8  lwc1        $f0, -0x6658($at)
    ctx->pc = 0x151654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151658: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x151658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15165c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15165cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151660: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x151660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x151664: 0x129940  sll         $s3, $s2, 5
    ctx->pc = 0x151664u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x151668: 0x24632160  addiu       $v1, $v1, 0x2160
    ctx->pc = 0x151668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8544));
    // 0x15166c: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x15166cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x151670: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x151670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x151674: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x151674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x151678: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x151678u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x15167c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15167cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x151680: 0x24a5000a  addiu       $a1, $a1, 0xA
    ctx->pc = 0x151680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x151684: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x151684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x151688: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x151688u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x15168c: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x15168Cu;
    SET_GPR_U32(ctx, 31, 0x151694u);
    ctx->pc = 0x151690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15168Cu;
            // 0x151690: 0x2446fff8  addiu       $a2, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151694u; }
        if (ctx->pc != 0x151694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151694u; }
        if (ctx->pc != 0x151694u) { return; }
    }
    ctx->pc = 0x151694u;
    // 0x151694: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x151694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x151698: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x151698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x15169c: 0xc42099a8  lwc1        $f0, -0x6658($at)
    ctx->pc = 0x15169cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1516a0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1516a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1516a4: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x1516a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x1516a8: 0x3a900  sll         $s5, $v1, 4
    ctx->pc = 0x1516a8u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1516ac: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x1516acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x1516b0: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x1516b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1516b4: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1516b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1516b8: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x1516b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1516bc: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1516bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1516c0: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x1516c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1516c4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1516c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1516c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1516c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1516cc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1516ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1516d0: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x1516d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1516d4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1516d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1516d8: 0x24a5000a  addiu       $a1, $a1, 0xA
    ctx->pc = 0x1516d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x1516dc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1516dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1516e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1516e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1516e4: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1516e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1516e8: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x1516E8u;
    SET_GPR_U32(ctx, 31, 0x1516F0u);
    ctx->pc = 0x1516ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1516E8u;
            // 0x1516ec: 0x2446fff8  addiu       $a2, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1516F0u; }
        if (ctx->pc != 0x1516F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1516F0u; }
        if (ctx->pc != 0x1516F0u) { return; }
    }
    ctx->pc = 0x1516F0u;
    // 0x1516f0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1516f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1516f4: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x1516f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x1516f8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1516f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1516fc: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x1516fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x151700: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x151700u;
    SET_GPR_U32(ctx, 31, 0x151708u);
    ctx->pc = 0x151704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151700u;
            // 0x151704: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151708u; }
        if (ctx->pc != 0x151708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151708u; }
        if (ctx->pc != 0x151708u) { return; }
    }
    ctx->pc = 0x151708u;
    // 0x151708: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x151708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x15170c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15170cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x151710: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x151710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x151714: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x151714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x151718: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x151718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x15171c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15171cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x151720: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x151720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x151724: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x151724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x151728: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x151728u;
    SET_GPR_U32(ctx, 31, 0x151730u);
    ctx->pc = 0x15172Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151728u;
            // 0x15172c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151730u; }
        if (ctx->pc != 0x151730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151730u; }
        if (ctx->pc != 0x151730u) { return; }
    }
    ctx->pc = 0x151730u;
    // 0x151730: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x151730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x151734: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x151734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x151738: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x151738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x15173c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15173cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x151740: 0x24420160  addiu       $v0, $v0, 0x160
    ctx->pc = 0x151740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x151744: 0x24a598c0  addiu       $a1, $a1, -0x6740
    ctx->pc = 0x151744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940864));
    // 0x151748: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x151748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15174c: 0x8cc20078  lw          $v0, 0x78($a2)
    ctx->pc = 0x15174cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x151750: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x151750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x151754: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x151754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x151758: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x151758u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15175c: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x15175cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x151760: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x151760u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x151764: 0xc0546b4  jal         func_151AD0
    ctx->pc = 0x151764u;
    SET_GPR_U32(ctx, 31, 0x15176Cu);
    ctx->pc = 0x151768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151764u;
            // 0x151768: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AD0u;
    if (runtime->hasFunction(0x151AD0u)) {
        auto targetFn = runtime->lookupFunction(0x151AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15176Cu; }
        if (ctx->pc != 0x15176Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x151ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15176Cu; }
        if (ctx->pc != 0x15176Cu) { return; }
    }
    ctx->pc = 0x15176Cu;
    // 0x15176c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15176cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x151770: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x151770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x151774: 0xc42099a8  lwc1        $f0, -0x6658($at)
    ctx->pc = 0x151774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151778: 0x29940  sll         $s3, $v0, 5
    ctx->pc = 0x151778u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x15177c: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x15177cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x151780: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x151780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x151784: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x151784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x151788: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x151788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15178c: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x15178cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x151790: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x151790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x151794: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x151794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x151798: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x151798u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x15179c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15179cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1517a0: 0x24a50016  addiu       $a1, $a1, 0x16
    ctx->pc = 0x1517a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22));
    // 0x1517a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1517a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1517a8: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1517a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1517ac: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x1517ACu;
    SET_GPR_U32(ctx, 31, 0x1517B4u);
    ctx->pc = 0x1517B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1517ACu;
            // 0x1517b0: 0x2446fff8  addiu       $a2, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1517B4u; }
        if (ctx->pc != 0x1517B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1517B4u; }
        if (ctx->pc != 0x1517B4u) { return; }
    }
    ctx->pc = 0x1517B4u;
    // 0x1517b4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1517b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1517b8: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1517b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1517bc: 0xc42099a8  lwc1        $f0, -0x6658($at)
    ctx->pc = 0x1517bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1517c0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1517c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1517c4: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x1517c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x1517c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1517c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1517cc: 0x3a900  sll         $s5, $v1, 4
    ctx->pc = 0x1517ccu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1517d0: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x1517d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x1517d4: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x1517d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1517d8: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x1517d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1517dc: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1517dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1517e0: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1517e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1517e4: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x1517e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1517e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1517e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1517ec: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1517ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1517f0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1517f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1517f4: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x1517f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1517f8: 0xe52823  subu        $a1, $a3, $a1
    ctx->pc = 0x1517f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1517fc: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1517fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x151800: 0x24a50016  addiu       $a1, $a1, 0x16
    ctx->pc = 0x151800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22));
    // 0x151804: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x151804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x151808: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x151808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15180c: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x15180Cu;
    SET_GPR_U32(ctx, 31, 0x151814u);
    ctx->pc = 0x151810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15180Cu;
            // 0x151810: 0x2446fff8  addiu       $a2, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151B20u;
    if (runtime->hasFunction(0x151B20u)) {
        auto targetFn = runtime->lookupFunction(0x151B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151814u; }
        if (ctx->pc != 0x151814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZ_0x151b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151814u; }
        if (ctx->pc != 0x151814u) { return; }
    }
    ctx->pc = 0x151814u;
    // 0x151814: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x151814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x151818: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x151818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x15181c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15181cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x151820: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x151820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x151824: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x151824u;
    SET_GPR_U32(ctx, 31, 0x15182Cu);
    ctx->pc = 0x151828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151824u;
            // 0x151828: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15182Cu; }
        if (ctx->pc != 0x15182Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15182Cu; }
        if (ctx->pc != 0x15182Cu) { return; }
    }
    ctx->pc = 0x15182Cu;
    // 0x15182c: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x15182cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x151830: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x151830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x151834: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x151834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x151838: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x151838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15183c: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x15183cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x151840: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x151840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x151844: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x151844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x151848: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x151848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15184c: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x15184Cu;
    SET_GPR_U32(ctx, 31, 0x151854u);
    ctx->pc = 0x151850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15184Cu;
            // 0x151850: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151854u; }
        if (ctx->pc != 0x151854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151854u; }
        if (ctx->pc != 0x151854u) { return; }
    }
    ctx->pc = 0x151854u;
    // 0x151854: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x151854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x151858: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x151858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15185c: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x15185cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x151860: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x151860u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x151864: 0x24420160  addiu       $v0, $v0, 0x160
    ctx->pc = 0x151864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x151868: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x151868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15186c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x15186cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x151870: 0x24a598c0  addiu       $a1, $a1, -0x6740
    ctx->pc = 0x151870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940864));
    // 0x151874: 0x8cc20078  lw          $v0, 0x78($a2)
    ctx->pc = 0x151874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x151878: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x151878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15187c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15187cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x151880: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x151880u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151884: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x151884u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x151888: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x151888u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x15188c: 0xc0546b4  jal         func_151AD0
    ctx->pc = 0x15188Cu;
    SET_GPR_U32(ctx, 31, 0x151894u);
    ctx->pc = 0x151890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15188Cu;
            // 0x151890: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AD0u;
    if (runtime->hasFunction(0x151AD0u)) {
        auto targetFn = runtime->lookupFunction(0x151AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151894u; }
        if (ctx->pc != 0x151894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x151ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151894u; }
        if (ctx->pc != 0x151894u) { return; }
    }
    ctx->pc = 0x151894u;
    // 0x151894: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x151894u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_151898:
    // 0x151898: 0x8e94004c  lw          $s4, 0x4C($s4)
    ctx->pc = 0x151898u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x15189c: 0x1680f950  bnez        $s4, . + 4 + (-0x6B0 << 2)
    ctx->pc = 0x15189Cu;
    {
        const bool branch_taken_0x15189c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x15189c) {
            ctx->pc = 0x14FDE0u;
            goto label_14fde0;
        }
    }
    ctx->pc = 0x1518A4u;
    // 0x1518a4: 0x0  nop
    ctx->pc = 0x1518a4u;
    // NOP
label_1518a8:
    // 0x1518a8: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1518A8u;
    {
        const bool branch_taken_0x1518a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1518ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1518A8u;
            // 0x1518ac: 0x3c02002f  lui         $v0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1518a8) {
            ctx->pc = 0x151900u;
            goto label_151900;
        }
    }
    ctx->pc = 0x1518B0u;
    // 0x1518b0: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x1518b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x1518b4: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x1518b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x1518b8: 0x24630160  addiu       $v1, $v1, 0x160
    ctx->pc = 0x1518b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 352));
    // 0x1518bc: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x1518bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    // 0x1518c0: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1518c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1518c4: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x1518c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x1518c8: 0xafa3016c  sw          $v1, 0x16C($sp)
    ctx->pc = 0x1518c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 3));
    // 0x1518cc: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x1518ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x1518d0: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1518D0u;
    SET_GPR_U32(ctx, 31, 0x1518D8u);
    ctx->pc = 0x1518D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1518D0u;
            // 0x1518d4: 0xafa20168  sw          $v0, 0x168($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1518D8u; }
        if (ctx->pc != 0x1518D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1518D8u; }
        if (ctx->pc != 0x1518D8u) { return; }
    }
    ctx->pc = 0x1518D8u;
    // 0x1518d8: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x1518d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x1518dc: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1518dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1518e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1518e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1518e4: 0xc0546b0  jal         func_151AC0
    ctx->pc = 0x1518E4u;
    SET_GPR_U32(ctx, 31, 0x1518ECu);
    ctx->pc = 0x1518E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1518E4u;
            // 0x1518e8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AC0u;
    if (runtime->hasFunction(0x151AC0u)) {
        auto targetFn = runtime->lookupFunction(0x151AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1518ECu; }
        if (ctx->pc != 0x1518ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x151ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1518ECu; }
        if (ctx->pc != 0x1518ECu) { return; }
    }
    ctx->pc = 0x1518ECu;
    // 0x1518ec: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1518ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1518f0: 0xc0546ac  jal         func_151AB0
    ctx->pc = 0x1518F0u;
    SET_GPR_U32(ctx, 31, 0x1518F8u);
    ctx->pc = 0x1518F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1518F0u;
            // 0x1518f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AB0u;
    if (runtime->hasFunction(0x151AB0u)) {
        auto targetFn = runtime->lookupFunction(0x151AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1518F8u; }
        if (ctx->pc != 0x1518F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x151ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1518F8u; }
        if (ctx->pc != 0x1518F8u) { return; }
    }
    ctx->pc = 0x1518F8u;
    // 0x1518f8: 0xc05c29c  jal         func_170A70
    ctx->pc = 0x1518F8u;
    SET_GPR_U32(ctx, 31, 0x151900u);
    ctx->pc = 0x1518FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1518F8u;
            // 0x1518fc: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A70u;
    if (runtime->hasFunction(0x170A70u)) {
        auto targetFn = runtime->lookupFunction(0x170A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151900u; }
        if (ctx->pc != 0x151900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFTU_0x170a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151900u; }
        if (ctx->pc != 0x151900u) { return; }
    }
    ctx->pc = 0x151900u;
label_151900:
    // 0x151900: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x151900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x151904: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x151904u;
    {
        const bool branch_taken_0x151904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151904u;
            // 0x151908: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151904) {
            ctx->pc = 0x151960u;
            goto label_151960;
        }
    }
    ctx->pc = 0x15190Cu;
    // 0x15190c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x15190cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x151910: 0x2442c160  addiu       $v0, $v0, -0x3EA0
    ctx->pc = 0x151910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951264));
    // 0x151914: 0x2463a160  addiu       $v1, $v1, -0x5EA0
    ctx->pc = 0x151914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943072));
    // 0x151918: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x151918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    // 0x15191c: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x15191cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x151920: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x151920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x151924: 0xafa3016c  sw          $v1, 0x16C($sp)
    ctx->pc = 0x151924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 3));
    // 0x151928: 0x2442c160  addiu       $v0, $v0, -0x3EA0
    ctx->pc = 0x151928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951264));
    // 0x15192c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15192Cu;
    SET_GPR_U32(ctx, 31, 0x151934u);
    ctx->pc = 0x151930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15192Cu;
            // 0x151930: 0xafa20168  sw          $v0, 0x168($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151934u; }
        if (ctx->pc != 0x151934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151934u; }
        if (ctx->pc != 0x151934u) { return; }
    }
    ctx->pc = 0x151934u;
    // 0x151934: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x151934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x151938: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x151938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x15193c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x15193cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x151940: 0xc0546b0  jal         func_151AC0
    ctx->pc = 0x151940u;
    SET_GPR_U32(ctx, 31, 0x151948u);
    ctx->pc = 0x151944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151940u;
            // 0x151944: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AC0u;
    if (runtime->hasFunction(0x151AC0u)) {
        auto targetFn = runtime->lookupFunction(0x151AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151948u; }
        if (ctx->pc != 0x151948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x151ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151948u; }
        if (ctx->pc != 0x151948u) { return; }
    }
    ctx->pc = 0x151948u;
    // 0x151948: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x151948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x15194c: 0xc0546ac  jal         func_151AB0
    ctx->pc = 0x15194Cu;
    SET_GPR_U32(ctx, 31, 0x151954u);
    ctx->pc = 0x151950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15194Cu;
            // 0x151950: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AB0u;
    if (runtime->hasFunction(0x151AB0u)) {
        auto targetFn = runtime->lookupFunction(0x151AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151954u; }
        if (ctx->pc != 0x151954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x151ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151954u; }
        if (ctx->pc != 0x151954u) { return; }
    }
    ctx->pc = 0x151954u;
    // 0x151954: 0xc05c29c  jal         func_170A70
    ctx->pc = 0x151954u;
    SET_GPR_U32(ctx, 31, 0x15195Cu);
    ctx->pc = 0x151958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151954u;
            // 0x151958: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A70u;
    if (runtime->hasFunction(0x170A70u)) {
        auto targetFn = runtime->lookupFunction(0x170A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15195Cu; }
        if (ctx->pc != 0x15195Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFTU_0x170a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15195Cu; }
        if (ctx->pc != 0x15195Cu) { return; }
    }
    ctx->pc = 0x15195Cu;
    // 0x15195c: 0x0  nop
    ctx->pc = 0x15195cu;
    // NOP
label_151960:
    // 0x151960: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x151960u;
    {
        const bool branch_taken_0x151960 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x151964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151960u;
            // 0x151964: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151960) {
            ctx->pc = 0x1519B8u;
            goto label_1519b8;
        }
    }
    ctx->pc = 0x151968u;
    // 0x151968: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x151968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x15196c: 0x2442e160  addiu       $v0, $v0, -0x1EA0
    ctx->pc = 0x15196cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x151970: 0x2463c160  addiu       $v1, $v1, -0x3EA0
    ctx->pc = 0x151970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951264));
    // 0x151974: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x151974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    // 0x151978: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x151978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x15197c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x15197cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x151980: 0xafa3016c  sw          $v1, 0x16C($sp)
    ctx->pc = 0x151980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 3));
    // 0x151984: 0x2442e160  addiu       $v0, $v0, -0x1EA0
    ctx->pc = 0x151984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x151988: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x151988u;
    SET_GPR_U32(ctx, 31, 0x151990u);
    ctx->pc = 0x15198Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151988u;
            // 0x15198c: 0xafa20168  sw          $v0, 0x168($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151990u; }
        if (ctx->pc != 0x151990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151990u; }
        if (ctx->pc != 0x151990u) { return; }
    }
    ctx->pc = 0x151990u;
    // 0x151990: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x151990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x151994: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x151994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x151998: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x151998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15199c: 0xc0546b0  jal         func_151AC0
    ctx->pc = 0x15199Cu;
    SET_GPR_U32(ctx, 31, 0x1519A4u);
    ctx->pc = 0x1519A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15199Cu;
            // 0x1519a0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AC0u;
    if (runtime->hasFunction(0x151AC0u)) {
        auto targetFn = runtime->lookupFunction(0x151AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1519A4u; }
        if (ctx->pc != 0x1519A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x151ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1519A4u; }
        if (ctx->pc != 0x1519A4u) { return; }
    }
    ctx->pc = 0x1519A4u;
    // 0x1519a4: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1519a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1519a8: 0xc0546ac  jal         func_151AB0
    ctx->pc = 0x1519A8u;
    SET_GPR_U32(ctx, 31, 0x1519B0u);
    ctx->pc = 0x1519ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1519A8u;
            // 0x1519ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AB0u;
    if (runtime->hasFunction(0x151AB0u)) {
        auto targetFn = runtime->lookupFunction(0x151AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1519B0u; }
        if (ctx->pc != 0x1519B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x151ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1519B0u; }
        if (ctx->pc != 0x1519B0u) { return; }
    }
    ctx->pc = 0x1519B0u;
    // 0x1519b0: 0xc05c29c  jal         func_170A70
    ctx->pc = 0x1519B0u;
    SET_GPR_U32(ctx, 31, 0x1519B8u);
    ctx->pc = 0x1519B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1519B0u;
            // 0x1519b4: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A70u;
    if (runtime->hasFunction(0x170A70u)) {
        auto targetFn = runtime->lookupFunction(0x170A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1519B8u; }
        if (ctx->pc != 0x1519B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFTU_0x170a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1519B8u; }
        if (ctx->pc != 0x1519B8u) { return; }
    }
    ctx->pc = 0x1519B8u;
label_1519b8:
    // 0x1519b8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1519b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1519bc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1519BCu;
    {
        const bool branch_taken_0x1519bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1519C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1519BCu;
            // 0x1519c0: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1519bc) {
            ctx->pc = 0x151A18u;
            goto label_151a18;
        }
    }
    ctx->pc = 0x1519C4u;
    // 0x1519c4: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1519c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1519c8: 0x24420160  addiu       $v0, $v0, 0x160
    ctx->pc = 0x1519c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x1519cc: 0x2463e160  addiu       $v1, $v1, -0x1EA0
    ctx->pc = 0x1519ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959456));
    // 0x1519d0: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x1519d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    // 0x1519d4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1519d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1519d8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1519d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1519dc: 0xafa3016c  sw          $v1, 0x16C($sp)
    ctx->pc = 0x1519dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 3));
    // 0x1519e0: 0x24420160  addiu       $v0, $v0, 0x160
    ctx->pc = 0x1519e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x1519e4: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1519E4u;
    SET_GPR_U32(ctx, 31, 0x1519ECu);
    ctx->pc = 0x1519E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1519E4u;
            // 0x1519e8: 0xafa20168  sw          $v0, 0x168($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1519ECu; }
        if (ctx->pc != 0x1519ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1519ECu; }
        if (ctx->pc != 0x1519ECu) { return; }
    }
    ctx->pc = 0x1519ECu;
    // 0x1519ec: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x1519ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x1519f0: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1519f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1519f4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1519f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1519f8: 0xc0546b0  jal         func_151AC0
    ctx->pc = 0x1519F8u;
    SET_GPR_U32(ctx, 31, 0x151A00u);
    ctx->pc = 0x1519FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1519F8u;
            // 0x1519fc: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AC0u;
    if (runtime->hasFunction(0x151AC0u)) {
        auto targetFn = runtime->lookupFunction(0x151AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A00u; }
        if (ctx->pc != 0x151A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x151ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A00u; }
        if (ctx->pc != 0x151A00u) { return; }
    }
    ctx->pc = 0x151A00u;
    // 0x151a00: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x151a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x151a04: 0xc0546ac  jal         func_151AB0
    ctx->pc = 0x151A04u;
    SET_GPR_U32(ctx, 31, 0x151A0Cu);
    ctx->pc = 0x151A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151A04u;
            // 0x151a08: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AB0u;
    if (runtime->hasFunction(0x151AB0u)) {
        auto targetFn = runtime->lookupFunction(0x151AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A0Cu; }
        if (ctx->pc != 0x151A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x151ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A0Cu; }
        if (ctx->pc != 0x151A0Cu) { return; }
    }
    ctx->pc = 0x151A0Cu;
    // 0x151a0c: 0xc05c29c  jal         func_170A70
    ctx->pc = 0x151A0Cu;
    SET_GPR_U32(ctx, 31, 0x151A14u);
    ctx->pc = 0x151A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151A0Cu;
            // 0x151a10: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A70u;
    if (runtime->hasFunction(0x170A70u)) {
        auto targetFn = runtime->lookupFunction(0x170A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A14u; }
        if (ctx->pc != 0x151A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFTU_0x170a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A14u; }
        if (ctx->pc != 0x151A14u) { return; }
    }
    ctx->pc = 0x151A14u;
    // 0x151a14: 0x0  nop
    ctx->pc = 0x151a14u;
    // NOP
label_151a18:
    // 0x151a18: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x151a18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x151a1c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x151a1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151a20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x151a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151a24: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x151a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x151a28: 0xc059e60  jal         func_167980
    ctx->pc = 0x151A28u;
    SET_GPR_U32(ctx, 31, 0x151A30u);
    ctx->pc = 0x151A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151A28u;
            // 0x151a2c: 0x24c60b88  addiu       $a2, $a2, 0xB88 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167980u;
    if (runtime->hasFunction(0x167980u)) {
        auto targetFn = runtime->lookupFunction(0x167980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A30u; }
        if (ctx->pc != 0x151A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        debug_draw_print_0x167980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A30u; }
        if (ctx->pc != 0x151A30u) { return; }
    }
    ctx->pc = 0x151A30u;
    // 0x151a30: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x151a30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x151a34: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x151a34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x151a38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x151a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151a3c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x151a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x151a40: 0xc059e60  jal         func_167980
    ctx->pc = 0x151A40u;
    SET_GPR_U32(ctx, 31, 0x151A48u);
    ctx->pc = 0x151A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151A40u;
            // 0x151a44: 0x24c60b90  addiu       $a2, $a2, 0xB90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167980u;
    if (runtime->hasFunction(0x167980u)) {
        auto targetFn = runtime->lookupFunction(0x167980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A48u; }
        if (ctx->pc != 0x151A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        debug_draw_print_0x167980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A48u; }
        if (ctx->pc != 0x151A48u) { return; }
    }
    ctx->pc = 0x151A48u;
    // 0x151a48: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x151a48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x151a4c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x151a4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151a50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x151a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151a54: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x151a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x151a58: 0xc059e60  jal         func_167980
    ctx->pc = 0x151A58u;
    SET_GPR_U32(ctx, 31, 0x151A60u);
    ctx->pc = 0x151A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151A58u;
            // 0x151a5c: 0x24c60ba0  addiu       $a2, $a2, 0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167980u;
    if (runtime->hasFunction(0x167980u)) {
        auto targetFn = runtime->lookupFunction(0x167980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A60u; }
        if (ctx->pc != 0x151A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        debug_draw_print_0x167980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A60u; }
        if (ctx->pc != 0x151A60u) { return; }
    }
    ctx->pc = 0x151A60u;
    // 0x151a60: 0x8fa70150  lw          $a3, 0x150($sp)
    ctx->pc = 0x151a60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x151a64: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x151a64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x151a68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x151a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151a6c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x151a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x151a70: 0xc059e60  jal         func_167980
    ctx->pc = 0x151A70u;
    SET_GPR_U32(ctx, 31, 0x151A78u);
    ctx->pc = 0x151A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151A70u;
            // 0x151a74: 0x24c60bb0  addiu       $a2, $a2, 0xBB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167980u;
    if (runtime->hasFunction(0x167980u)) {
        auto targetFn = runtime->lookupFunction(0x167980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A78u; }
        if (ctx->pc != 0x151A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        debug_draw_print_0x167980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151A78u; }
        if (ctx->pc != 0x151A78u) { return; }
    }
    ctx->pc = 0x151A78u;
    // 0x151a78: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x151a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x151a7c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x151a7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x151a80: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x151a80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x151a84: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x151a84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x151a88: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x151a88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x151a8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x151a8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x151a90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x151a90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151a94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x151a94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151a98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151a9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x151AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151AA0u;
            // 0x151aa4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14FDE0u: goto label_14fde0;
            case 0x14FE08u: goto label_14fe08;
            case 0x14FEC0u: goto label_14fec0;
            case 0x14FF50u: goto label_14ff50;
            case 0x14FFD8u: goto label_14ffd8;
            case 0x150258u: goto label_150258;
            case 0x1503A8u: goto label_1503a8;
            case 0x1509E8u: goto label_1509e8;
            case 0x150AA0u: goto label_150aa0;
            case 0x150B30u: goto label_150b30;
            case 0x150BB8u: goto label_150bb8;
            case 0x150E38u: goto label_150e38;
            case 0x151198u: goto label_151198;
            case 0x1512F8u: goto label_1512f8;
            case 0x1514F8u: goto label_1514f8;
            case 0x151640u: goto label_151640;
            case 0x151898u: goto label_151898;
            case 0x1518A8u: goto label_1518a8;
            case 0x151900u: goto label_151900;
            case 0x151960u: goto label_151960;
            case 0x1519B8u: goto label_1519b8;
            case 0x151A18u: goto label_151a18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x151AA8u;
}
