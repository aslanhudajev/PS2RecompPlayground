#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: RankingInsert
// Address: 0x198130 - 0x198448
void RankingInsert_0x198130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("RankingInsert_0x198130");
#endif

    ctx->pc = 0x198130u;

    // 0x198130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x198130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x198134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x198134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x198138: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x198138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19813c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19813cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198140: 0xc066114  jal         func_198450
    ctx->pc = 0x198140u;
    SET_GPR_U32(ctx, 31, 0x198148u);
    ctx->pc = 0x198144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198140u;
            // 0x198144: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198450u;
    if (runtime->hasFunction(0x198450u)) {
        auto targetFn = runtime->lookupFunction(0x198450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198148u; }
        if (ctx->pc != 0x198148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isRankin_0x198450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198148u; }
        if (ctx->pc != 0x198148u) { return; }
    }
    ctx->pc = 0x198148u;
    // 0x198148: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x198148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x19814c: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x19814cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x198150: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x198150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x198154: 0x2484164c  addiu       $a0, $a0, 0x164C
    ctx->pc = 0x198154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5708));
    // 0x198158: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x198158u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x19815c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x19815cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x198160: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x198160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x198164: 0x28410013  slti        $at, $v0, 0x13
    ctx->pc = 0x198164u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x198168: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x198168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19816c: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x19816cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x198170: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x198170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x198174: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x198174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198178: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x198178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19817c: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x19817cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x198180: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x198180u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x198184: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x198184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x198188: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x198188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x19818c: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x19818cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198190: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x198190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198194: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x198194u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x198198: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x198198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x19819c: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x19819cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1981a0: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1981a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1981a4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1981a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1981a8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1981a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1981ac: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x1981acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1981b0: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1981b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1981b4: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1981b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1981b8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1981b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1981bc: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1981bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1981c0: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1981c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1981c4: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x1981c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1981c8: 0x10200085  beqz        $at, . + 4 + (0x85 << 2)
    ctx->pc = 0x1981C8u;
    {
        const bool branch_taken_0x1981c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1981CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1981C8u;
            // 0x1981cc: 0xe4800014  swc1        $f0, 0x14($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1981c8) {
            ctx->pc = 0x1983E0u;
            goto label_1983e0;
        }
    }
    ctx->pc = 0x1981D0u;
    // 0x1981d0: 0x2443ffed  addiu       $v1, $v0, -0x13
    ctx->pc = 0x1981d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967277));
    // 0x1981d4: 0x31823  negu        $v1, $v1
    ctx->pc = 0x1981d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1981d8: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x1981d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1981dc: 0x14200068  bnez        $at, . + 4 + (0x68 << 2)
    ctx->pc = 0x1981DCu;
    {
        const bool branch_taken_0x1981dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1981E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1981DCu;
            // 0x1981e0: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1981dc) {
            ctx->pc = 0x198380u;
            goto label_198380;
        }
    }
    ctx->pc = 0x1981E4u;
    // 0x1981e4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1981e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1981e8: 0x246317d8  addiu       $v1, $v1, 0x17D8
    ctx->pc = 0x1981e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6104));
    // 0x1981ec: 0x0  nop
    ctx->pc = 0x1981ecu;
    // NOP
label_1981f0:
    // 0x1981f0: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x1981f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x1981f4: 0xc4630024  lwc1        $f3, 0x24($v1)
    ctx->pc = 0x1981f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1981f8: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x1981f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1981fc: 0xc4620028  lwc1        $f2, 0x28($v1)
    ctx->pc = 0x1981fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x198200: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x198200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198204: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x198204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198208: 0xe463003c  swc1        $f3, 0x3C($v1)
    ctx->pc = 0x198208u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x19820c: 0xe4620040  swc1        $f2, 0x40($v1)
    ctx->pc = 0x19820cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x198210: 0xe4610044  swc1        $f1, 0x44($v1)
    ctx->pc = 0x198210u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x198214: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x198214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x198218: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x198218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19821c: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x19821cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198220: 0xe461004c  swc1        $f1, 0x4C($v1)
    ctx->pc = 0x198220u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 76), bits); }
    // 0x198224: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x198224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x198228: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x198228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19822c: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x19822cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x198230: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x198230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198234: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x198234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198238: 0xe4630024  swc1        $f3, 0x24($v1)
    ctx->pc = 0x198238u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x19823c: 0xe4620028  swc1        $f2, 0x28($v1)
    ctx->pc = 0x19823cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x198240: 0xe461002c  swc1        $f1, 0x2C($v1)
    ctx->pc = 0x198240u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x198244: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x198244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x198248: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x198248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19824c: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x19824cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198250: 0xe4610034  swc1        $f1, 0x34($v1)
    ctx->pc = 0x198250u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x198254: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x198254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x198258: 0xc463fff4  lwc1        $f3, -0xC($v1)
    ctx->pc = 0x198258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19825c: 0xc462fff8  lwc1        $f2, -0x8($v1)
    ctx->pc = 0x19825cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x198260: 0xc461fffc  lwc1        $f1, -0x4($v1)
    ctx->pc = 0x198260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198264: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x198264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198268: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x198268u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x19826c: 0xe4620010  swc1        $f2, 0x10($v1)
    ctx->pc = 0x19826cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x198270: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x198270u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x198274: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x198274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x198278: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x198278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19827c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x19827cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198280: 0xe461001c  swc1        $f1, 0x1C($v1)
    ctx->pc = 0x198280u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x198284: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x198284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x198288: 0xc463ffdc  lwc1        $f3, -0x24($v1)
    ctx->pc = 0x198288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19828c: 0xc462ffe0  lwc1        $f2, -0x20($v1)
    ctx->pc = 0x19828cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x198290: 0xc461ffe4  lwc1        $f1, -0x1C($v1)
    ctx->pc = 0x198290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198294: 0xc460ffe8  lwc1        $f0, -0x18($v1)
    ctx->pc = 0x198294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198298: 0xe463fff4  swc1        $f3, -0xC($v1)
    ctx->pc = 0x198298u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), bits); }
    // 0x19829c: 0xe462fff8  swc1        $f2, -0x8($v1)
    ctx->pc = 0x19829cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), bits); }
    // 0x1982a0: 0xe461fffc  swc1        $f1, -0x4($v1)
    ctx->pc = 0x1982a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), bits); }
    // 0x1982a4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1982a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1982a8: 0xc461ffec  lwc1        $f1, -0x14($v1)
    ctx->pc = 0x1982a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1982ac: 0xc460fff0  lwc1        $f0, -0x10($v1)
    ctx->pc = 0x1982acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1982b0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1982b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1982b4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1982b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1982b8: 0xc463ffc4  lwc1        $f3, -0x3C($v1)
    ctx->pc = 0x1982b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1982bc: 0xc462ffc8  lwc1        $f2, -0x38($v1)
    ctx->pc = 0x1982bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1982c0: 0xc461ffcc  lwc1        $f1, -0x34($v1)
    ctx->pc = 0x1982c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1982c4: 0xc460ffd0  lwc1        $f0, -0x30($v1)
    ctx->pc = 0x1982c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1982c8: 0xe463ffdc  swc1        $f3, -0x24($v1)
    ctx->pc = 0x1982c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967260), bits); }
    // 0x1982cc: 0xe462ffe0  swc1        $f2, -0x20($v1)
    ctx->pc = 0x1982ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967264), bits); }
    // 0x1982d0: 0xe461ffe4  swc1        $f1, -0x1C($v1)
    ctx->pc = 0x1982d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967268), bits); }
    // 0x1982d4: 0xe460ffe8  swc1        $f0, -0x18($v1)
    ctx->pc = 0x1982d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967272), bits); }
    // 0x1982d8: 0xc461ffd4  lwc1        $f1, -0x2C($v1)
    ctx->pc = 0x1982d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1982dc: 0xc460ffd8  lwc1        $f0, -0x28($v1)
    ctx->pc = 0x1982dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1982e0: 0xe461ffec  swc1        $f1, -0x14($v1)
    ctx->pc = 0x1982e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967276), bits); }
    // 0x1982e4: 0xe460fff0  swc1        $f0, -0x10($v1)
    ctx->pc = 0x1982e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967280), bits); }
    // 0x1982e8: 0xc463ffac  lwc1        $f3, -0x54($v1)
    ctx->pc = 0x1982e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1982ec: 0xc462ffb0  lwc1        $f2, -0x50($v1)
    ctx->pc = 0x1982ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1982f0: 0xc461ffb4  lwc1        $f1, -0x4C($v1)
    ctx->pc = 0x1982f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1982f4: 0xc460ffb8  lwc1        $f0, -0x48($v1)
    ctx->pc = 0x1982f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1982f8: 0xe463ffc4  swc1        $f3, -0x3C($v1)
    ctx->pc = 0x1982f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967236), bits); }
    // 0x1982fc: 0xe462ffc8  swc1        $f2, -0x38($v1)
    ctx->pc = 0x1982fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967240), bits); }
    // 0x198300: 0xe461ffcc  swc1        $f1, -0x34($v1)
    ctx->pc = 0x198300u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967244), bits); }
    // 0x198304: 0xe460ffd0  swc1        $f0, -0x30($v1)
    ctx->pc = 0x198304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967248), bits); }
    // 0x198308: 0xc461ffbc  lwc1        $f1, -0x44($v1)
    ctx->pc = 0x198308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19830c: 0xc460ffc0  lwc1        $f0, -0x40($v1)
    ctx->pc = 0x19830cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198310: 0xe461ffd4  swc1        $f1, -0x2C($v1)
    ctx->pc = 0x198310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967252), bits); }
    // 0x198314: 0xe460ffd8  swc1        $f0, -0x28($v1)
    ctx->pc = 0x198314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967256), bits); }
    // 0x198318: 0xc463ff94  lwc1        $f3, -0x6C($v1)
    ctx->pc = 0x198318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19831c: 0xc462ff98  lwc1        $f2, -0x68($v1)
    ctx->pc = 0x19831cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x198320: 0xc461ff9c  lwc1        $f1, -0x64($v1)
    ctx->pc = 0x198320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198324: 0xc460ffa0  lwc1        $f0, -0x60($v1)
    ctx->pc = 0x198324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198328: 0xe463ffac  swc1        $f3, -0x54($v1)
    ctx->pc = 0x198328u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967212), bits); }
    // 0x19832c: 0xe462ffb0  swc1        $f2, -0x50($v1)
    ctx->pc = 0x19832cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967216), bits); }
    // 0x198330: 0xe461ffb4  swc1        $f1, -0x4C($v1)
    ctx->pc = 0x198330u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967220), bits); }
    // 0x198334: 0xe460ffb8  swc1        $f0, -0x48($v1)
    ctx->pc = 0x198334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967224), bits); }
    // 0x198338: 0xc461ffa4  lwc1        $f1, -0x5C($v1)
    ctx->pc = 0x198338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19833c: 0xc460ffa8  lwc1        $f0, -0x58($v1)
    ctx->pc = 0x19833cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198340: 0xe461ffbc  swc1        $f1, -0x44($v1)
    ctx->pc = 0x198340u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967228), bits); }
    // 0x198344: 0xe460ffc0  swc1        $f0, -0x40($v1)
    ctx->pc = 0x198344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967232), bits); }
    // 0x198348: 0xc463ff7c  lwc1        $f3, -0x84($v1)
    ctx->pc = 0x198348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19834c: 0xc462ff80  lwc1        $f2, -0x80($v1)
    ctx->pc = 0x19834cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x198350: 0xc461ff84  lwc1        $f1, -0x7C($v1)
    ctx->pc = 0x198350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198354: 0xc460ff88  lwc1        $f0, -0x78($v1)
    ctx->pc = 0x198354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198358: 0xe463ff94  swc1        $f3, -0x6C($v1)
    ctx->pc = 0x198358u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967188), bits); }
    // 0x19835c: 0xe462ff98  swc1        $f2, -0x68($v1)
    ctx->pc = 0x19835cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967192), bits); }
    // 0x198360: 0xe461ff9c  swc1        $f1, -0x64($v1)
    ctx->pc = 0x198360u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967196), bits); }
    // 0x198364: 0xe460ffa0  swc1        $f0, -0x60($v1)
    ctx->pc = 0x198364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967200), bits); }
    // 0x198368: 0xc461ff8c  lwc1        $f1, -0x74($v1)
    ctx->pc = 0x198368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19836c: 0xc460ff90  lwc1        $f0, -0x70($v1)
    ctx->pc = 0x19836cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198370: 0xe461ffa4  swc1        $f1, -0x5C($v1)
    ctx->pc = 0x198370u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967204), bits); }
    // 0x198374: 0xe460ffa8  swc1        $f0, -0x58($v1)
    ctx->pc = 0x198374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967208), bits); }
    // 0x198378: 0x1420ff9d  bnez        $at, . + 4 + (-0x63 << 2)
    ctx->pc = 0x198378u;
    {
        const bool branch_taken_0x198378 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19837Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198378u;
            // 0x19837c: 0x2463ff40  addiu       $v1, $v1, -0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198378) {
            ctx->pc = 0x1981F0u;
            goto label_1981f0;
        }
    }
    ctx->pc = 0x198380u;
label_198380:
    // 0x198380: 0x46082a  slt         $at, $v0, $a2
    ctx->pc = 0x198380u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x198384: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x198384u;
    {
        const bool branch_taken_0x198384 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x198388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198384u;
            // 0x198388: 0x62040  sll         $a0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198384) {
            ctx->pc = 0x1983E0u;
            goto label_1983e0;
        }
    }
    ctx->pc = 0x19838Cu;
    // 0x19838c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x19838cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x198390: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x198390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x198394: 0x24631610  addiu       $v1, $v1, 0x1610
    ctx->pc = 0x198394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5648));
    // 0x198398: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x198398u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x19839c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19839cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1983a0:
    // 0x1983a0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1983a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1983a4: 0xc4630024  lwc1        $f3, 0x24($v1)
    ctx->pc = 0x1983a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1983a8: 0x46082a  slt         $at, $v0, $a2
    ctx->pc = 0x1983a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1983ac: 0xc4620028  lwc1        $f2, 0x28($v1)
    ctx->pc = 0x1983acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1983b0: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x1983b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1983b4: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x1983b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1983b8: 0xe463003c  swc1        $f3, 0x3C($v1)
    ctx->pc = 0x1983b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x1983bc: 0xe4620040  swc1        $f2, 0x40($v1)
    ctx->pc = 0x1983bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x1983c0: 0xe4610044  swc1        $f1, 0x44($v1)
    ctx->pc = 0x1983c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x1983c4: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x1983c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x1983c8: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x1983c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1983cc: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x1983ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1983d0: 0xe461004c  swc1        $f1, 0x4C($v1)
    ctx->pc = 0x1983d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 76), bits); }
    // 0x1983d4: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x1983d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x1983d8: 0x1420fff1  bnez        $at, . + 4 + (-0xF << 2)
    ctx->pc = 0x1983D8u;
    {
        const bool branch_taken_0x1983d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1983DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1983D8u;
            // 0x1983dc: 0x2463ffe8  addiu       $v1, $v1, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983d8) {
            ctx->pc = 0x1983A0u;
            goto label_1983a0;
        }
    }
    ctx->pc = 0x1983E0u;
label_1983e0:
    // 0x1983e0: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x1983e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1983e4: 0x10c30014  beq         $a2, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1983E4u;
    {
        const bool branch_taken_0x1983e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1983E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1983E4u;
            // 0x1983e8: 0x61840  sll         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983e4) {
            ctx->pc = 0x198438u;
            goto label_198438;
        }
    }
    ctx->pc = 0x1983ECu;
    // 0x1983ec: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x1983ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x1983f0: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1983f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1983f4: 0x24841664  addiu       $a0, $a0, 0x1664
    ctx->pc = 0x1983f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5732));
    // 0x1983f8: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1983f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1983fc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1983fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x198400: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x198400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x198404: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x198404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x198408: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x198408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19840c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x19840cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198410: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x198410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198414: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x198414u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x198418: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x198418u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x19841c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x19841cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x198420: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x198420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x198424: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x198424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198428: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x198428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19842c: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x19842cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x198430: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x198430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x198434: 0x0  nop
    ctx->pc = 0x198434u;
    // NOP
label_198438:
    // 0x198438: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x198438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19843c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19843cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198440: 0x3e00008  jr          $ra
    ctx->pc = 0x198440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198440u;
            // 0x198444: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1981F0u: goto label_1981f0;
            case 0x198380u: goto label_198380;
            case 0x1983A0u: goto label_1983a0;
            case 0x1983E0u: goto label_1983e0;
            case 0x198438u: goto label_198438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198448u;
}
