#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage5BossMove2
// Address: 0x1c0130 - 0x1c0c94
void Stage5BossMove2_0x1c0130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage5BossMove2_0x1c0130");
#endif

    ctx->pc = 0x1c0130u;

    // 0x1c0130: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c0130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c0134: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1c0134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1c0138: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c0138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c013c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c013cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c0140: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c0140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c0144: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c0144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0148: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c0148u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c014c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1c014cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c0150: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x1c0150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x1c0154: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x1C0154u;
    SET_GPR_U32(ctx, 31, 0x1C015Cu);
    ctx->pc = 0x1C0158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0154u;
            // 0x1c0158: 0xdc25aa60  ld          $a1, -0x55A0($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294945376)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C015Cu; }
        if (ctx->pc != 0x1C015Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C015Cu; }
        if (ctx->pc != 0x1C015Cu) { return; }
    }
    ctx->pc = 0x1C015Cu;
    // 0x1c015c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c015cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c0160: 0xac221c68  sw          $v0, 0x1C68($at)
    ctx->pc = 0x1c0160u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7272), GPR_U32(ctx, 2));
    // 0x1c0164: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c0164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c0168: 0x8c241c68  lw          $a0, 0x1C68($at)
    ctx->pc = 0x1c0168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7272)));
    // 0x1c016c: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1C016Cu;
    SET_GPR_U32(ctx, 31, 0x1C0174u);
    ctx->pc = 0x1C0170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C016Cu;
            // 0x1c0170: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0174u; }
        if (ctx->pc != 0x1C0174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0174u; }
        if (ctx->pc != 0x1C0174u) { return; }
    }
    ctx->pc = 0x1C0174u;
    // 0x1c0174: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c0174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c0178: 0xac221c70  sw          $v0, 0x1C70($at)
    ctx->pc = 0x1c0178u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7280), GPR_U32(ctx, 2));
    // 0x1c017c: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1c017cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1c0180: 0x2c810009  sltiu       $at, $a0, 0x9
    ctx->pc = 0x1c0180u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1c0184: 0x102001e4  beqz        $at, . + 4 + (0x1E4 << 2)
    ctx->pc = 0x1C0184u;
    {
        const bool branch_taken_0x1c0184 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0184u;
            // 0x1c0188: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0184) {
            ctx->pc = 0x1C0918u;
            goto label_1c0918;
        }
    }
    ctx->pc = 0x1C018Cu;
    // 0x1c018c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1c018cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c0190: 0x24632aa0  addiu       $v1, $v1, 0x2AA0
    ctx->pc = 0x1c0190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10912));
    // 0x1c0194: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c0194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0198: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c0198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c019c: 0x400008  jr          $v0
    ctx->pc = 0x1C019Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C01A8u: goto label_1c01a8;
            case 0x1C0220u: goto label_1c0220;
            case 0x1C0918u: goto label_1c0918;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C01A4u;
    // 0x1c01a4: 0x0  nop
    ctx->pc = 0x1c01a4u;
    // NOP
label_1c01a8:
    // 0x1c01a8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c01a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c01ac: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C01ACu;
    {
        const bool branch_taken_0x1c01ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C01B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C01ACu;
            // 0x1c01b0: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01ac) {
            ctx->pc = 0x1C0218u;
            goto label_1c0218;
        }
    }
    ctx->pc = 0x1C01B4u;
    // 0x1c01b4: 0x8c221c70  lw          $v0, 0x1C70($at)
    ctx->pc = 0x1c01b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7280)));
    // 0x1c01b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c01b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c01bc: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1c01bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c01c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c01c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c01c4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C01C4u;
    {
        const bool branch_taken_0x1c01c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C01C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C01C4u;
            // 0x1c01c8: 0x24430018  addiu       $v1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01c4) {
            ctx->pc = 0x1C01E8u;
            goto label_1c01e8;
        }
    }
    ctx->pc = 0x1C01CCu;
    // 0x1c01cc: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1c01ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x1c01d0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c01d0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c01d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c01d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c01d8: 0x0  nop
    ctx->pc = 0x1c01d8u;
    // NOP
    // 0x1c01dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c01dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c01e0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C01E0u;
    {
        const bool branch_taken_0x1c01e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C01E0u;
            // 0x1c01e4: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01e0) {
            ctx->pc = 0x1C0218u;
            goto label_1c0218;
        }
    }
    ctx->pc = 0x1C01E8u;
label_1c01e8:
    // 0x1c01e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c01e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c01ec: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C01ECu;
    {
        const bool branch_taken_0x1c01ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C01F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C01ECu;
            // 0x1c01f0: 0x3c023ba3  lui         $v0, 0x3BA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01ec) {
            ctx->pc = 0x1C0210u;
            goto label_1c0210;
        }
    }
    ctx->pc = 0x1C01F4u;
    // 0x1c01f4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c01f4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c01f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c01f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c01fc: 0x0  nop
    ctx->pc = 0x1c01fcu;
    // NOP
    // 0x1c0200: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c0200u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c0204: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0204u;
    {
        const bool branch_taken_0x1c0204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0204u;
            // 0x1c0208: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0204) {
            ctx->pc = 0x1C0218u;
            goto label_1c0218;
        }
    }
    ctx->pc = 0x1C020Cu;
    // 0x1c020c: 0x0  nop
    ctx->pc = 0x1c020cu;
    // NOP
label_1c0210:
    // 0x1c0210: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1c0210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1c0214: 0x0  nop
    ctx->pc = 0x1c0214u;
    // NOP
label_1c0218:
    // 0x1c0218: 0x100001bf  b           . + 4 + (0x1BF << 2)
    ctx->pc = 0x1C0218u;
    {
        const bool branch_taken_0x1c0218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C021Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0218u;
            // 0x1c021c: 0xae200110  sw          $zero, 0x110($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0218) {
            ctx->pc = 0x1C0918u;
            goto label_1c0918;
        }
    }
    ctx->pc = 0x1C0220u;
label_1c0220:
    // 0x1c0220: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c0220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c0224: 0x1840012a  blez        $v0, . + 4 + (0x12A << 2)
    ctx->pc = 0x1C0224u;
    {
        const bool branch_taken_0x1c0224 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C0228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0224u;
            // 0x1c0228: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0224) {
            ctx->pc = 0x1C06D0u;
            goto label_1c06d0;
        }
    }
    ctx->pc = 0x1C022Cu;
    // 0x1c022c: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C022Cu;
    {
        const bool branch_taken_0x1c022c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c022c) {
            ctx->pc = 0x1C0240u;
            goto label_1c0240;
        }
    }
    ctx->pc = 0x1C0234u;
    // 0x1c0234: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c0234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c0238: 0x14820041  bne         $a0, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1C0238u;
    {
        const bool branch_taken_0x1c0238 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c0238) {
            ctx->pc = 0x1C0340u;
            goto label_1c0340;
        }
    }
    ctx->pc = 0x1C0240u;
label_1c0240:
    // 0x1c0240: 0x8e230110  lw          $v1, 0x110($s1)
    ctx->pc = 0x1c0240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x1c0244: 0x28610032  slti        $at, $v1, 0x32
    ctx->pc = 0x1c0244u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1c0248: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C0248u;
    {
        const bool branch_taken_0x1c0248 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0248) {
            ctx->pc = 0x1C0290u;
            goto label_1c0290;
        }
    }
    ctx->pc = 0x1C0250u;
    // 0x1c0250: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x1c0250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x1c0254: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1c0254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c0258: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c0258u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c025c: 0x0  nop
    ctx->pc = 0x1c025cu;
    // NOP
    // 0x1c0260: 0x0  nop
    ctx->pc = 0x1c0260u;
    // NOP
    // 0x1c0264: 0x1010  mfhi        $v0
    ctx->pc = 0x1c0264u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c0268: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1C0268u;
    {
        const bool branch_taken_0x1c0268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0268) {
            ctx->pc = 0x1C0378u;
            goto label_1c0378;
        }
    }
    ctx->pc = 0x1C0270u;
    // 0x1c0270: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1c0270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0274: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x1c0274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1c0278: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1c0278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c027c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c027cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c0280: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C0280u;
    SET_GPR_U32(ctx, 31, 0x1C0288u);
    ctx->pc = 0x1C0284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0280u;
            // 0x1c0284: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0288u; }
        if (ctx->pc != 0x1C0288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0288u; }
        if (ctx->pc != 0x1C0288u) { return; }
    }
    ctx->pc = 0x1C0288u;
    // 0x1c0288: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1C0288u;
    {
        const bool branch_taken_0x1c0288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0288) {
            ctx->pc = 0x1C0378u;
            goto label_1c0378;
        }
    }
    ctx->pc = 0x1C0290u;
label_1c0290:
    // 0x1c0290: 0x286200fa  slti        $v0, $v1, 0xFA
    ctx->pc = 0x1c0290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)250) ? 1 : 0);
    // 0x1c0294: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1C0294u;
    {
        const bool branch_taken_0x1c0294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0294u;
            // 0x1c0298: 0x2861015e  slti        $at, $v1, 0x15E (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)350) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0294) {
            ctx->pc = 0x1C0378u;
            goto label_1c0378;
        }
    }
    ctx->pc = 0x1C029Cu;
    // 0x1c029c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C029Cu;
    {
        const bool branch_taken_0x1c029c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c029c) {
            ctx->pc = 0x1C02E8u;
            goto label_1c02e8;
        }
    }
    ctx->pc = 0x1C02A4u;
    // 0x1c02a4: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x1c02a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x1c02a8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1c02a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c02ac: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c02acu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c02b0: 0x0  nop
    ctx->pc = 0x1c02b0u;
    // NOP
    // 0x1c02b4: 0x0  nop
    ctx->pc = 0x1c02b4u;
    // NOP
    // 0x1c02b8: 0x1010  mfhi        $v0
    ctx->pc = 0x1c02b8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c02bc: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1C02BCu;
    {
        const bool branch_taken_0x1c02bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c02bc) {
            ctx->pc = 0x1C0378u;
            goto label_1c0378;
        }
    }
    ctx->pc = 0x1C02C4u;
    // 0x1c02c4: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1c02c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c02c8: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x1c02c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1c02cc: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1c02ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c02d0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c02d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c02d4: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C02D4u;
    SET_GPR_U32(ctx, 31, 0x1C02DCu);
    ctx->pc = 0x1C02D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C02D4u;
            // 0x1c02d8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C02DCu; }
        if (ctx->pc != 0x1C02DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C02DCu; }
        if (ctx->pc != 0x1C02DCu) { return; }
    }
    ctx->pc = 0x1C02DCu;
    // 0x1c02dc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1C02DCu;
    {
        const bool branch_taken_0x1c02dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c02dc) {
            ctx->pc = 0x1C0378u;
            goto label_1c0378;
        }
    }
    ctx->pc = 0x1C02E4u;
    // 0x1c02e4: 0x0  nop
    ctx->pc = 0x1c02e4u;
    // NOP
label_1c02e8:
    // 0x1c02e8: 0x28620190  slti        $v0, $v1, 0x190
    ctx->pc = 0x1c02e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x1c02ec: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C02ECu;
    {
        const bool branch_taken_0x1c02ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C02F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C02ECu;
            // 0x1c02f0: 0x286101f4  slti        $at, $v1, 0x1F4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)500) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02ec) {
            ctx->pc = 0x1C0378u;
            goto label_1c0378;
        }
    }
    ctx->pc = 0x1C02F4u;
    // 0x1c02f4: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x1C02F4u;
    {
        const bool branch_taken_0x1c02f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c02f4) {
            ctx->pc = 0x1C0378u;
            goto label_1c0378;
        }
    }
    ctx->pc = 0x1C02FCu;
    // 0x1c02fc: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x1c02fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x1c0300: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1c0300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c0304: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c0304u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c0308: 0x0  nop
    ctx->pc = 0x1c0308u;
    // NOP
    // 0x1c030c: 0x0  nop
    ctx->pc = 0x1c030cu;
    // NOP
    // 0x1c0310: 0x1010  mfhi        $v0
    ctx->pc = 0x1c0310u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c0314: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C0314u;
    {
        const bool branch_taken_0x1c0314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0314) {
            ctx->pc = 0x1C0378u;
            goto label_1c0378;
        }
    }
    ctx->pc = 0x1C031Cu;
    // 0x1c031c: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1c031cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0320: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x1c0320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1c0324: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1c0324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0328: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c0328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c032c: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C032Cu;
    SET_GPR_U32(ctx, 31, 0x1C0334u);
    ctx->pc = 0x1C0330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C032Cu;
            // 0x1c0330: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0334u; }
        if (ctx->pc != 0x1C0334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0334u; }
        if (ctx->pc != 0x1C0334u) { return; }
    }
    ctx->pc = 0x1C0334u;
    // 0x1c0334: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C0334u;
    {
        const bool branch_taken_0x1c0334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0334) {
            ctx->pc = 0x1C0378u;
            goto label_1c0378;
        }
    }
    ctx->pc = 0x1C033Cu;
    // 0x1c033c: 0x0  nop
    ctx->pc = 0x1c033cu;
    // NOP
label_1c0340:
    // 0x1c0340: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x1c0340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x1c0344: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1c0344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c0348: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c0348u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c034c: 0x0  nop
    ctx->pc = 0x1c034cu;
    // NOP
    // 0x1c0350: 0x0  nop
    ctx->pc = 0x1c0350u;
    // NOP
    // 0x1c0354: 0x1010  mfhi        $v0
    ctx->pc = 0x1c0354u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c0358: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0358u;
    {
        const bool branch_taken_0x1c0358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0358) {
            ctx->pc = 0x1C0378u;
            goto label_1c0378;
        }
    }
    ctx->pc = 0x1C0360u;
    // 0x1c0360: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1c0360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0364: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x1c0364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1c0368: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1c0368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c036c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c036cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c0370: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C0370u;
    SET_GPR_U32(ctx, 31, 0x1C0378u);
    ctx->pc = 0x1C0374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0370u;
            // 0x1c0374: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0378u; }
        if (ctx->pc != 0x1C0378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0378u; }
        if (ctx->pc != 0x1C0378u) { return; }
    }
    ctx->pc = 0x1C0378u;
label_1c0378:
    // 0x1c0378: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x1c0378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1c037c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c037cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0380: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1C0380u;
    {
        const bool branch_taken_0x1c0380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c0380) {
            ctx->pc = 0x1C0428u;
            goto label_1c0428;
        }
    }
    ctx->pc = 0x1C0388u;
    // 0x1c0388: 0x8e230110  lw          $v1, 0x110($s1)
    ctx->pc = 0x1c0388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x1c038c: 0x28610032  slti        $at, $v1, 0x32
    ctx->pc = 0x1c038cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1c0390: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C0390u;
    {
        const bool branch_taken_0x1c0390 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0390u;
            // 0x1c0394: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0390) {
            ctx->pc = 0x1C03B8u;
            goto label_1c03b8;
        }
    }
    ctx->pc = 0x1C0398u;
    // 0x1c0398: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1c0398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1c039c: 0x8c231c70  lw          $v1, 0x1C70($at)
    ctx->pc = 0x1c039cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7280)));
    // 0x1c03a0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c03a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c03a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c03a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c03a8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c03a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c03ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c03acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c03b0: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x1C03B0u;
    {
        const bool branch_taken_0x1c03b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C03B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C03B0u;
            // 0x1c03b4: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c03b0) {
            ctx->pc = 0x1C06D0u;
            goto label_1c06d0;
        }
    }
    ctx->pc = 0x1C03B8u;
label_1c03b8:
    // 0x1c03b8: 0x286200fa  slti        $v0, $v1, 0xFA
    ctx->pc = 0x1c03b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)250) ? 1 : 0);
    // 0x1c03bc: 0x144000c4  bnez        $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x1C03BCu;
    {
        const bool branch_taken_0x1c03bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C03C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C03BCu;
            // 0x1c03c0: 0x2861015e  slti        $at, $v1, 0x15E (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)350) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c03bc) {
            ctx->pc = 0x1C06D0u;
            goto label_1c06d0;
        }
    }
    ctx->pc = 0x1C03C4u;
    // 0x1c03c4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C03C4u;
    {
        const bool branch_taken_0x1c03c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c03c4) {
            ctx->pc = 0x1C03F0u;
            goto label_1c03f0;
        }
    }
    ctx->pc = 0x1C03CCu;
    // 0x1c03cc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c03ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c03d0: 0x3c023b83  lui         $v0, 0x3B83
    ctx->pc = 0x1c03d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15235 << 16));
    // 0x1c03d4: 0x8c231c70  lw          $v1, 0x1C70($at)
    ctx->pc = 0x1c03d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7280)));
    // 0x1c03d8: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1c03d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1c03dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c03dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c03e0: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c03e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c03e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c03e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c03e8: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x1C03E8u;
    {
        const bool branch_taken_0x1c03e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C03ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C03E8u;
            // 0x1c03ec: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c03e8) {
            ctx->pc = 0x1C06D0u;
            goto label_1c06d0;
        }
    }
    ctx->pc = 0x1C03F0u;
label_1c03f0:
    // 0x1c03f0: 0x28620190  slti        $v0, $v1, 0x190
    ctx->pc = 0x1c03f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x1c03f4: 0x144000b6  bnez        $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x1C03F4u;
    {
        const bool branch_taken_0x1c03f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C03F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C03F4u;
            // 0x1c03f8: 0x286101f4  slti        $at, $v1, 0x1F4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)500) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c03f4) {
            ctx->pc = 0x1C06D0u;
            goto label_1c06d0;
        }
    }
    ctx->pc = 0x1C03FCu;
    // 0x1c03fc: 0x102000b4  beqz        $at, . + 4 + (0xB4 << 2)
    ctx->pc = 0x1C03FCu;
    {
        const bool branch_taken_0x1c03fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c03fc) {
            ctx->pc = 0x1C06D0u;
            goto label_1c06d0;
        }
    }
    ctx->pc = 0x1C0404u;
    // 0x1c0404: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c0404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c0408: 0x3c023b83  lui         $v0, 0x3B83
    ctx->pc = 0x1c0408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15235 << 16));
    // 0x1c040c: 0x8c231c70  lw          $v1, 0x1C70($at)
    ctx->pc = 0x1c040cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7280)));
    // 0x1c0410: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1c0410u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1c0414: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0418: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c0418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c041c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c041cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c0420: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x1C0420u;
    {
        const bool branch_taken_0x1c0420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0420u;
            // 0x1c0424: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0420) {
            ctx->pc = 0x1C06D0u;
            goto label_1c06d0;
        }
    }
    ctx->pc = 0x1C0428u;
label_1c0428:
    // 0x1c0428: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c0428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c042c: 0x1462002a  bne         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1C042Cu;
    {
        const bool branch_taken_0x1c042c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c042c) {
            ctx->pc = 0x1C04D8u;
            goto label_1c04d8;
        }
    }
    ctx->pc = 0x1C0434u;
    // 0x1c0434: 0x8e230110  lw          $v1, 0x110($s1)
    ctx->pc = 0x1c0434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x1c0438: 0x28610032  slti        $at, $v1, 0x32
    ctx->pc = 0x1c0438u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1c043c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C043Cu;
    {
        const bool branch_taken_0x1c043c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C043Cu;
            // 0x1c0440: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c043c) {
            ctx->pc = 0x1C0468u;
            goto label_1c0468;
        }
    }
    ctx->pc = 0x1C0444u;
    // 0x1c0444: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1c0444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1c0448: 0x8c231c70  lw          $v1, 0x1C70($at)
    ctx->pc = 0x1c0448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7280)));
    // 0x1c044c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c044cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c0450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0454: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c0454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0458: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c0458u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c045c: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x1C045Cu;
    {
        const bool branch_taken_0x1c045c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C045Cu;
            // 0x1c0460: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c045c) {
            ctx->pc = 0x1C06D0u;
            goto label_1c06d0;
        }
    }
    ctx->pc = 0x1C0464u;
    // 0x1c0464: 0x0  nop
    ctx->pc = 0x1c0464u;
    // NOP
label_1c0468:
    // 0x1c0468: 0x286200fa  slti        $v0, $v1, 0xFA
    ctx->pc = 0x1c0468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)250) ? 1 : 0);
    // 0x1c046c: 0x14400098  bnez        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x1C046Cu;
    {
        const bool branch_taken_0x1c046c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C046Cu;
            // 0x1c0470: 0x2861015e  slti        $at, $v1, 0x15E (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)350) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c046c) {
            ctx->pc = 0x1C06D0u;
            goto label_1c06d0;
        }
    }
    ctx->pc = 0x1C0474u;
    // 0x1c0474: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C0474u;
    {
        const bool branch_taken_0x1c0474 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0474) {
            ctx->pc = 0x1C04A0u;
            goto label_1c04a0;
        }
    }
    ctx->pc = 0x1C047Cu;
    // 0x1c047c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c047cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c0480: 0x3c023b83  lui         $v0, 0x3B83
    ctx->pc = 0x1c0480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15235 << 16));
    // 0x1c0484: 0x8c231c70  lw          $v1, 0x1C70($at)
    ctx->pc = 0x1c0484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7280)));
    // 0x1c0488: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1c0488u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1c048c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c048cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0490: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c0490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0494: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c0494u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c0498: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x1C0498u;
    {
        const bool branch_taken_0x1c0498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C049Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0498u;
            // 0x1c049c: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0498) {
            ctx->pc = 0x1C06D0u;
            goto label_1c06d0;
        }
    }
    ctx->pc = 0x1C04A0u;
label_1c04a0:
    // 0x1c04a0: 0x28620190  slti        $v0, $v1, 0x190
    ctx->pc = 0x1c04a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x1c04a4: 0x1440008a  bnez        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x1C04A4u;
    {
        const bool branch_taken_0x1c04a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C04A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C04A4u;
            // 0x1c04a8: 0x286101f4  slti        $at, $v1, 0x1F4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)500) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c04a4) {
            ctx->pc = 0x1C06D0u;
            goto label_1c06d0;
        }
    }
    ctx->pc = 0x1C04ACu;
    // 0x1c04ac: 0x10200088  beqz        $at, . + 4 + (0x88 << 2)
    ctx->pc = 0x1C04ACu;
    {
        const bool branch_taken_0x1c04ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c04ac) {
            ctx->pc = 0x1C06D0u;
            goto label_1c06d0;
        }
    }
    ctx->pc = 0x1C04B4u;
    // 0x1c04b4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c04b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c04b8: 0x3c023b83  lui         $v0, 0x3B83
    ctx->pc = 0x1c04b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15235 << 16));
    // 0x1c04bc: 0x8c231c70  lw          $v1, 0x1C70($at)
    ctx->pc = 0x1c04bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7280)));
    // 0x1c04c0: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1c04c0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1c04c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c04c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c04c8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c04c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c04cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c04ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c04d0: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x1C04D0u;
    {
        const bool branch_taken_0x1c04d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C04D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C04D0u;
            // 0x1c04d4: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c04d0) {
            ctx->pc = 0x1C06D0u;
            goto label_1c06d0;
        }
    }
    ctx->pc = 0x1C04D8u;
label_1c04d8:
    // 0x1c04d8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1c04d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c04dc: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1C04DCu;
    {
        const bool branch_taken_0x1c04dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c04dc) {
            ctx->pc = 0x1C05D8u;
            goto label_1c05d8;
        }
    }
    ctx->pc = 0x1C04E4u;
    // 0x1c04e4: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x1c04e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x1c04e8: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x1c04e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1c04ec: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C04ECu;
    {
        const bool branch_taken_0x1c04ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C04F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C04ECu;
            // 0x1c04f0: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c04ec) {
            ctx->pc = 0x1C0518u;
            goto label_1c0518;
        }
    }
    ctx->pc = 0x1C04F4u;
    // 0x1c04f4: 0x3c023c75  lui         $v0, 0x3C75
    ctx->pc = 0x1c04f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
    // 0x1c04f8: 0x8c231c70  lw          $v1, 0x1C70($at)
    ctx->pc = 0x1c04f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7280)));
    // 0x1c04fc: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1c04fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x1c0500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0504: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c0504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0508: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c0508u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c050c: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1C050Cu;
    {
        const bool branch_taken_0x1c050c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C050Cu;
            // 0x1c0510: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c050c) {
            ctx->pc = 0x1C06D0u;
            goto label_1c06d0;
        }
    }
    ctx->pc = 0x1C0514u;
    // 0x1c0514: 0x0  nop
    ctx->pc = 0x1c0514u;
    // NOP
label_1c0518:
    // 0x1c0518: 0x284100c8  slti        $at, $v0, 0xC8
    ctx->pc = 0x1c0518u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x1c051c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C051Cu;
    {
        const bool branch_taken_0x1c051c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C051Cu;
            // 0x1c0520: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c051c) {
            ctx->pc = 0x1C0548u;
            goto label_1c0548;
        }
    }
    ctx->pc = 0x1C0524u;
    // 0x1c0524: 0x3c023b83  lui         $v0, 0x3B83
    ctx->pc = 0x1c0524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15235 << 16));
    // 0x1c0528: 0x8c231c70  lw          $v1, 0x1C70($at)
    ctx->pc = 0x1c0528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7280)));
    // 0x1c052c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1c052cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1c0530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0534: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c0534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0538: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c0538u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c053c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1C053Cu;
    {
        const bool branch_taken_0x1c053c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C053Cu;
            // 0x1c0540: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c053c) {
            ctx->pc = 0x1C06D0u;
            goto label_1c06d0;
        }
    }
    ctx->pc = 0x1C0544u;
    // 0x1c0544: 0x0  nop
    ctx->pc = 0x1c0544u;
    // NOP
label_1c0548:
    // 0x1c0548: 0x2841012c  slti        $at, $v0, 0x12C
    ctx->pc = 0x1c0548u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x1c054c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C054Cu;
    {
        const bool branch_taken_0x1c054c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C054Cu;
            // 0x1c0550: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c054c) {
            ctx->pc = 0x1C0578u;
            goto label_1c0578;
        }
    }
    ctx->pc = 0x1C0554u;
    // 0x1c0554: 0x3c023b83  lui         $v0, 0x3B83
    ctx->pc = 0x1c0554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15235 << 16));
    // 0x1c0558: 0x8c231c70  lw          $v1, 0x1C70($at)
    ctx->pc = 0x1c0558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7280)));
    // 0x1c055c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1c055cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1c0560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0564: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c0564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0568: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c0568u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c056c: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1C056Cu;
    {
        const bool branch_taken_0x1c056c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C056Cu;
            // 0x1c0570: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c056c) {
            ctx->pc = 0x1C06D0u;
            goto label_1c06d0;
        }
    }
    ctx->pc = 0x1C0574u;
    // 0x1c0574: 0x0  nop
    ctx->pc = 0x1c0574u;
    // NOP
label_1c0578:
    // 0x1c0578: 0x28410190  slti        $at, $v0, 0x190
    ctx->pc = 0x1c0578u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x1c057c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C057Cu;
    {
        const bool branch_taken_0x1c057c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C057Cu;
            // 0x1c0580: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c057c) {
            ctx->pc = 0x1C05A8u;
            goto label_1c05a8;
        }
    }
    ctx->pc = 0x1C0584u;
    // 0x1c0584: 0x3c023b93  lui         $v0, 0x3B93
    ctx->pc = 0x1c0584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15251 << 16));
    // 0x1c0588: 0x8c231c70  lw          $v1, 0x1C70($at)
    ctx->pc = 0x1c0588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7280)));
    // 0x1c058c: 0x344274bc  ori         $v0, $v0, 0x74BC
    ctx->pc = 0x1c058cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)29884u)));
    // 0x1c0590: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0594: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c0594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0598: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c0598u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c059c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1C059Cu;
    {
        const bool branch_taken_0x1c059c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C05A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C059Cu;
            // 0x1c05a0: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c059c) {
            ctx->pc = 0x1C06D0u;
            goto label_1c06d0;
        }
    }
    ctx->pc = 0x1C05A4u;
    // 0x1c05a4: 0x0  nop
    ctx->pc = 0x1c05a4u;
    // NOP
label_1c05a8:
    // 0x1c05a8: 0x284101f4  slti        $at, $v0, 0x1F4
    ctx->pc = 0x1c05a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)500) ? 1 : 0);
    // 0x1c05ac: 0x10200048  beqz        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x1C05ACu;
    {
        const bool branch_taken_0x1c05ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C05B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C05ACu;
            // 0x1c05b0: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c05ac) {
            ctx->pc = 0x1C06D0u;
            goto label_1c06d0;
        }
    }
    ctx->pc = 0x1C05B4u;
    // 0x1c05b4: 0x3c023b93  lui         $v0, 0x3B93
    ctx->pc = 0x1c05b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15251 << 16));
    // 0x1c05b8: 0x8c231c70  lw          $v1, 0x1C70($at)
    ctx->pc = 0x1c05b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7280)));
    // 0x1c05bc: 0x344274bc  ori         $v0, $v0, 0x74BC
    ctx->pc = 0x1c05bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)29884u)));
    // 0x1c05c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c05c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c05c4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c05c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c05c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c05c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c05cc: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1C05CCu;
    {
        const bool branch_taken_0x1c05cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C05D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C05CCu;
            // 0x1c05d0: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c05cc) {
            ctx->pc = 0x1C06D0u;
            goto label_1c06d0;
        }
    }
    ctx->pc = 0x1C05D4u;
    // 0x1c05d4: 0x0  nop
    ctx->pc = 0x1c05d4u;
    // NOP
label_1c05d8:
    // 0x1c05d8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1c05d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c05dc: 0x1462003c  bne         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1C05DCu;
    {
        const bool branch_taken_0x1c05dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c05dc) {
            ctx->pc = 0x1C06D0u;
            goto label_1c06d0;
        }
    }
    ctx->pc = 0x1C05E4u;
    // 0x1c05e4: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x1c05e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x1c05e8: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x1c05e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1c05ec: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C05ECu;
    {
        const bool branch_taken_0x1c05ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C05F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C05ECu;
            // 0x1c05f0: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c05ec) {
            ctx->pc = 0x1C0618u;
            goto label_1c0618;
        }
    }
    ctx->pc = 0x1C05F4u;
    // 0x1c05f4: 0x3c023c75  lui         $v0, 0x3C75
    ctx->pc = 0x1c05f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
    // 0x1c05f8: 0x8c231c70  lw          $v1, 0x1C70($at)
    ctx->pc = 0x1c05f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7280)));
    // 0x1c05fc: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1c05fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x1c0600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0604: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c0604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0608: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c0608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c060c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1C060Cu;
    {
        const bool branch_taken_0x1c060c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C060Cu;
            // 0x1c0610: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c060c) {
            ctx->pc = 0x1C06D0u;
            goto label_1c06d0;
        }
    }
    ctx->pc = 0x1C0614u;
    // 0x1c0614: 0x0  nop
    ctx->pc = 0x1c0614u;
    // NOP
label_1c0618:
    // 0x1c0618: 0x284100c8  slti        $at, $v0, 0xC8
    ctx->pc = 0x1c0618u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x1c061c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C061Cu;
    {
        const bool branch_taken_0x1c061c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C061Cu;
            // 0x1c0620: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c061c) {
            ctx->pc = 0x1C0648u;
            goto label_1c0648;
        }
    }
    ctx->pc = 0x1C0624u;
    // 0x1c0624: 0x3c023b83  lui         $v0, 0x3B83
    ctx->pc = 0x1c0624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15235 << 16));
    // 0x1c0628: 0x8c231c70  lw          $v1, 0x1C70($at)
    ctx->pc = 0x1c0628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7280)));
    // 0x1c062c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1c062cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1c0630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0634: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c0634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0638: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c0638u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c063c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1C063Cu;
    {
        const bool branch_taken_0x1c063c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C063Cu;
            // 0x1c0640: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c063c) {
            ctx->pc = 0x1C06D0u;
            goto label_1c06d0;
        }
    }
    ctx->pc = 0x1C0644u;
    // 0x1c0644: 0x0  nop
    ctx->pc = 0x1c0644u;
    // NOP
label_1c0648:
    // 0x1c0648: 0x2841012c  slti        $at, $v0, 0x12C
    ctx->pc = 0x1c0648u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x1c064c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C064Cu;
    {
        const bool branch_taken_0x1c064c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C064Cu;
            // 0x1c0650: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c064c) {
            ctx->pc = 0x1C0678u;
            goto label_1c0678;
        }
    }
    ctx->pc = 0x1C0654u;
    // 0x1c0654: 0x3c023b83  lui         $v0, 0x3B83
    ctx->pc = 0x1c0654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15235 << 16));
    // 0x1c0658: 0x8c231c70  lw          $v1, 0x1C70($at)
    ctx->pc = 0x1c0658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7280)));
    // 0x1c065c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1c065cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1c0660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0664: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c0664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0668: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c0668u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c066c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1C066Cu;
    {
        const bool branch_taken_0x1c066c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C066Cu;
            // 0x1c0670: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c066c) {
            ctx->pc = 0x1C06D0u;
            goto label_1c06d0;
        }
    }
    ctx->pc = 0x1C0674u;
    // 0x1c0674: 0x0  nop
    ctx->pc = 0x1c0674u;
    // NOP
label_1c0678:
    // 0x1c0678: 0x28410190  slti        $at, $v0, 0x190
    ctx->pc = 0x1c0678u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x1c067c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C067Cu;
    {
        const bool branch_taken_0x1c067c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C067Cu;
            // 0x1c0680: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c067c) {
            ctx->pc = 0x1C06A8u;
            goto label_1c06a8;
        }
    }
    ctx->pc = 0x1C0684u;
    // 0x1c0684: 0x3c023b93  lui         $v0, 0x3B93
    ctx->pc = 0x1c0684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15251 << 16));
    // 0x1c0688: 0x8c231c70  lw          $v1, 0x1C70($at)
    ctx->pc = 0x1c0688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7280)));
    // 0x1c068c: 0x344274bc  ori         $v0, $v0, 0x74BC
    ctx->pc = 0x1c068cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)29884u)));
    // 0x1c0690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0694: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c0694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0698: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c0698u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c069c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C069Cu;
    {
        const bool branch_taken_0x1c069c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C06A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C069Cu;
            // 0x1c06a0: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c069c) {
            ctx->pc = 0x1C06D0u;
            goto label_1c06d0;
        }
    }
    ctx->pc = 0x1C06A4u;
    // 0x1c06a4: 0x0  nop
    ctx->pc = 0x1c06a4u;
    // NOP
label_1c06a8:
    // 0x1c06a8: 0x284101f4  slti        $at, $v0, 0x1F4
    ctx->pc = 0x1c06a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)500) ? 1 : 0);
    // 0x1c06ac: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C06ACu;
    {
        const bool branch_taken_0x1c06ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C06B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C06ACu;
            // 0x1c06b0: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c06ac) {
            ctx->pc = 0x1C06D0u;
            goto label_1c06d0;
        }
    }
    ctx->pc = 0x1C06B4u;
    // 0x1c06b4: 0x3c023b93  lui         $v0, 0x3B93
    ctx->pc = 0x1c06b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15251 << 16));
    // 0x1c06b8: 0x8c231c70  lw          $v1, 0x1C70($at)
    ctx->pc = 0x1c06b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7280)));
    // 0x1c06bc: 0x344274bc  ori         $v0, $v0, 0x74BC
    ctx->pc = 0x1c06bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)29884u)));
    // 0x1c06c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c06c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c06c4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c06c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c06c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c06c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c06cc: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1c06ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_1c06d0:
    // 0x1c06d0: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x1c06d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x1c06d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c06d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c06d8: 0xae220110  sw          $v0, 0x110($s1)
    ctx->pc = 0x1c06d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 2));
    // 0x1c06dc: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x1c06dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x1c06e0: 0x28420064  slti        $v0, $v0, 0x64
    ctx->pc = 0x1c06e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1c06e4: 0x1440008c  bnez        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x1C06E4u;
    {
        const bool branch_taken_0x1c06e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c06e4) {
            ctx->pc = 0x1C0918u;
            goto label_1c0918;
        }
    }
    ctx->pc = 0x1C06ECu;
    // 0x1c06ec: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1c06ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c06f0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c06f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c06f4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c06f4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c06f8: 0x0  nop
    ctx->pc = 0x1c06f8u;
    // NOP
    // 0x1c06fc: 0x0  nop
    ctx->pc = 0x1c06fcu;
    // NOP
    // 0x1c0700: 0x1010  mfhi        $v0
    ctx->pc = 0x1c0700u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c0704: 0x14400084  bnez        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x1C0704u;
    {
        const bool branch_taken_0x1c0704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0704u;
            // 0x1c0708: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0704) {
            ctx->pc = 0x1C0918u;
            goto label_1c0918;
        }
    }
    ctx->pc = 0x1C070Cu;
    // 0x1c070c: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x1c070cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x1c0710: 0x8c231c70  lw          $v1, 0x1C70($at)
    ctx->pc = 0x1c0710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7280)));
    // 0x1c0714: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c0714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c0718: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1c0718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1c071c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c071cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0720: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x1c0720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c0724: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c0724u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c0728: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c0728u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c072c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c072cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c0730: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c0730u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c0734: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1c0734u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c0738: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x1c0738u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1c073c: 0xc065d00  jal         func_197400
    ctx->pc = 0x1C073Cu;
    SET_GPR_U32(ctx, 31, 0x1C0744u);
    ctx->pc = 0x1C0740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C073Cu;
            // 0x1c0740: 0x2450fffb  addiu       $s0, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0744u; }
        if (ctx->pc != 0x1C0744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0744u; }
        if (ctx->pc != 0x1C0744u) { return; }
    }
    ctx->pc = 0x1C0744u;
    // 0x1c0744: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1c0744u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c0748: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x1C0748u;
    {
        const bool branch_taken_0x1c0748 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0748) {
            ctx->pc = 0x1C0788u;
            goto label_1c0788;
        }
    }
    ctx->pc = 0x1C0750u;
    // 0x1c0750: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1c0750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c0754: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1c0754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1c0758: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c0758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c075c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c075cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0760: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c0760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c0764: 0x24630099  addiu       $v1, $v1, 0x99
    ctx->pc = 0x1c0764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 153));
    // 0x1c0768: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c0768u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c076c: 0x0  nop
    ctx->pc = 0x1c076cu;
    // NOP
    // 0x1c0770: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c0770u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c0774: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c0774u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c0778: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c0778u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c077c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1c077cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c0780: 0xc065480  jal         func_195200
    ctx->pc = 0x1C0780u;
    SET_GPR_U32(ctx, 31, 0x1C0788u);
    ctx->pc = 0x1C0784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0780u;
            // 0x1c0784: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0788u; }
        if (ctx->pc != 0x1C0788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0788u; }
        if (ctx->pc != 0x1C0788u) { return; }
    }
    ctx->pc = 0x1C0788u;
label_1c0788:
    // 0x1c0788: 0xc065d00  jal         func_197400
    ctx->pc = 0x1C0788u;
    SET_GPR_U32(ctx, 31, 0x1C0790u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0790u; }
        if (ctx->pc != 0x1C0790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0790u; }
        if (ctx->pc != 0x1C0790u) { return; }
    }
    ctx->pc = 0x1C0790u;
    // 0x1c0790: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C0790u;
    {
        const bool branch_taken_0x1c0790 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c0790) {
            ctx->pc = 0x1C0808u;
            goto label_1c0808;
        }
    }
    ctx->pc = 0x1C0798u;
    // 0x1c0798: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1c0798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c079c: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1c079cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1c07a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c07a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c07a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c07a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c07a8: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x1c07a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1c07ac: 0x24820099  addiu       $v0, $a0, 0x99
    ctx->pc = 0x1c07acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 153));
    // 0x1c07b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c07b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c07b4: 0x0  nop
    ctx->pc = 0x1c07b4u;
    // NOP
    // 0x1c07b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c07b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c07bc: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c07bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c07c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c07c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c07c4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1c07c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c07c8: 0xc065480  jal         func_195200
    ctx->pc = 0x1C07C8u;
    SET_GPR_U32(ctx, 31, 0x1C07D0u);
    ctx->pc = 0x1C07CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C07C8u;
            // 0x1c07cc: 0x2465001e  addiu       $a1, $v1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C07D0u; }
        if (ctx->pc != 0x1C07D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C07D0u; }
        if (ctx->pc != 0x1C07D0u) { return; }
    }
    ctx->pc = 0x1C07D0u;
    // 0x1c07d0: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1c07d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c07d4: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1c07d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1c07d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c07d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c07dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c07dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c07e0: 0x2606fff8  addiu       $a2, $s0, -0x8
    ctx->pc = 0x1c07e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x1c07e4: 0x24820099  addiu       $v0, $a0, 0x99
    ctx->pc = 0x1c07e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 153));
    // 0x1c07e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c07e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c07ec: 0x0  nop
    ctx->pc = 0x1c07ecu;
    // NOP
    // 0x1c07f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c07f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c07f4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c07f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c07f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c07f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c07fc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1c07fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c0800: 0xc065480  jal         func_195200
    ctx->pc = 0x1C0800u;
    SET_GPR_U32(ctx, 31, 0x1C0808u);
    ctx->pc = 0x1C0804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0800u;
            // 0x1c0804: 0x2465001e  addiu       $a1, $v1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0808u; }
        if (ctx->pc != 0x1C0808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0808u; }
        if (ctx->pc != 0x1C0808u) { return; }
    }
    ctx->pc = 0x1C0808u;
label_1c0808:
    // 0x1c0808: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1c0808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c080c: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1c080cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1c0810: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c0810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c0814: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c0814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c0818: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x1c0818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1c081c: 0x24820099  addiu       $v0, $a0, 0x99
    ctx->pc = 0x1c081cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 153));
    // 0x1c0820: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0824: 0x0  nop
    ctx->pc = 0x1c0824u;
    // NOP
    // 0x1c0828: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c0828u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c082c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c082cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c0830: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c0830u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c0834: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1c0834u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c0838: 0xc065480  jal         func_195200
    ctx->pc = 0x1C0838u;
    SET_GPR_U32(ctx, 31, 0x1C0840u);
    ctx->pc = 0x1C083Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0838u;
            // 0x1c083c: 0x2465001e  addiu       $a1, $v1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0840u; }
        if (ctx->pc != 0x1C0840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0840u; }
        if (ctx->pc != 0x1C0840u) { return; }
    }
    ctx->pc = 0x1C0840u;
    // 0x1c0840: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1c0840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c0844: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1c0844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1c0848: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c0848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c084c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c084cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c0850: 0x2606fff0  addiu       $a2, $s0, -0x10
    ctx->pc = 0x1c0850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1c0854: 0x24820099  addiu       $v0, $a0, 0x99
    ctx->pc = 0x1c0854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 153));
    // 0x1c0858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c085c: 0x0  nop
    ctx->pc = 0x1c085cu;
    // NOP
    // 0x1c0860: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c0860u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c0864: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c0864u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c0868: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c0868u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c086c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1c086cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c0870: 0xc065480  jal         func_195200
    ctx->pc = 0x1C0870u;
    SET_GPR_U32(ctx, 31, 0x1C0878u);
    ctx->pc = 0x1C0874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0870u;
            // 0x1c0874: 0x2465001e  addiu       $a1, $v1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0878u; }
        if (ctx->pc != 0x1C0878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0878u; }
        if (ctx->pc != 0x1C0878u) { return; }
    }
    ctx->pc = 0x1C0878u;
    // 0x1c0878: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1c0878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c087c: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1c087cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1c0880: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c0880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c0884: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c0884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c0888: 0x26060018  addiu       $a2, $s0, 0x18
    ctx->pc = 0x1c0888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1c088c: 0x24820099  addiu       $v0, $a0, 0x99
    ctx->pc = 0x1c088cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 153));
    // 0x1c0890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0894: 0x0  nop
    ctx->pc = 0x1c0894u;
    // NOP
    // 0x1c0898: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c0898u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c089c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c089cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c08a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c08a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c08a4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1c08a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c08a8: 0xc065480  jal         func_195200
    ctx->pc = 0x1C08A8u;
    SET_GPR_U32(ctx, 31, 0x1C08B0u);
    ctx->pc = 0x1C08ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C08A8u;
            // 0x1c08ac: 0x2465001e  addiu       $a1, $v1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C08B0u; }
        if (ctx->pc != 0x1C08B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C08B0u; }
        if (ctx->pc != 0x1C08B0u) { return; }
    }
    ctx->pc = 0x1C08B0u;
    // 0x1c08b0: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1c08b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c08b4: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1c08b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1c08b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c08b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c08bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c08bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c08c0: 0x2606ffe8  addiu       $a2, $s0, -0x18
    ctx->pc = 0x1c08c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
    // 0x1c08c4: 0x24820099  addiu       $v0, $a0, 0x99
    ctx->pc = 0x1c08c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 153));
    // 0x1c08c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c08c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c08cc: 0x0  nop
    ctx->pc = 0x1c08ccu;
    // NOP
    // 0x1c08d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c08d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c08d4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c08d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c08d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c08d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c08dc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1c08dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c08e0: 0xc065480  jal         func_195200
    ctx->pc = 0x1C08E0u;
    SET_GPR_U32(ctx, 31, 0x1C08E8u);
    ctx->pc = 0x1C08E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C08E0u;
            // 0x1c08e4: 0x2465001e  addiu       $a1, $v1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C08E8u; }
        if (ctx->pc != 0x1C08E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C08E8u; }
        if (ctx->pc != 0x1C08E8u) { return; }
    }
    ctx->pc = 0x1C08E8u;
    // 0x1c08e8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1c08e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c08ec: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x1c08ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1c08f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c08f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c08f4: 0x24630099  addiu       $v1, $v1, 0x99
    ctx->pc = 0x1c08f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 153));
    // 0x1c08f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c08f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c08fc: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x1c08fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x1c0900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0904: 0x0  nop
    ctx->pc = 0x1c0904u;
    // NOP
    // 0x1c0908: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c0908u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c090c: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x1c090cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x1c0910: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C0910u;
    SET_GPR_U32(ctx, 31, 0x1C0918u);
    ctx->pc = 0x1C0914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0910u;
            // 0x1c0914: 0x46140b01  sub.s       $f12, $f1, $f20 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0918u; }
        if (ctx->pc != 0x1C0918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0918u; }
        if (ctx->pc != 0x1C0918u) { return; }
    }
    ctx->pc = 0x1C0918u;
label_1c0918:
    // 0x1c0918: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c0918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c091c: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1c091cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c0920: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1c0920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0924: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1c0924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c0928: 0xc071024  jal         func_1C4090
    ctx->pc = 0x1C0928u;
    SET_GPR_U32(ctx, 31, 0x1C0930u);
    ctx->pc = 0x1C092Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0928u;
            // 0x1c092c: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4090u;
    if (runtime->hasFunction(0x1C4090u)) {
        auto targetFn = runtime->lookupFunction(0x1C4090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0930u; }
        if (ctx->pc != 0x1C0930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1c4090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0930u; }
        if (ctx->pc != 0x1C0930u) { return; }
    }
    ctx->pc = 0x1C0930u;
    // 0x1c0930: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1c0930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c0934: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1c0934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x1c0938: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c0938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c093c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x1c093cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x1c0940: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x1C0940u;
    SET_GPR_U32(ctx, 31, 0x1C0948u);
    ctx->pc = 0x1C0944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0940u;
            // 0x1c0944: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0948u; }
        if (ctx->pc != 0x1C0948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0948u; }
        if (ctx->pc != 0x1C0948u) { return; }
    }
    ctx->pc = 0x1C0948u;
    // 0x1c0948: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1c0948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c094c: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1c094cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0950: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x1C0950u;
    SET_GPR_U32(ctx, 31, 0x1C0958u);
    ctx->pc = 0x1C0954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0950u;
            // 0x1c0954: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0958u; }
        if (ctx->pc != 0x1C0958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0958u; }
        if (ctx->pc != 0x1C0958u) { return; }
    }
    ctx->pc = 0x1C0958u;
    // 0x1c0958: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1c0958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c095c: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1c095cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0960: 0xc04b804  jal         func_12E010
    ctx->pc = 0x1C0960u;
    SET_GPR_U32(ctx, 31, 0x1C0968u);
    ctx->pc = 0x1C0964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0960u;
            // 0x1c0964: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0968u; }
        if (ctx->pc != 0x1C0968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0968u; }
        if (ctx->pc != 0x1C0968u) { return; }
    }
    ctx->pc = 0x1C0968u;
    // 0x1c0968: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1c0968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c096c: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1c096cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0970: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x1C0970u;
    SET_GPR_U32(ctx, 31, 0x1C0978u);
    ctx->pc = 0x1C0974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0970u;
            // 0x1c0974: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0978u; }
        if (ctx->pc != 0x1C0978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0978u; }
        if (ctx->pc != 0x1C0978u) { return; }
    }
    ctx->pc = 0x1C0978u;
    // 0x1c0978: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1c0978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c097c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c097cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0980: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x1C0980u;
    SET_GPR_U32(ctx, 31, 0x1C0988u);
    ctx->pc = 0x1C0984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0980u;
            // 0x1c0984: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0988u; }
        if (ctx->pc != 0x1C0988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0988u; }
        if (ctx->pc != 0x1C0988u) { return; }
    }
    ctx->pc = 0x1C0988u;
    // 0x1c0988: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1c0988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c098c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1c098cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c0990: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1c0990u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c0994: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C0994u;
    {
        const bool branch_taken_0x1c0994 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0994) {
            ctx->pc = 0x1C09E8u;
            goto label_1c09e8;
        }
    }
    ctx->pc = 0x1C099Cu;
    // 0x1c099c: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x1c099cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x1c09a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C09A0u;
    {
        const bool branch_taken_0x1c09a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c09a0) {
            ctx->pc = 0x1C09B8u;
            goto label_1c09b8;
        }
    }
    ctx->pc = 0x1C09A8u;
    // 0x1c09a8: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x1C09A8u;
    SET_GPR_U32(ctx, 31, 0x1C09B0u);
    ctx->pc = 0x1C09ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C09A8u;
            // 0x1c09ac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C09B0u; }
        if (ctx->pc != 0x1C09B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C09B0u; }
        if (ctx->pc != 0x1C09B0u) { return; }
    }
    ctx->pc = 0x1C09B0u;
    // 0x1c09b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C09B0u;
    {
        const bool branch_taken_0x1c09b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c09b0) {
            ctx->pc = 0x1C09C0u;
            goto label_1c09c0;
        }
    }
    ctx->pc = 0x1C09B8u;
label_1c09b8:
    // 0x1c09b8: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1C09B8u;
    SET_GPR_U32(ctx, 31, 0x1C09C0u);
    ctx->pc = 0x1C09BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C09B8u;
            // 0x1c09bc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C09C0u; }
        if (ctx->pc != 0x1C09C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C09C0u; }
        if (ctx->pc != 0x1C09C0u) { return; }
    }
    ctx->pc = 0x1C09C0u;
label_1c09c0:
    // 0x1c09c0: 0x8e23010c  lw          $v1, 0x10C($s1)
    ctx->pc = 0x1c09c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x1c09c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C09C4u;
    {
        const bool branch_taken_0x1c09c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c09c4) {
            ctx->pc = 0x1C09D8u;
            goto label_1c09d8;
        }
    }
    ctx->pc = 0x1C09CCu;
    // 0x1c09cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C09CCu;
    {
        const bool branch_taken_0x1c09cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C09D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C09CCu;
            // 0x1c09d0: 0xae20010c  sw          $zero, 0x10C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c09cc) {
            ctx->pc = 0x1C09F8u;
            goto label_1c09f8;
        }
    }
    ctx->pc = 0x1C09D4u;
    // 0x1c09d4: 0x0  nop
    ctx->pc = 0x1c09d4u;
    // NOP
label_1c09d8:
    // 0x1c09d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c09d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c09dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C09DCu;
    {
        const bool branch_taken_0x1c09dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C09E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C09DCu;
            // 0x1c09e0: 0xae23010c  sw          $v1, 0x10C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c09dc) {
            ctx->pc = 0x1C09F8u;
            goto label_1c09f8;
        }
    }
    ctx->pc = 0x1C09E4u;
    // 0x1c09e4: 0x0  nop
    ctx->pc = 0x1c09e4u;
    // NOP
label_1c09e8:
    // 0x1c09e8: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1C09E8u;
    SET_GPR_U32(ctx, 31, 0x1C09F0u);
    ctx->pc = 0x1C09ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C09E8u;
            // 0x1c09ec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C09F0u; }
        if (ctx->pc != 0x1C09F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C09F0u; }
        if (ctx->pc != 0x1C09F0u) { return; }
    }
    ctx->pc = 0x1C09F0u;
    // 0x1c09f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c09f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c09f4: 0xae23010c  sw          $v1, 0x10C($s1)
    ctx->pc = 0x1c09f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 3));
label_1c09f8:
    // 0x1c09f8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1c09f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c09fc: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1c09fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1c0a00: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1c0a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c0a04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c0a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c0a08: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x1c0a08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x1c0a0c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1c0a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c0a10: 0x1c600019  bgtz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C0A10u;
    {
        const bool branch_taken_0x1c0a10 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1c0a10) {
            ctx->pc = 0x1C0A78u;
            goto label_1c0a78;
        }
    }
    ctx->pc = 0x1C0A18u;
    // 0x1c0a18: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1c0a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c0a1c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c0a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c0a20: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c0a20u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c0a24: 0x0  nop
    ctx->pc = 0x1c0a24u;
    // NOP
    // 0x1c0a28: 0x0  nop
    ctx->pc = 0x1c0a28u;
    // NOP
    // 0x1c0a2c: 0x1010  mfhi        $v0
    ctx->pc = 0x1c0a2cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c0a30: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C0A30u;
    {
        const bool branch_taken_0x1c0a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0a30) {
            ctx->pc = 0x1C0A58u;
            goto label_1c0a58;
        }
    }
    ctx->pc = 0x1C0A38u;
    // 0x1c0a38: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1c0a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c0a3c: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x1c0a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x1c0a40: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x1c0a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1c0a44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c0a44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c0a48: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1c0a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c0a4c: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1C0A4Cu;
    SET_GPR_U32(ctx, 31, 0x1C0A54u);
    ctx->pc = 0x1C0A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0A4Cu;
            // 0x1c0a50: 0x2464005e  addiu       $a0, $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 94));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0A54u; }
        if (ctx->pc != 0x1C0A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0A54u; }
        if (ctx->pc != 0x1C0A54u) { return; }
    }
    ctx->pc = 0x1C0A54u;
    // 0x1c0a54: 0x0  nop
    ctx->pc = 0x1c0a54u;
    // NOP
label_1c0a58:
    // 0x1c0a58: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x1c0a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1c0a5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0a60: 0xae220120  sw          $v0, 0x120($s1)
    ctx->pc = 0x1c0a60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
    // 0x1c0a64: 0x8e250120  lw          $a1, 0x120($s1)
    ctx->pc = 0x1c0a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1c0a68: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x1C0A68u;
    SET_GPR_U32(ctx, 31, 0x1C0A70u);
    ctx->pc = 0x1C0A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0A68u;
            // 0x1c0a6c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0A70u; }
        if (ctx->pc != 0x1C0A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0A70u; }
        if (ctx->pc != 0x1C0A70u) { return; }
    }
    ctx->pc = 0x1C0A70u;
    // 0x1c0a70: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x1C0A70u;
    {
        const bool branch_taken_0x1c0a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0a70) {
            ctx->pc = 0x1C0C70u;
            goto label_1c0c70;
        }
    }
    ctx->pc = 0x1C0A78u;
label_1c0a78:
    // 0x1c0a78: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1c0a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1c0a7c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1c0a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c0a80: 0x1083007b  beq         $a0, $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x1C0A80u;
    {
        const bool branch_taken_0x1c0a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C0A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0A80u;
            // 0x1c0a84: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a80) {
            ctx->pc = 0x1C0C70u;
            goto label_1c0c70;
        }
    }
    ctx->pc = 0x1C0A88u;
    // 0x1c0a88: 0x10830079  beq         $a0, $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x1C0A88u;
    {
        const bool branch_taken_0x1c0a88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C0A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0A88u;
            // 0x1c0a8c: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a88) {
            ctx->pc = 0x1C0C70u;
            goto label_1c0c70;
        }
    }
    ctx->pc = 0x1C0A90u;
    // 0x1c0a90: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1c0a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1c0a94: 0x8c231c70  lw          $v1, 0x1C70($at)
    ctx->pc = 0x1c0a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7280)));
    // 0x1c0a98: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c0a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c0a9c: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1c0a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1c0aa0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c0aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0aa4: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1c0aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c0aa8: 0x2625002c  addiu       $a1, $s1, 0x2C
    ctx->pc = 0x1c0aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x1c0aac: 0x24c6fc50  addiu       $a2, $a2, -0x3B0
    ctx->pc = 0x1c0aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966352));
    // 0x1c0ab0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1c0ab0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ab4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1c0ab4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ab8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c0ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0abc: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x1c0abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1c0ac0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0ac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0ac4: 0x0  nop
    ctx->pc = 0x1c0ac4u;
    // NOP
    // 0x1c0ac8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c0ac8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c0acc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1c0accu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1c0ad0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c0ad0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c0ad4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c0ad4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c0ad8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c0ad8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c0adc: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x1c0adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x1c0ae0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c0ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c0ae4: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1c0ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1c0ae8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0aec: 0x0  nop
    ctx->pc = 0x1c0aecu;
    // NOP
    // 0x1c0af0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c0af0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c0af4: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x1c0af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x1c0af8: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1c0af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c0afc: 0x244200aa  addiu       $v0, $v0, 0xAA
    ctx->pc = 0x1c0afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 170));
    // 0x1c0b00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0b04: 0x0  nop
    ctx->pc = 0x1c0b04u;
    // NOP
    // 0x1c0b08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c0b08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c0b0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c0b0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c0b10: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x1c0b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x1c0b14: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c0b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c0b18: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1c0b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1c0b1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0b20: 0x0  nop
    ctx->pc = 0x1c0b20u;
    // NOP
    // 0x1c0b24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c0b24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c0b28: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1C0B28u;
    SET_GPR_U32(ctx, 31, 0x1C0B30u);
    ctx->pc = 0x1C0B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B28u;
            // 0x1c0b2c: 0xe6200038  swc1        $f0, 0x38($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B30u; }
        if (ctx->pc != 0x1C0B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B30u; }
        if (ctx->pc != 0x1C0B30u) { return; }
    }
    ctx->pc = 0x1C0B30u;
    // 0x1c0b30: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c0b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c0b34: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1c0b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1c0b38: 0x8c231c70  lw          $v1, 0x1C70($at)
    ctx->pc = 0x1c0b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7280)));
    // 0x1c0b3c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c0b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c0b40: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1c0b40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1c0b44: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c0b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0b48: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1c0b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c0b4c: 0x2625003c  addiu       $a1, $s1, 0x3C
    ctx->pc = 0x1c0b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x1c0b50: 0x24c6fc50  addiu       $a2, $a2, -0x3B0
    ctx->pc = 0x1c0b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966352));
    // 0x1c0b54: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1c0b54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0b58: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1c0b58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0b5c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c0b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0b60: 0x24420096  addiu       $v0, $v0, 0x96
    ctx->pc = 0x1c0b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 150));
    // 0x1c0b64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0b64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0b68: 0x0  nop
    ctx->pc = 0x1c0b68u;
    // NOP
    // 0x1c0b6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c0b6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c0b70: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1c0b70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1c0b74: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c0b74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c0b78: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c0b78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c0b7c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c0b7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c0b80: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x1c0b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x1c0b84: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c0b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c0b88: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1c0b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1c0b8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0b8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0b90: 0x0  nop
    ctx->pc = 0x1c0b90u;
    // NOP
    // 0x1c0b94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c0b94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c0b98: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x1c0b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x1c0b9c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1c0b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c0ba0: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1c0ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1c0ba4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0ba8: 0x0  nop
    ctx->pc = 0x1c0ba8u;
    // NOP
    // 0x1c0bac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c0bacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c0bb0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c0bb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c0bb4: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x1c0bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x1c0bb8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c0bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c0bbc: 0x2442005a  addiu       $v0, $v0, 0x5A
    ctx->pc = 0x1c0bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
    // 0x1c0bc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0bc4: 0x0  nop
    ctx->pc = 0x1c0bc4u;
    // NOP
    // 0x1c0bc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c0bc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c0bcc: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1C0BCCu;
    SET_GPR_U32(ctx, 31, 0x1C0BD4u);
    ctx->pc = 0x1C0BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0BCCu;
            // 0x1c0bd0: 0xe6200048  swc1        $f0, 0x48($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0BD4u; }
        if (ctx->pc != 0x1C0BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0BD4u; }
        if (ctx->pc != 0x1C0BD4u) { return; }
    }
    ctx->pc = 0x1C0BD4u;
    // 0x1c0bd4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c0bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c0bd8: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1c0bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1c0bdc: 0x8c231c70  lw          $v1, 0x1C70($at)
    ctx->pc = 0x1c0bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7280)));
    // 0x1c0be0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c0be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c0be4: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1c0be4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1c0be8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c0be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0bec: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1c0becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c0bf0: 0x2625004c  addiu       $a1, $s1, 0x4C
    ctx->pc = 0x1c0bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x1c0bf4: 0x24c6fc50  addiu       $a2, $a2, -0x3B0
    ctx->pc = 0x1c0bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966352));
    // 0x1c0bf8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1c0bf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0bfc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1c0bfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c00: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1c0c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0c04: 0x2442006e  addiu       $v0, $v0, 0x6E
    ctx->pc = 0x1c0c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
    // 0x1c0c08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0c0c: 0x0  nop
    ctx->pc = 0x1c0c0cu;
    // NOP
    // 0x1c0c10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c0c10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c0c14: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1c0c14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1c0c18: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c0c18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c0c1c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c0c1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c0c20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c0c20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c0c24: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x1c0c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x1c0c28: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c0c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c0c2c: 0x2442ffba  addiu       $v0, $v0, -0x46
    ctx->pc = 0x1c0c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967226));
    // 0x1c0c30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0c34: 0x0  nop
    ctx->pc = 0x1c0c34u;
    // NOP
    // 0x1c0c38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c0c38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c0c3c: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x1c0c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x1c0c40: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1c0c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c0c44: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1c0c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1c0c48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0c48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0c4c: 0x0  nop
    ctx->pc = 0x1c0c4cu;
    // NOP
    // 0x1c0c50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c0c50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c0c54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c0c54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c0c58: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x1c0c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x1c0c5c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1c0c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0c60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c0c60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c0c64: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1C0C64u;
    SET_GPR_U32(ctx, 31, 0x1C0C6Cu);
    ctx->pc = 0x1C0C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C64u;
            // 0x1c0c68: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0C6Cu; }
        if (ctx->pc != 0x1C0C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0C6Cu; }
        if (ctx->pc != 0x1C0C6Cu) { return; }
    }
    ctx->pc = 0x1C0C6Cu;
    // 0x1c0c6c: 0x0  nop
    ctx->pc = 0x1c0c6cu;
    // NOP
label_1c0c70:
    // 0x1c0c70: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x1c0c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x1c0c74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c0c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c0c78: 0xae230118  sw          $v1, 0x118($s1)
    ctx->pc = 0x1c0c78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 3));
    // 0x1c0c7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c0c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c0c80: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c0c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c0c84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c0c84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c0c88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c0c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C8Cu;
            // 0x1c0c90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C01A8u: goto label_1c01a8;
            case 0x1C01E8u: goto label_1c01e8;
            case 0x1C0210u: goto label_1c0210;
            case 0x1C0218u: goto label_1c0218;
            case 0x1C0220u: goto label_1c0220;
            case 0x1C0240u: goto label_1c0240;
            case 0x1C0290u: goto label_1c0290;
            case 0x1C02E8u: goto label_1c02e8;
            case 0x1C0340u: goto label_1c0340;
            case 0x1C0378u: goto label_1c0378;
            case 0x1C03B8u: goto label_1c03b8;
            case 0x1C03F0u: goto label_1c03f0;
            case 0x1C0428u: goto label_1c0428;
            case 0x1C0468u: goto label_1c0468;
            case 0x1C04A0u: goto label_1c04a0;
            case 0x1C04D8u: goto label_1c04d8;
            case 0x1C0518u: goto label_1c0518;
            case 0x1C0548u: goto label_1c0548;
            case 0x1C0578u: goto label_1c0578;
            case 0x1C05A8u: goto label_1c05a8;
            case 0x1C05D8u: goto label_1c05d8;
            case 0x1C0618u: goto label_1c0618;
            case 0x1C0648u: goto label_1c0648;
            case 0x1C0678u: goto label_1c0678;
            case 0x1C06A8u: goto label_1c06a8;
            case 0x1C06D0u: goto label_1c06d0;
            case 0x1C0788u: goto label_1c0788;
            case 0x1C0808u: goto label_1c0808;
            case 0x1C0918u: goto label_1c0918;
            case 0x1C09B8u: goto label_1c09b8;
            case 0x1C09C0u: goto label_1c09c0;
            case 0x1C09D8u: goto label_1c09d8;
            case 0x1C09E8u: goto label_1c09e8;
            case 0x1C09F8u: goto label_1c09f8;
            case 0x1C0A58u: goto label_1c0a58;
            case 0x1C0A78u: goto label_1c0a78;
            case 0x1C0C70u: goto label_1c0c70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C0C94u;
}
