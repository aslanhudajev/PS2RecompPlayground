#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ITEM_MOVE_BONUS_MID
// Address: 0x1961d0 - 0x19636c
void ITEM_MOVE_BONUS_MID_0x1961d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ITEM_MOVE_BONUS_MID_0x1961d0");
#endif

    ctx->pc = 0x1961d0u;

    // 0x1961d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1961d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1961d4: 0x3c023c03  lui         $v0, 0x3C03
    ctx->pc = 0x1961d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15363 << 16));
    // 0x1961d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1961d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1961dc: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1961dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1961e0: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x1961e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1961e4: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1961e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1961e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1961e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1961ec: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1961ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1961f0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1961f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1961f4: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x1961f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1961f8: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x1961f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1961fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1961fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x196200: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x196200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x196204: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x196204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x196208: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x196208u;
    {
        const bool branch_taken_0x196208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19620Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196208u;
            // 0x19620c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196208) {
            ctx->pc = 0x1962B0u;
            goto label_1962b0;
        }
    }
    ctx->pc = 0x196210u;
    // 0x196210: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x196210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x196214: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x196214u;
    {
        const bool branch_taken_0x196214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x196218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196214u;
            // 0x196218: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196214) {
            ctx->pc = 0x1962A0u;
            goto label_1962a0;
        }
    }
    ctx->pc = 0x19621Cu;
    // 0x19621c: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x19621Cu;
    {
        const bool branch_taken_0x19621c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19621c) {
            ctx->pc = 0x196290u;
            goto label_196290;
        }
    }
    ctx->pc = 0x196224u;
    // 0x196224: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x196224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x196228: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x196228u;
    {
        const bool branch_taken_0x196228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19622Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196228u;
            // 0x19622c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196228) {
            ctx->pc = 0x196280u;
            goto label_196280;
        }
    }
    ctx->pc = 0x196230u;
    // 0x196230: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x196230u;
    {
        const bool branch_taken_0x196230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x196230) {
            ctx->pc = 0x196270u;
            goto label_196270;
        }
    }
    ctx->pc = 0x196238u;
    // 0x196238: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x196238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19623c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19623Cu;
    {
        const bool branch_taken_0x19623c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19623c) {
            ctx->pc = 0x196260u;
            goto label_196260;
        }
    }
    ctx->pc = 0x196244u;
    // 0x196244: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x196244u;
    {
        const bool branch_taken_0x196244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x196244) {
            ctx->pc = 0x196258u;
            goto label_196258;
        }
    }
    ctx->pc = 0x19624Cu;
    // 0x19624c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x19624Cu;
    {
        const bool branch_taken_0x19624c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19624c) {
            ctx->pc = 0x1962B8u;
            goto label_1962b8;
        }
    }
    ctx->pc = 0x196254u;
    // 0x196254: 0x0  nop
    ctx->pc = 0x196254u;
    // NOP
label_196258:
    // 0x196258: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x196258u;
    {
        const bool branch_taken_0x196258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19625Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196258u;
            // 0x19625c: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196258) {
            ctx->pc = 0x1962B8u;
            goto label_1962b8;
        }
    }
    ctx->pc = 0x196260u;
label_196260:
    // 0x196260: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x196260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196264: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x196264u;
    {
        const bool branch_taken_0x196264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196264u;
            // 0x196268: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196264) {
            ctx->pc = 0x1962B8u;
            goto label_1962b8;
        }
    }
    ctx->pc = 0x19626Cu;
    // 0x19626c: 0x0  nop
    ctx->pc = 0x19626cu;
    // NOP
label_196270:
    // 0x196270: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x196270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196274: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x196274u;
    {
        const bool branch_taken_0x196274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196274u;
            // 0x196278: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196274) {
            ctx->pc = 0x1962B8u;
            goto label_1962b8;
        }
    }
    ctx->pc = 0x19627Cu;
    // 0x19627c: 0x0  nop
    ctx->pc = 0x19627cu;
    // NOP
label_196280:
    // 0x196280: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x196280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x196284: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x196284u;
    {
        const bool branch_taken_0x196284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196284u;
            // 0x196288: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196284) {
            ctx->pc = 0x1962B8u;
            goto label_1962b8;
        }
    }
    ctx->pc = 0x19628Cu;
    // 0x19628c: 0x0  nop
    ctx->pc = 0x19628cu;
    // NOP
label_196290:
    // 0x196290: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x196290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196294: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x196294u;
    {
        const bool branch_taken_0x196294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196294u;
            // 0x196298: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196294) {
            ctx->pc = 0x1962B8u;
            goto label_1962b8;
        }
    }
    ctx->pc = 0x19629Cu;
    // 0x19629c: 0x0  nop
    ctx->pc = 0x19629cu;
    // NOP
label_1962a0:
    // 0x1962a0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1962a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1962a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1962A4u;
    {
        const bool branch_taken_0x1962a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1962A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1962A4u;
            // 0x1962a8: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1962a4) {
            ctx->pc = 0x1962B8u;
            goto label_1962b8;
        }
    }
    ctx->pc = 0x1962ACu;
    // 0x1962ac: 0x0  nop
    ctx->pc = 0x1962acu;
    // NOP
label_1962b0:
    // 0x1962b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1962b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1962b4: 0xace20038  sw          $v0, 0x38($a3)
    ctx->pc = 0x1962b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 2));
label_1962b8:
    // 0x1962b8: 0x8ce30038  lw          $v1, 0x38($a3)
    ctx->pc = 0x1962b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x1962bc: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1962bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1962c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1962c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1962c4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1962c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1962c8: 0xace20038  sw          $v0, 0x38($a3)
    ctx->pc = 0x1962c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 2));
    // 0x1962cc: 0xc4e10010  lwc1        $f1, 0x10($a3)
    ctx->pc = 0x1962ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1962d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1962d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1962d4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1962D4u;
    {
        const bool branch_taken_0x1962d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1962D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1962D4u;
            // 0x1962d8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1962d4) {
            ctx->pc = 0x1962F0u;
            goto label_1962f0;
        }
    }
    ctx->pc = 0x1962DCu;
    // 0x1962dc: 0xc065c5c  jal         func_197170
    ctx->pc = 0x1962DCu;
    SET_GPR_U32(ctx, 31, 0x1962E4u);
    ctx->pc = 0x197170u;
    if (runtime->hasFunction(0x197170u)) {
        auto targetFn = runtime->lookupFunction(0x197170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1962E4u; }
        if (ctx->pc != 0x1962E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemFree_0x197170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1962E4u; }
        if (ctx->pc != 0x1962E4u) { return; }
    }
    ctx->pc = 0x1962E4u;
    // 0x1962e4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1962E4u;
    {
        const bool branch_taken_0x1962e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1962e4) {
            ctx->pc = 0x196360u;
            goto label_196360;
        }
    }
    ctx->pc = 0x1962ECu;
    // 0x1962ec: 0x0  nop
    ctx->pc = 0x1962ecu;
    // NOP
label_1962f0:
    // 0x1962f0: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1962f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1962f4: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1962F4u;
    {
        const bool branch_taken_0x1962f4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1962F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1962F4u;
            // 0x1962f8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1962f4) {
            ctx->pc = 0x196310u;
            goto label_196310;
        }
    }
    ctx->pc = 0x1962FCu;
    // 0x1962fc: 0xc065c5c  jal         func_197170
    ctx->pc = 0x1962FCu;
    SET_GPR_U32(ctx, 31, 0x196304u);
    ctx->pc = 0x197170u;
    if (runtime->hasFunction(0x197170u)) {
        auto targetFn = runtime->lookupFunction(0x197170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196304u; }
        if (ctx->pc != 0x196304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemFree_0x197170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196304u; }
        if (ctx->pc != 0x196304u) { return; }
    }
    ctx->pc = 0x196304u;
    // 0x196304: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x196304u;
    {
        const bool branch_taken_0x196304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196304) {
            ctx->pc = 0x196360u;
            goto label_196360;
        }
    }
    ctx->pc = 0x19630Cu;
    // 0x19630c: 0x0  nop
    ctx->pc = 0x19630cu;
    // NOP
label_196310:
    // 0x196310: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x196310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x196314: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x196314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196318: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x196318u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x19631c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19631cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196320: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x196320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x196324: 0x24e5001c  addiu       $a1, $a3, 0x1C
    ctx->pc = 0x196324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x196328: 0x24c66f70  addiu       $a2, $a2, 0x6F70
    ctx->pc = 0x196328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28528));
    // 0x19632c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x19632cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196330: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x196330u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x196334: 0xe4e0001c  swc1        $f0, 0x1C($a3)
    ctx->pc = 0x196334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
    // 0x196338: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x196338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19633c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19633cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x196340: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x196340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x196344: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x196344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196348: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x196348u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19634c: 0xe4e00024  swc1        $f0, 0x24($a3)
    ctx->pc = 0x19634cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x196350: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x196350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196354: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x196354u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x196358: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x196358u;
    SET_GPR_U32(ctx, 31, 0x196360u);
    ctx->pc = 0x19635Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196358u;
            // 0x19635c: 0xe4e00028  swc1        $f0, 0x28($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196360u; }
        if (ctx->pc != 0x196360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196360u; }
        if (ctx->pc != 0x196360u) { return; }
    }
    ctx->pc = 0x196360u;
label_196360:
    // 0x196360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196364: 0x3e00008  jr          $ra
    ctx->pc = 0x196364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196364u;
            // 0x196368: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196258u: goto label_196258;
            case 0x196260u: goto label_196260;
            case 0x196270u: goto label_196270;
            case 0x196280u: goto label_196280;
            case 0x196290u: goto label_196290;
            case 0x1962A0u: goto label_1962a0;
            case 0x1962B0u: goto label_1962b0;
            case 0x1962B8u: goto label_1962b8;
            case 0x1962F0u: goto label_1962f0;
            case 0x196310u: goto label_196310;
            case 0x196360u: goto label_196360;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19636Cu;
}
