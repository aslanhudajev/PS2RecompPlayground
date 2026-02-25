#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CutInMove
// Address: 0x14f5d0 - 0x14f884
void CutInMove_0x14f5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CutInMove_0x14f5d0");
#endif

    ctx->pc = 0x14f5d0u;

    // 0x14f5d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14f5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14f5d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14f5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14f5d8: 0xc056f40  jal         func_15BD00
    ctx->pc = 0x14F5D8u;
    SET_GPR_U32(ctx, 31, 0x14F5E0u);
    ctx->pc = 0x14F5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F5D8u;
            // 0x14f5dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD00u;
    if (runtime->hasFunction(0x15BD00u)) {
        auto targetFn = runtime->lookupFunction(0x15BD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F5E0u; }
        if (ctx->pc != 0x14F5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isCutin_0x15bd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F5E0u; }
        if (ctx->pc != 0x14F5E0u) { return; }
    }
    ctx->pc = 0x14F5E0u;
    // 0x14f5e0: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x14F5E0u;
    {
        const bool branch_taken_0x14f5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F5E0u;
            // 0x14f5e4: 0x3c040028  lui         $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f5e0) {
            ctx->pc = 0x14F6C8u;
            goto label_14f6c8;
        }
    }
    ctx->pc = 0x14F5E8u;
    // 0x14f5e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14f5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f5ec: 0x24849f60  addiu       $a0, $a0, -0x60A0
    ctx->pc = 0x14f5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942560));
    // 0x14f5f0: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x14f5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x14f5f4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x14f5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x14f5f8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x14f5f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x14f5fc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x14f5fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14f600: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14f600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x14f604: 0x3c03c300  lui         $v1, 0xC300
    ctx->pc = 0x14f604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49920 << 16));
    // 0x14f608: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14f608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14f60c: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x14f60cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x14f610: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14f610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14f614: 0x0  nop
    ctx->pc = 0x14f614u;
    // NOP
label_14f618:
    // 0x14f618: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x14f618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f61c: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x14f61cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f620: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x14F620u;
    {
        const bool branch_taken_0x14f620 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f620) {
            ctx->pc = 0x14F630u;
            goto label_14f630;
        }
    }
    ctx->pc = 0x14F628u;
    // 0x14f628: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x14f628u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x14f62c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x14f62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_14f630:
    // 0x14f630: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x14f630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f634: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x14f634u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f638: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x14F638u;
    {
        const bool branch_taken_0x14f638 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f638) {
            ctx->pc = 0x14F648u;
            goto label_14f648;
        }
    }
    ctx->pc = 0x14F640u;
    // 0x14f640: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x14f640u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x14f644: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x14f644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_14f648:
    // 0x14f648: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x14f648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f64c: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x14f64cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f650: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x14F650u;
    {
        const bool branch_taken_0x14f650 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f650) {
            ctx->pc = 0x14F660u;
            goto label_14f660;
        }
    }
    ctx->pc = 0x14F658u;
    // 0x14f658: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14f658u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14f65c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x14f65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_14f660:
    // 0x14f660: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x14f660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f664: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14f664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f668: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x14F668u;
    {
        const bool branch_taken_0x14f668 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f668) {
            ctx->pc = 0x14F678u;
            goto label_14f678;
        }
    }
    ctx->pc = 0x14F670u;
    // 0x14f670: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x14f670u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x14f674: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x14f674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_14f678:
    // 0x14f678: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14f678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14f67c: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x14f67cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x14f680: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x14F680u;
    {
        const bool branch_taken_0x14f680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F680u;
            // 0x14f684: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f680) {
            ctx->pc = 0x14F618u;
            goto label_14f618;
        }
    }
    ctx->pc = 0x14F688u;
    // 0x14f688: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x14f688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x14f68c: 0x8c239d48  lw          $v1, -0x62B8($at)
    ctx->pc = 0x14f68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942024)));
    // 0x14f690: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x14f690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x14f694: 0x8c229d40  lw          $v0, -0x62C0($at)
    ctx->pc = 0x14f694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942016)));
    // 0x14f698: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x14f698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x14f69c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14f6a0: 0xa0239d53  sb          $v1, -0x62AD($at)
    ctx->pc = 0x14f6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942035), (uint8_t)GPR_U32(ctx, 3));
    // 0x14f6a4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x14f6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x14f6a8: 0xac229d48  sw          $v0, -0x62B8($at)
    ctx->pc = 0x14f6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942024), GPR_U32(ctx, 2));
    // 0x14f6ac: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x14f6acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x14f6b0: 0x8c229d48  lw          $v0, -0x62B8($at)
    ctx->pc = 0x14f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942024)));
    // 0x14f6b4: 0x28410081  slti        $at, $v0, 0x81
    ctx->pc = 0x14f6b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x14f6b8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F6B8u;
    {
        const bool branch_taken_0x14f6b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F6B8u;
            // 0x14f6bc: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f6b8) {
            ctx->pc = 0x14F6C8u;
            goto label_14f6c8;
        }
    }
    ctx->pc = 0x14F6C0u;
    // 0x14f6c0: 0xac209d40  sw          $zero, -0x62C0($at)
    ctx->pc = 0x14f6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942016), GPR_U32(ctx, 0));
    // 0x14f6c4: 0x0  nop
    ctx->pc = 0x14f6c4u;
    // NOP
label_14f6c8:
    // 0x14f6c8: 0xc056f40  jal         func_15BD00
    ctx->pc = 0x14F6C8u;
    SET_GPR_U32(ctx, 31, 0x14F6D0u);
    ctx->pc = 0x14F6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F6C8u;
            // 0x14f6cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD00u;
    if (runtime->hasFunction(0x15BD00u)) {
        auto targetFn = runtime->lookupFunction(0x15BD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F6D0u; }
        if (ctx->pc != 0x14F6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isCutin_0x15bd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F6D0u; }
        if (ctx->pc != 0x14F6D0u) { return; }
    }
    ctx->pc = 0x14F6D0u;
    // 0x14f6d0: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x14F6D0u;
    {
        const bool branch_taken_0x14f6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F6D0u;
            // 0x14f6d4: 0x3c050028  lui         $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f6d0) {
            ctx->pc = 0x14F7B8u;
            goto label_14f7b8;
        }
    }
    ctx->pc = 0x14F6D8u;
    // 0x14f6d8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x14f6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14f6dc: 0x24a5a060  addiu       $a1, $a1, -0x5FA0
    ctx->pc = 0x14f6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942816));
    // 0x14f6e0: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x14f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x14f6e4: 0x3c03c300  lui         $v1, 0xC300
    ctx->pc = 0x14f6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49920 << 16));
    // 0x14f6e8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x14f6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x14f6ec: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x14f6ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14f6f0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14f6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x14f6f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14f6f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14f6f8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x14f6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x14f6fc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14f6fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14f700: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x14f700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x14f704: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x14f704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_14f708:
    // 0x14f708: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x14f708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f70c: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x14f70cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f710: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x14F710u;
    {
        const bool branch_taken_0x14f710 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f710) {
            ctx->pc = 0x14F720u;
            goto label_14f720;
        }
    }
    ctx->pc = 0x14F718u;
    // 0x14f718: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x14f718u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x14f71c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x14f71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_14f720:
    // 0x14f720: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x14f720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f724: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x14f724u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f728: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x14F728u;
    {
        const bool branch_taken_0x14f728 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f728) {
            ctx->pc = 0x14F738u;
            goto label_14f738;
        }
    }
    ctx->pc = 0x14F730u;
    // 0x14f730: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x14f730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x14f734: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x14f734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_14f738:
    // 0x14f738: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x14f738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f73c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x14f73cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f740: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x14F740u;
    {
        const bool branch_taken_0x14f740 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f740) {
            ctx->pc = 0x14F750u;
            goto label_14f750;
        }
    }
    ctx->pc = 0x14F748u;
    // 0x14f748: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14f748u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14f74c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x14f74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_14f750:
    // 0x14f750: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x14f750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f754: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x14f754u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f758: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x14F758u;
    {
        const bool branch_taken_0x14f758 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f758) {
            ctx->pc = 0x14F768u;
            goto label_14f768;
        }
    }
    ctx->pc = 0x14F760u;
    // 0x14f760: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14f760u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14f764: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x14f764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_14f768:
    // 0x14f768: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14f768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14f76c: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x14f76cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x14f770: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x14F770u;
    {
        const bool branch_taken_0x14f770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F770u;
            // 0x14f774: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f770) {
            ctx->pc = 0x14F708u;
            goto label_14f708;
        }
    }
    ctx->pc = 0x14F778u;
    // 0x14f778: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x14f778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x14f77c: 0x8c239d4c  lw          $v1, -0x62B4($at)
    ctx->pc = 0x14f77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942028)));
    // 0x14f780: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x14f780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x14f784: 0x8c229d44  lw          $v0, -0x62BC($at)
    ctx->pc = 0x14f784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942020)));
    // 0x14f788: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x14f788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x14f78c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14f790: 0xa0239d57  sb          $v1, -0x62A9($at)
    ctx->pc = 0x14f790u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942039), (uint8_t)GPR_U32(ctx, 3));
    // 0x14f794: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x14f794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x14f798: 0xac229d4c  sw          $v0, -0x62B4($at)
    ctx->pc = 0x14f798u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942028), GPR_U32(ctx, 2));
    // 0x14f79c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x14f79cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x14f7a0: 0x8c229d4c  lw          $v0, -0x62B4($at)
    ctx->pc = 0x14f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942028)));
    // 0x14f7a4: 0x28410081  slti        $at, $v0, 0x81
    ctx->pc = 0x14f7a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x14f7a8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F7A8u;
    {
        const bool branch_taken_0x14f7a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F7A8u;
            // 0x14f7ac: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f7a8) {
            ctx->pc = 0x14F7B8u;
            goto label_14f7b8;
        }
    }
    ctx->pc = 0x14F7B0u;
    // 0x14f7b0: 0xac209d44  sw          $zero, -0x62BC($at)
    ctx->pc = 0x14f7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942020), GPR_U32(ctx, 0));
    // 0x14f7b4: 0x0  nop
    ctx->pc = 0x14f7b4u;
    // NOP
label_14f7b8:
    // 0x14f7b8: 0xc056f40  jal         func_15BD00
    ctx->pc = 0x14F7B8u;
    SET_GPR_U32(ctx, 31, 0x14F7C0u);
    ctx->pc = 0x14F7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F7B8u;
            // 0x14f7bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD00u;
    if (runtime->hasFunction(0x15BD00u)) {
        auto targetFn = runtime->lookupFunction(0x15BD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F7C0u; }
        if (ctx->pc != 0x14F7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isCutin_0x15bd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F7C0u; }
        if (ctx->pc != 0x14F7C0u) { return; }
    }
    ctx->pc = 0x14F7C0u;
    // 0x14f7c0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x14F7C0u;
    {
        const bool branch_taken_0x14f7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F7C0u;
            // 0x14f7c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f7c0) {
            ctx->pc = 0x14F820u;
            goto label_14f820;
        }
    }
    ctx->pc = 0x14F7C8u;
    // 0x14f7c8: 0xc056f40  jal         func_15BD00
    ctx->pc = 0x14F7C8u;
    SET_GPR_U32(ctx, 31, 0x14F7D0u);
    ctx->pc = 0x15BD00u;
    if (runtime->hasFunction(0x15BD00u)) {
        auto targetFn = runtime->lookupFunction(0x15BD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F7D0u; }
        if (ctx->pc != 0x14F7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isCutin_0x15bd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F7D0u; }
        if (ctx->pc != 0x14F7D0u) { return; }
    }
    ctx->pc = 0x14F7D0u;
    // 0x14f7d0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14F7D0u;
    {
        const bool branch_taken_0x14f7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F7D0u;
            // 0x14f7d4: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f7d0) {
            ctx->pc = 0x14F820u;
            goto label_14f820;
        }
    }
    ctx->pc = 0x14F7D8u;
    // 0x14f7d8: 0x8c239d48  lw          $v1, -0x62B8($at)
    ctx->pc = 0x14f7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942024)));
    // 0x14f7dc: 0x28610021  slti        $at, $v1, 0x21
    ctx->pc = 0x14f7dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x14f7e0: 0x14200025  bnez        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x14F7E0u;
    {
        const bool branch_taken_0x14f7e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f7e0) {
            ctx->pc = 0x14F878u;
            goto label_14f878;
        }
    }
    ctx->pc = 0x14F7E8u;
    // 0x14f7e8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x14f7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x14f7ec: 0x8c239d4c  lw          $v1, -0x62B4($at)
    ctx->pc = 0x14f7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942028)));
    // 0x14f7f0: 0x28610021  slti        $at, $v1, 0x21
    ctx->pc = 0x14f7f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x14f7f4: 0x14200020  bnez        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x14F7F4u;
    {
        const bool branch_taken_0x14f7f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F7F4u;
            // 0x14f7f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f7f4) {
            ctx->pc = 0x14F878u;
            goto label_14f878;
        }
    }
    ctx->pc = 0x14F7FCu;
    // 0x14f7fc: 0xc056f48  jal         func_15BD20
    ctx->pc = 0x14F7FCu;
    SET_GPR_U32(ctx, 31, 0x14F804u);
    ctx->pc = 0x15BD20u;
    if (runtime->hasFunction(0x15BD20u)) {
        auto targetFn = runtime->lookupFunction(0x15BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F804u; }
        if (ctx->pc != 0x14F804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setCutinEnd_0x15bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F804u; }
        if (ctx->pc != 0x14F804u) { return; }
    }
    ctx->pc = 0x14F804u;
    // 0x14f804: 0xc056f48  jal         func_15BD20
    ctx->pc = 0x14F804u;
    SET_GPR_U32(ctx, 31, 0x14F80Cu);
    ctx->pc = 0x14F808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F804u;
            // 0x14f808: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD20u;
    if (runtime->hasFunction(0x15BD20u)) {
        auto targetFn = runtime->lookupFunction(0x15BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F80Cu; }
        if (ctx->pc != 0x14F80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setCutinEnd_0x15bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F80Cu; }
        if (ctx->pc != 0x14F80Cu) { return; }
    }
    ctx->pc = 0x14F80Cu;
    // 0x14f80c: 0xc0656c4  jal         func_195B10
    ctx->pc = 0x14F80Cu;
    SET_GPR_U32(ctx, 31, 0x14F814u);
    ctx->pc = 0x195B10u;
    if (runtime->hasFunction(0x195B10u)) {
        auto targetFn = runtime->lookupFunction(0x195B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F814u; }
        if (ctx->pc != 0x14F814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotBloadCastDead_0x195b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F814u; }
        if (ctx->pc != 0x14F814u) { return; }
    }
    ctx->pc = 0x14F814u;
    // 0x14f814: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x14F814u;
    {
        const bool branch_taken_0x14f814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f814) {
            ctx->pc = 0x14F878u;
            goto label_14f878;
        }
    }
    ctx->pc = 0x14F81Cu;
    // 0x14f81c: 0x0  nop
    ctx->pc = 0x14f81cu;
    // NOP
label_14f820:
    // 0x14f820: 0xc056f40  jal         func_15BD00
    ctx->pc = 0x14F820u;
    SET_GPR_U32(ctx, 31, 0x14F828u);
    ctx->pc = 0x14F824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F820u;
            // 0x14f824: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD00u;
    if (runtime->hasFunction(0x15BD00u)) {
        auto targetFn = runtime->lookupFunction(0x15BD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F828u; }
        if (ctx->pc != 0x14F828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isCutin_0x15bd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F828u; }
        if (ctx->pc != 0x14F828u) { return; }
    }
    ctx->pc = 0x14F828u;
    // 0x14f828: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14F828u;
    {
        const bool branch_taken_0x14f828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F828u;
            // 0x14f82c: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f828) {
            ctx->pc = 0x14F850u;
            goto label_14f850;
        }
    }
    ctx->pc = 0x14F830u;
    // 0x14f830: 0x8c239d48  lw          $v1, -0x62B8($at)
    ctx->pc = 0x14f830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942024)));
    // 0x14f834: 0x28610021  slti        $at, $v1, 0x21
    ctx->pc = 0x14f834u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x14f838: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x14F838u;
    {
        const bool branch_taken_0x14f838 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F838u;
            // 0x14f83c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f838) {
            ctx->pc = 0x14F878u;
            goto label_14f878;
        }
    }
    ctx->pc = 0x14F840u;
    // 0x14f840: 0xc056f48  jal         func_15BD20
    ctx->pc = 0x14F840u;
    SET_GPR_U32(ctx, 31, 0x14F848u);
    ctx->pc = 0x15BD20u;
    if (runtime->hasFunction(0x15BD20u)) {
        auto targetFn = runtime->lookupFunction(0x15BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F848u; }
        if (ctx->pc != 0x14F848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setCutinEnd_0x15bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F848u; }
        if (ctx->pc != 0x14F848u) { return; }
    }
    ctx->pc = 0x14F848u;
    // 0x14f848: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14F848u;
    {
        const bool branch_taken_0x14f848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f848) {
            ctx->pc = 0x14F878u;
            goto label_14f878;
        }
    }
    ctx->pc = 0x14F850u;
label_14f850:
    // 0x14f850: 0xc056f40  jal         func_15BD00
    ctx->pc = 0x14F850u;
    SET_GPR_U32(ctx, 31, 0x14F858u);
    ctx->pc = 0x14F854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F850u;
            // 0x14f854: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD00u;
    if (runtime->hasFunction(0x15BD00u)) {
        auto targetFn = runtime->lookupFunction(0x15BD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F858u; }
        if (ctx->pc != 0x14F858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isCutin_0x15bd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F858u; }
        if (ctx->pc != 0x14F858u) { return; }
    }
    ctx->pc = 0x14F858u;
    // 0x14f858: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14F858u;
    {
        const bool branch_taken_0x14f858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F858u;
            // 0x14f85c: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f858) {
            ctx->pc = 0x14F878u;
            goto label_14f878;
        }
    }
    ctx->pc = 0x14F860u;
    // 0x14f860: 0x8c239d4c  lw          $v1, -0x62B4($at)
    ctx->pc = 0x14f860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942028)));
    // 0x14f864: 0x28610021  slti        $at, $v1, 0x21
    ctx->pc = 0x14f864u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x14f868: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F868u;
    {
        const bool branch_taken_0x14f868 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F868u;
            // 0x14f86c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f868) {
            ctx->pc = 0x14F878u;
            goto label_14f878;
        }
    }
    ctx->pc = 0x14F870u;
    // 0x14f870: 0xc056f48  jal         func_15BD20
    ctx->pc = 0x14F870u;
    SET_GPR_U32(ctx, 31, 0x14F878u);
    ctx->pc = 0x15BD20u;
    if (runtime->hasFunction(0x15BD20u)) {
        auto targetFn = runtime->lookupFunction(0x15BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F878u; }
        if (ctx->pc != 0x14F878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setCutinEnd_0x15bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F878u; }
        if (ctx->pc != 0x14F878u) { return; }
    }
    ctx->pc = 0x14F878u;
label_14f878:
    // 0x14f878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14f878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f87c: 0x3e00008  jr          $ra
    ctx->pc = 0x14F87Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F87Cu;
            // 0x14f880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F618u: goto label_14f618;
            case 0x14F630u: goto label_14f630;
            case 0x14F648u: goto label_14f648;
            case 0x14F660u: goto label_14f660;
            case 0x14F678u: goto label_14f678;
            case 0x14F6C8u: goto label_14f6c8;
            case 0x14F708u: goto label_14f708;
            case 0x14F720u: goto label_14f720;
            case 0x14F738u: goto label_14f738;
            case 0x14F750u: goto label_14f750;
            case 0x14F768u: goto label_14f768;
            case 0x14F7B8u: goto label_14f7b8;
            case 0x14F820u: goto label_14f820;
            case 0x14F850u: goto label_14f850;
            case 0x14F878u: goto label_14f878;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14F884u;
}
