#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEnemy
// Address: 0x16e880 - 0x16e9c4
void CreateEnemy_0x16e880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEnemy_0x16e880");
#endif

    ctx->pc = 0x16e880u;

    // 0x16e880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16e880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16e884: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16e884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16e888: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16e888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16e88c: 0xc05ba88  jal         func_16EA20
    ctx->pc = 0x16E88Cu;
    SET_GPR_U32(ctx, 31, 0x16E894u);
    ctx->pc = 0x16E890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E88Cu;
            // 0x16e890: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EA20u;
    if (runtime->hasFunction(0x16EA20u)) {
        auto targetFn = runtime->lookupFunction(0x16EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E894u; }
        if (ctx->pc != 0x16E894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyAlloc_0x16ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E894u; }
        if (ctx->pc != 0x16E894u) { return; }
    }
    ctx->pc = 0x16E894u;
    // 0x16e894: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x16e894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16e898: 0x24031770  addiu       $v1, $zero, 0x1770
    ctx->pc = 0x16e898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x16e89c: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x16e89cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x16e8a0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x16e8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16e8a4: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x16e8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x16e8a8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x16e8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16e8ac: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x16e8acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x16e8b0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x16e8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16e8b4: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x16e8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x16e8b8: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x16e8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x16e8bc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x16e8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16e8c0: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x16e8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x16e8c4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x16e8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x16e8c8: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x16e8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x16e8cc: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x16e8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x16e8d0: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x16e8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x16e8d4: 0xc60300d0  lwc1        $f3, 0xD0($s0)
    ctx->pc = 0x16e8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16e8d8: 0xc60200d4  lwc1        $f2, 0xD4($s0)
    ctx->pc = 0x16e8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16e8dc: 0xc60100d8  lwc1        $f1, 0xD8($s0)
    ctx->pc = 0x16e8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e8e0: 0xc60000dc  lwc1        $f0, 0xDC($s0)
    ctx->pc = 0x16e8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e8e4: 0xe44300d0  swc1        $f3, 0xD0($v0)
    ctx->pc = 0x16e8e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x16e8e8: 0xe44200d4  swc1        $f2, 0xD4($v0)
    ctx->pc = 0x16e8e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x16e8ec: 0xe44100d8  swc1        $f1, 0xD8($v0)
    ctx->pc = 0x16e8ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x16e8f0: 0xe44000dc  swc1        $f0, 0xDC($v0)
    ctx->pc = 0x16e8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 220), bits); }
    // 0x16e8f4: 0xc60300e0  lwc1        $f3, 0xE0($s0)
    ctx->pc = 0x16e8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16e8f8: 0xc60200e4  lwc1        $f2, 0xE4($s0)
    ctx->pc = 0x16e8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16e8fc: 0xc60100e8  lwc1        $f1, 0xE8($s0)
    ctx->pc = 0x16e8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e900: 0xc60000ec  lwc1        $f0, 0xEC($s0)
    ctx->pc = 0x16e900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e904: 0xe44300e0  swc1        $f3, 0xE0($v0)
    ctx->pc = 0x16e904u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
    // 0x16e908: 0xe44200e4  swc1        $f2, 0xE4($v0)
    ctx->pc = 0x16e908u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
    // 0x16e90c: 0xe44100e8  swc1        $f1, 0xE8($v0)
    ctx->pc = 0x16e90cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
    // 0x16e910: 0xe44000ec  swc1        $f0, 0xEC($v0)
    ctx->pc = 0x16e910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 236), bits); }
    // 0x16e914: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x16e914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x16e918: 0xac4300f0  sw          $v1, 0xF0($v0)
    ctx->pc = 0x16e918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 3));
    // 0x16e91c: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x16e91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x16e920: 0xac4300f4  sw          $v1, 0xF4($v0)
    ctx->pc = 0x16e920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 3));
    // 0x16e924: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x16e924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x16e928: 0xac4300f8  sw          $v1, 0xF8($v0)
    ctx->pc = 0x16e928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 248), GPR_U32(ctx, 3));
    // 0x16e92c: 0x8e0300fc  lw          $v1, 0xFC($s0)
    ctx->pc = 0x16e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x16e930: 0xac4300fc  sw          $v1, 0xFC($v0)
    ctx->pc = 0x16e930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 252), GPR_U32(ctx, 3));
    // 0x16e934: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x16e934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x16e938: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16E938u;
    {
        const bool branch_taken_0x16e938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e938) {
            ctx->pc = 0x16E948u;
            goto label_16e948;
        }
    }
    ctx->pc = 0x16E940u;
    // 0x16e940: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16E940u;
    {
        const bool branch_taken_0x16e940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E940u;
            // 0x16e944: 0xac430100  sw          $v1, 0x100($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e940) {
            ctx->pc = 0x16E950u;
            goto label_16e950;
        }
    }
    ctx->pc = 0x16E948u;
label_16e948:
    // 0x16e948: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x16e948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
    // 0x16e94c: 0x0  nop
    ctx->pc = 0x16e94cu;
    // NOP
label_16e950:
    // 0x16e950: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16e950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16e954: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16E954u;
    {
        const bool branch_taken_0x16e954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e954) {
            ctx->pc = 0x16E968u;
            goto label_16e968;
        }
    }
    ctx->pc = 0x16E95Cu;
    // 0x16e95c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16E95Cu;
    {
        const bool branch_taken_0x16e95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E95Cu;
            // 0x16e960: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e95c) {
            ctx->pc = 0x16E970u;
            goto label_16e970;
        }
    }
    ctx->pc = 0x16E964u;
    // 0x16e964: 0x0  nop
    ctx->pc = 0x16e964u;
    // NOP
label_16e968:
    // 0x16e968: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x16e968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x16e96c: 0x0  nop
    ctx->pc = 0x16e96cu;
    // NOP
label_16e970:
    // 0x16e970: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x16e970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16e974: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16E974u;
    {
        const bool branch_taken_0x16e974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e974) {
            ctx->pc = 0x16E988u;
            goto label_16e988;
        }
    }
    ctx->pc = 0x16E97Cu;
    // 0x16e97c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16E97Cu;
    {
        const bool branch_taken_0x16e97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E97Cu;
            // 0x16e980: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e97c) {
            ctx->pc = 0x16E990u;
            goto label_16e990;
        }
    }
    ctx->pc = 0x16E984u;
    // 0x16e984: 0x0  nop
    ctx->pc = 0x16e984u;
    // NOP
label_16e988:
    // 0x16e988: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x16e988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x16e98c: 0x0  nop
    ctx->pc = 0x16e98cu;
    // NOP
label_16e990:
    // 0x16e990: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x16e990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x16e994: 0xac40010c  sw          $zero, 0x10C($v0)
    ctx->pc = 0x16e994u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 268), GPR_U32(ctx, 0));
    // 0x16e998: 0xac400110  sw          $zero, 0x110($v0)
    ctx->pc = 0x16e998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 0));
    // 0x16e99c: 0xac400114  sw          $zero, 0x114($v0)
    ctx->pc = 0x16e99cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 0));
    // 0x16e9a0: 0xac400118  sw          $zero, 0x118($v0)
    ctx->pc = 0x16e9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 0));
    // 0x16e9a4: 0xac40011c  sw          $zero, 0x11C($v0)
    ctx->pc = 0x16e9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 0));
    // 0x16e9a8: 0xac400120  sw          $zero, 0x120($v0)
    ctx->pc = 0x16e9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 0));
    // 0x16e9ac: 0xac400124  sw          $zero, 0x124($v0)
    ctx->pc = 0x16e9acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 0));
    // 0x16e9b0: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x16e9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x16e9b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16e9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e9b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16e9b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x16E9BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E9BCu;
            // 0x16e9c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E948u: goto label_16e948;
            case 0x16E950u: goto label_16e950;
            case 0x16E968u: goto label_16e968;
            case 0x16E970u: goto label_16e970;
            case 0x16E988u: goto label_16e988;
            case 0x16E990u: goto label_16e990;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16E9C4u;
}
