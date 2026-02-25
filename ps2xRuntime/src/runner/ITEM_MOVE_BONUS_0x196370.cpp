#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ITEM_MOVE_BONUS
// Address: 0x196370 - 0x19650c
void ITEM_MOVE_BONUS_0x196370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ITEM_MOVE_BONUS_0x196370");
#endif

    ctx->pc = 0x196370u;

    // 0x196370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x196374: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x196374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x196378: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19637c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19637cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x196380: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x196380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x196384: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x196384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196388: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x196388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19638c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x19638cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x196390: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x196390u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x196394: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x196394u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x196398: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x196398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19639c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19639cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1963a0: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1963a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1963a4: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x1963a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1963a8: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1963A8u;
    {
        const bool branch_taken_0x1963a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1963ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1963A8u;
            // 0x1963ac: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1963a8) {
            ctx->pc = 0x196450u;
            goto label_196450;
        }
    }
    ctx->pc = 0x1963B0u;
    // 0x1963b0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1963b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1963b4: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1963B4u;
    {
        const bool branch_taken_0x1963b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1963B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1963B4u;
            // 0x1963b8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1963b4) {
            ctx->pc = 0x196440u;
            goto label_196440;
        }
    }
    ctx->pc = 0x1963BCu;
    // 0x1963bc: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1963BCu;
    {
        const bool branch_taken_0x1963bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1963bc) {
            ctx->pc = 0x196430u;
            goto label_196430;
        }
    }
    ctx->pc = 0x1963C4u;
    // 0x1963c4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1963c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1963c8: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1963C8u;
    {
        const bool branch_taken_0x1963c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1963CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1963C8u;
            // 0x1963cc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1963c8) {
            ctx->pc = 0x196420u;
            goto label_196420;
        }
    }
    ctx->pc = 0x1963D0u;
    // 0x1963d0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1963D0u;
    {
        const bool branch_taken_0x1963d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1963d0) {
            ctx->pc = 0x196410u;
            goto label_196410;
        }
    }
    ctx->pc = 0x1963D8u;
    // 0x1963d8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1963d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1963dc: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1963DCu;
    {
        const bool branch_taken_0x1963dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1963dc) {
            ctx->pc = 0x196400u;
            goto label_196400;
        }
    }
    ctx->pc = 0x1963E4u;
    // 0x1963e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1963E4u;
    {
        const bool branch_taken_0x1963e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1963e4) {
            ctx->pc = 0x1963F8u;
            goto label_1963f8;
        }
    }
    ctx->pc = 0x1963ECu;
    // 0x1963ec: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1963ECu;
    {
        const bool branch_taken_0x1963ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1963ec) {
            ctx->pc = 0x196458u;
            goto label_196458;
        }
    }
    ctx->pc = 0x1963F4u;
    // 0x1963f4: 0x0  nop
    ctx->pc = 0x1963f4u;
    // NOP
label_1963f8:
    // 0x1963f8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1963F8u;
    {
        const bool branch_taken_0x1963f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1963FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1963F8u;
            // 0x1963fc: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1963f8) {
            ctx->pc = 0x196458u;
            goto label_196458;
        }
    }
    ctx->pc = 0x196400u;
label_196400:
    // 0x196400: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x196400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196404: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x196404u;
    {
        const bool branch_taken_0x196404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196404u;
            // 0x196408: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196404) {
            ctx->pc = 0x196458u;
            goto label_196458;
        }
    }
    ctx->pc = 0x19640Cu;
    // 0x19640c: 0x0  nop
    ctx->pc = 0x19640cu;
    // NOP
label_196410:
    // 0x196410: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x196410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196414: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x196414u;
    {
        const bool branch_taken_0x196414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196414u;
            // 0x196418: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196414) {
            ctx->pc = 0x196458u;
            goto label_196458;
        }
    }
    ctx->pc = 0x19641Cu;
    // 0x19641c: 0x0  nop
    ctx->pc = 0x19641cu;
    // NOP
label_196420:
    // 0x196420: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x196420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x196424: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x196424u;
    {
        const bool branch_taken_0x196424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196424u;
            // 0x196428: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196424) {
            ctx->pc = 0x196458u;
            goto label_196458;
        }
    }
    ctx->pc = 0x19642Cu;
    // 0x19642c: 0x0  nop
    ctx->pc = 0x19642cu;
    // NOP
label_196430:
    // 0x196430: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x196430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196434: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x196434u;
    {
        const bool branch_taken_0x196434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196434u;
            // 0x196438: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196434) {
            ctx->pc = 0x196458u;
            goto label_196458;
        }
    }
    ctx->pc = 0x19643Cu;
    // 0x19643c: 0x0  nop
    ctx->pc = 0x19643cu;
    // NOP
label_196440:
    // 0x196440: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x196440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x196444: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x196444u;
    {
        const bool branch_taken_0x196444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196444u;
            // 0x196448: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196444) {
            ctx->pc = 0x196458u;
            goto label_196458;
        }
    }
    ctx->pc = 0x19644Cu;
    // 0x19644c: 0x0  nop
    ctx->pc = 0x19644cu;
    // NOP
label_196450:
    // 0x196450: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x196450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x196454: 0xace20038  sw          $v0, 0x38($a3)
    ctx->pc = 0x196454u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 2));
label_196458:
    // 0x196458: 0x8ce30038  lw          $v1, 0x38($a3)
    ctx->pc = 0x196458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x19645c: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x19645cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x196460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x196460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x196464: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x196464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x196468: 0xace20038  sw          $v0, 0x38($a3)
    ctx->pc = 0x196468u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 2));
    // 0x19646c: 0xc4e10010  lwc1        $f1, 0x10($a3)
    ctx->pc = 0x19646cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196470: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x196470u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x196474: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x196474u;
    {
        const bool branch_taken_0x196474 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x196478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196474u;
            // 0x196478: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196474) {
            ctx->pc = 0x196490u;
            goto label_196490;
        }
    }
    ctx->pc = 0x19647Cu;
    // 0x19647c: 0xc065c5c  jal         func_197170
    ctx->pc = 0x19647Cu;
    SET_GPR_U32(ctx, 31, 0x196484u);
    ctx->pc = 0x197170u;
    if (runtime->hasFunction(0x197170u)) {
        auto targetFn = runtime->lookupFunction(0x197170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196484u; }
        if (ctx->pc != 0x196484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemFree_0x197170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196484u; }
        if (ctx->pc != 0x196484u) { return; }
    }
    ctx->pc = 0x196484u;
    // 0x196484: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x196484u;
    {
        const bool branch_taken_0x196484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196484) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x19648Cu;
    // 0x19648c: 0x0  nop
    ctx->pc = 0x19648cu;
    // NOP
label_196490:
    // 0x196490: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x196490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x196494: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x196494u;
    {
        const bool branch_taken_0x196494 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x196498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196494u;
            // 0x196498: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196494) {
            ctx->pc = 0x1964B0u;
            goto label_1964b0;
        }
    }
    ctx->pc = 0x19649Cu;
    // 0x19649c: 0xc065c5c  jal         func_197170
    ctx->pc = 0x19649Cu;
    SET_GPR_U32(ctx, 31, 0x1964A4u);
    ctx->pc = 0x197170u;
    if (runtime->hasFunction(0x197170u)) {
        auto targetFn = runtime->lookupFunction(0x197170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1964A4u; }
        if (ctx->pc != 0x1964A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemFree_0x197170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1964A4u; }
        if (ctx->pc != 0x1964A4u) { return; }
    }
    ctx->pc = 0x1964A4u;
    // 0x1964a4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1964A4u;
    {
        const bool branch_taken_0x1964a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1964a4) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x1964ACu;
    // 0x1964ac: 0x0  nop
    ctx->pc = 0x1964acu;
    // NOP
label_1964b0:
    // 0x1964b0: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1964b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x1964b4: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x1964b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1964b8: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x1964b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x1964bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1964bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1964c0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1964c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1964c4: 0x24e5001c  addiu       $a1, $a3, 0x1C
    ctx->pc = 0x1964c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x1964c8: 0x24c67050  addiu       $a2, $a2, 0x7050
    ctx->pc = 0x1964c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28752));
    // 0x1964cc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1964ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964d0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1964d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1964d4: 0xe4e0001c  swc1        $f0, 0x1C($a3)
    ctx->pc = 0x1964d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
    // 0x1964d8: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x1964d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1964dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1964dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1964e0: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x1964e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x1964e4: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x1964e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1964e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1964e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1964ec: 0xe4e00024  swc1        $f0, 0x24($a3)
    ctx->pc = 0x1964ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x1964f0: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x1964f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1964f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1964f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1964f8: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1964F8u;
    SET_GPR_U32(ctx, 31, 0x196500u);
    ctx->pc = 0x1964FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1964F8u;
            // 0x1964fc: 0xe4e00028  swc1        $f0, 0x28($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196500u; }
        if (ctx->pc != 0x196500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196500u; }
        if (ctx->pc != 0x196500u) { return; }
    }
    ctx->pc = 0x196500u;
label_196500:
    // 0x196500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196504: 0x3e00008  jr          $ra
    ctx->pc = 0x196504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196504u;
            // 0x196508: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1963F8u: goto label_1963f8;
            case 0x196400u: goto label_196400;
            case 0x196410u: goto label_196410;
            case 0x196420u: goto label_196420;
            case 0x196430u: goto label_196430;
            case 0x196440u: goto label_196440;
            case 0x196450u: goto label_196450;
            case 0x196458u: goto label_196458;
            case 0x196490u: goto label_196490;
            case 0x1964B0u: goto label_1964b0;
            case 0x196500u: goto label_196500;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19650Cu;
}
