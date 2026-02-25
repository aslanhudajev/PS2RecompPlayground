#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MemCardFirstFunc
// Address: 0x185070 - 0x1864bc
void MemCardFirstFunc_0x185070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MemCardFirstFunc_0x185070");
#endif

    ctx->pc = 0x185070u;

    // 0x185070: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x185070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x185074: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x185074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x185078: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x185078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18507c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18507cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x185080: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x185080u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185084: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x185084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x185088: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x185088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18508c: 0x24110078  addiu       $s1, $zero, 0x78
    ctx->pc = 0x18508cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x185090: 0xc0619e4  jal         func_186790
    ctx->pc = 0x185090u;
    SET_GPR_U32(ctx, 31, 0x185098u);
    ctx->pc = 0x185094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185090u;
            // 0x185094: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186790u;
    if (runtime->hasFunction(0x186790u)) {
        auto targetFn = runtime->lookupFunction(0x186790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185098u; }
        if (ctx->pc != 0x185098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgCacheClear_0x186790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185098u; }
        if (ctx->pc != 0x185098u) { return; }
    }
    ctx->pc = 0x185098u;
    // 0x185098: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x185098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18509c: 0x0  nop
    ctx->pc = 0x18509cu;
    // NOP
label_1850a0:
    // 0x1850a0: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x1850A0u;
    SET_GPR_U32(ctx, 31, 0x1850A8u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1850A8u; }
        if (ctx->pc != 0x1850A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1850A8u; }
        if (ctx->pc != 0x1850A8u) { return; }
    }
    ctx->pc = 0x1850A8u;
    // 0x1850a8: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x1850a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x1850ac: 0x124201e6  beq         $s2, $v0, . + 4 + (0x1E6 << 2)
    ctx->pc = 0x1850ACu;
    {
        const bool branch_taken_0x1850ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1850B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1850ACu;
            // 0x1850b0: 0x24020136  addiu       $v0, $zero, 0x136 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1850ac) {
            ctx->pc = 0x185848u;
            goto label_185848;
        }
    }
    ctx->pc = 0x1850B4u;
    // 0x1850b4: 0x124201d6  beq         $s2, $v0, . + 4 + (0x1D6 << 2)
    ctx->pc = 0x1850B4u;
    {
        const bool branch_taken_0x1850b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1850b4) {
            ctx->pc = 0x185810u;
            goto label_185810;
        }
    }
    ctx->pc = 0x1850BCu;
    // 0x1850bc: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x1850bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1850c0: 0x124201c5  beq         $s2, $v0, . + 4 + (0x1C5 << 2)
    ctx->pc = 0x1850C0u;
    {
        const bool branch_taken_0x1850c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1850C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1850C0u;
            // 0x1850c4: 0x24020122  addiu       $v0, $zero, 0x122 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1850c0) {
            ctx->pc = 0x1857D8u;
            goto label_1857d8;
        }
    }
    ctx->pc = 0x1850C8u;
    // 0x1850c8: 0x124201b5  beq         $s2, $v0, . + 4 + (0x1B5 << 2)
    ctx->pc = 0x1850C8u;
    {
        const bool branch_taken_0x1850c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1850c8) {
            ctx->pc = 0x1857A0u;
            goto label_1857a0;
        }
    }
    ctx->pc = 0x1850D0u;
    // 0x1850d0: 0x24020104  addiu       $v0, $zero, 0x104
    ctx->pc = 0x1850d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x1850d4: 0x124201a6  beq         $s2, $v0, . + 4 + (0x1A6 << 2)
    ctx->pc = 0x1850D4u;
    {
        const bool branch_taken_0x1850d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1850D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1850D4u;
            // 0x1850d8: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1850d4) {
            ctx->pc = 0x185770u;
            goto label_185770;
        }
    }
    ctx->pc = 0x1850DCu;
    // 0x1850dc: 0x124201a0  beq         $s2, $v0, . + 4 + (0x1A0 << 2)
    ctx->pc = 0x1850DCu;
    {
        const bool branch_taken_0x1850dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1850dc) {
            ctx->pc = 0x185760u;
            goto label_185760;
        }
    }
    ctx->pc = 0x1850E4u;
    // 0x1850e4: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x1850e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x1850e8: 0x1242018b  beq         $s2, $v0, . + 4 + (0x18B << 2)
    ctx->pc = 0x1850E8u;
    {
        const bool branch_taken_0x1850e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1850ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1850E8u;
            // 0x1850ec: 0x240200f0  addiu       $v0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1850e8) {
            ctx->pc = 0x185718u;
            goto label_185718;
        }
    }
    ctx->pc = 0x1850F0u;
    // 0x1850f0: 0x12420181  beq         $s2, $v0, . + 4 + (0x181 << 2)
    ctx->pc = 0x1850F0u;
    {
        const bool branch_taken_0x1850f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1850f0) {
            ctx->pc = 0x1856F8u;
            goto label_1856f8;
        }
    }
    ctx->pc = 0x1850F8u;
    // 0x1850f8: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x1850f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x1850fc: 0x1242013a  beq         $s2, $v0, . + 4 + (0x13A << 2)
    ctx->pc = 0x1850FCu;
    {
        const bool branch_taken_0x1850fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x185100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1850FCu;
            // 0x185100: 0x240200e6  addiu       $v0, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1850fc) {
            ctx->pc = 0x1855E8u;
            goto label_1855e8;
        }
    }
    ctx->pc = 0x185104u;
    // 0x185104: 0x124200f4  beq         $s2, $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x185104u;
    {
        const bool branch_taken_0x185104 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x185104) {
            ctx->pc = 0x1854D8u;
            goto label_1854d8;
        }
    }
    ctx->pc = 0x18510Cu;
    // 0x18510c: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x18510cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x185110: 0x124200ad  beq         $s2, $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x185110u;
    {
        const bool branch_taken_0x185110 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x185114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185110u;
            // 0x185114: 0x240200dc  addiu       $v0, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185110) {
            ctx->pc = 0x1853C8u;
            goto label_1853c8;
        }
    }
    ctx->pc = 0x185118u;
    // 0x185118: 0x1242009f  beq         $s2, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x185118u;
    {
        const bool branch_taken_0x185118 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x185118) {
            ctx->pc = 0x185398u;
            goto label_185398;
        }
    }
    ctx->pc = 0x185120u;
    // 0x185120: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x185120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x185124: 0x12420098  beq         $s2, $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x185124u;
    {
        const bool branch_taken_0x185124 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x185128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185124u;
            // 0x185128: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185124) {
            ctx->pc = 0x185388u;
            goto label_185388;
        }
    }
    ctx->pc = 0x18512Cu;
    // 0x18512c: 0x12420074  beq         $s2, $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x18512Cu;
    {
        const bool branch_taken_0x18512c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x18512c) {
            ctx->pc = 0x185300u;
            goto label_185300;
        }
    }
    ctx->pc = 0x185134u;
    // 0x185134: 0x240200ca  addiu       $v0, $zero, 0xCA
    ctx->pc = 0x185134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x185138: 0x1242006d  beq         $s2, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x185138u;
    {
        const bool branch_taken_0x185138 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x18513Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185138u;
            // 0x18513c: 0x240200c9  addiu       $v0, $zero, 0xC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185138) {
            ctx->pc = 0x1852F0u;
            goto label_1852f0;
        }
    }
    ctx->pc = 0x185140u;
    // 0x185140: 0x1242006b  beq         $s2, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x185140u;
    {
        const bool branch_taken_0x185140 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x185140) {
            ctx->pc = 0x1852F0u;
            goto label_1852f0;
        }
    }
    ctx->pc = 0x185148u;
    // 0x185148: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x185148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x18514c: 0x12420068  beq         $s2, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x18514Cu;
    {
        const bool branch_taken_0x18514c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x185150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18514Cu;
            // 0x185150: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18514c) {
            ctx->pc = 0x1852F0u;
            goto label_1852f0;
        }
    }
    ctx->pc = 0x185154u;
    // 0x185154: 0x12420066  beq         $s2, $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x185154u;
    {
        const bool branch_taken_0x185154 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x185154) {
            ctx->pc = 0x1852F0u;
            goto label_1852f0;
        }
    }
    ctx->pc = 0x18515Cu;
    // 0x18515c: 0x240200bf  addiu       $v0, $zero, 0xBF
    ctx->pc = 0x18515cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    // 0x185160: 0x12420063  beq         $s2, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x185160u;
    {
        const bool branch_taken_0x185160 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x185164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185160u;
            // 0x185164: 0x240200be  addiu       $v0, $zero, 0xBE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185160) {
            ctx->pc = 0x1852F0u;
            goto label_1852f0;
        }
    }
    ctx->pc = 0x185168u;
    // 0x185168: 0x12420061  beq         $s2, $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x185168u;
    {
        const bool branch_taken_0x185168 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x185168) {
            ctx->pc = 0x1852F0u;
            goto label_1852f0;
        }
    }
    ctx->pc = 0x185170u;
    // 0x185170: 0x240200b5  addiu       $v0, $zero, 0xB5
    ctx->pc = 0x185170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
    // 0x185174: 0x1242005e  beq         $s2, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x185174u;
    {
        const bool branch_taken_0x185174 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x185178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185174u;
            // 0x185178: 0x240200d2  addiu       $v0, $zero, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185174) {
            ctx->pc = 0x1852F0u;
            goto label_1852f0;
        }
    }
    ctx->pc = 0x18517Cu;
    // 0x18517c: 0x1242004a  beq         $s2, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x18517Cu;
    {
        const bool branch_taken_0x18517c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x18517c) {
            ctx->pc = 0x1852A8u;
            goto label_1852a8;
        }
    }
    ctx->pc = 0x185184u;
    // 0x185184: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x185184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x185188: 0x12420025  beq         $s2, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x185188u;
    {
        const bool branch_taken_0x185188 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x18518Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185188u;
            // 0x18518c: 0x2402008c  addiu       $v0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185188) {
            ctx->pc = 0x185220u;
            goto label_185220;
        }
    }
    ctx->pc = 0x185190u;
    // 0x185190: 0x12420011  beq         $s2, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x185190u;
    {
        const bool branch_taken_0x185190 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x185190) {
            ctx->pc = 0x1851D8u;
            goto label_1851d8;
        }
    }
    ctx->pc = 0x185198u;
    // 0x185198: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x185198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x18519c: 0x1242000a  beq         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18519Cu;
    {
        const bool branch_taken_0x18519c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1851A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18519Cu;
            // 0x1851a0: 0x240200aa  addiu       $v0, $zero, 0xAA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18519c) {
            ctx->pc = 0x1851C8u;
            goto label_1851c8;
        }
    }
    ctx->pc = 0x1851A4u;
    // 0x1851a4: 0x12420008  beq         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1851A4u;
    {
        const bool branch_taken_0x1851a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1851a4) {
            ctx->pc = 0x1851C8u;
            goto label_1851c8;
        }
    }
    ctx->pc = 0x1851ACu;
    // 0x1851ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1851acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1851b0: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1851B0u;
    {
        const bool branch_taken_0x1851b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1851b0) {
            ctx->pc = 0x1851C8u;
            goto label_1851c8;
        }
    }
    ctx->pc = 0x1851B8u;
    // 0x1851b8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1851B8u;
    {
        const bool branch_taken_0x1851b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1851b8) {
            ctx->pc = 0x1851C8u;
            goto label_1851c8;
        }
    }
    ctx->pc = 0x1851C0u;
    // 0x1851c0: 0x100001e3  b           . + 4 + (0x1E3 << 2)
    ctx->pc = 0x1851C0u;
    {
        const bool branch_taken_0x1851c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1851c0) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x1851C8u;
label_1851c8:
    // 0x1851c8: 0xc0619c0  jal         func_186700
    ctx->pc = 0x1851C8u;
    SET_GPR_U32(ctx, 31, 0x1851D0u);
    ctx->pc = 0x1851CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1851C8u;
            // 0x1851cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1851D0u; }
        if (ctx->pc != 0x1851D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1851D0u; }
        if (ctx->pc != 0x1851D0u) { return; }
    }
    ctx->pc = 0x1851D0u;
    // 0x1851d0: 0x100001df  b           . + 4 + (0x1DF << 2)
    ctx->pc = 0x1851D0u;
    {
        const bool branch_taken_0x1851d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1851d0) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x1851D8u;
label_1851d8:
    // 0x1851d8: 0xc0619c0  jal         func_186700
    ctx->pc = 0x1851D8u;
    SET_GPR_U32(ctx, 31, 0x1851E0u);
    ctx->pc = 0x1851DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1851D8u;
            // 0x1851dc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1851E0u; }
        if (ctx->pc != 0x1851E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1851E0u; }
        if (ctx->pc != 0x1851E0u) { return; }
    }
    ctx->pc = 0x1851E0u;
    // 0x1851e0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1851e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1851e4: 0x8c2323b0  lw          $v1, 0x23B0($at)
    ctx->pc = 0x1851e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9136)));
    // 0x1851e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1851e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1851ec: 0x8c222340  lw          $v0, 0x2340($at)
    ctx->pc = 0x1851ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9024)));
    // 0x1851f0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1851f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1851f4: 0x104001d6  beqz        $v0, . + 4 + (0x1D6 << 2)
    ctx->pc = 0x1851F4u;
    {
        const bool branch_taken_0x1851f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1851F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1851F4u;
            // 0x1851f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1851f4) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x1851FCu;
    // 0x1851fc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1851fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185200: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x185200u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x185204: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x185204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185208: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18520c: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x18520Cu;
    SET_GPR_U32(ctx, 31, 0x185214u);
    ctx->pc = 0x185210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18520Cu;
            // 0x185210: 0x241200e6  addiu       $s2, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185214u; }
        if (ctx->pc != 0x185214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185214u; }
        if (ctx->pc != 0x185214u) { return; }
    }
    ctx->pc = 0x185214u;
    // 0x185214: 0x100001ce  b           . + 4 + (0x1CE << 2)
    ctx->pc = 0x185214u;
    {
        const bool branch_taken_0x185214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185214) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x18521Cu;
    // 0x18521c: 0x0  nop
    ctx->pc = 0x18521cu;
    // NOP
label_185220:
    // 0x185220: 0xc0619c0  jal         func_186700
    ctx->pc = 0x185220u;
    SET_GPR_U32(ctx, 31, 0x185228u);
    ctx->pc = 0x185224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185220u;
            // 0x185224: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185228u; }
        if (ctx->pc != 0x185228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185228u; }
        if (ctx->pc != 0x185228u) { return; }
    }
    ctx->pc = 0x185228u;
    // 0x185228: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x185228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18522c: 0x8c2323b0  lw          $v1, 0x23B0($at)
    ctx->pc = 0x18522cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9136)));
    // 0x185230: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x185230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x185234: 0x8c222340  lw          $v0, 0x2340($at)
    ctx->pc = 0x185234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9024)));
    // 0x185238: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x185238u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18523c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18523Cu;
    {
        const bool branch_taken_0x18523c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18523Cu;
            // 0x185240: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18523c) {
            ctx->pc = 0x185268u;
            goto label_185268;
        }
    }
    ctx->pc = 0x185244u;
    // 0x185244: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185248: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x185248u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x18524c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18524cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185250: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185254: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x185254u;
    SET_GPR_U32(ctx, 31, 0x18525Cu);
    ctx->pc = 0x185258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185254u;
            // 0x185258: 0x24120190  addiu       $s2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18525Cu; }
        if (ctx->pc != 0x18525Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18525Cu; }
        if (ctx->pc != 0x18525Cu) { return; }
    }
    ctx->pc = 0x18525Cu;
    // 0x18525c: 0x100001bc  b           . + 4 + (0x1BC << 2)
    ctx->pc = 0x18525Cu;
    {
        const bool branch_taken_0x18525c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18525c) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x185264u;
    // 0x185264: 0x0  nop
    ctx->pc = 0x185264u;
    // NOP
label_185268:
    // 0x185268: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x185268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18526c: 0x8c232400  lw          $v1, 0x2400($at)
    ctx->pc = 0x18526cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9216)));
    // 0x185270: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x185270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x185274: 0x8c222390  lw          $v0, 0x2390($at)
    ctx->pc = 0x185274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9104)));
    // 0x185278: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x185278u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18527c: 0x104001b4  beqz        $v0, . + 4 + (0x1B4 << 2)
    ctx->pc = 0x18527Cu;
    {
        const bool branch_taken_0x18527c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18527Cu;
            // 0x185280: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18527c) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x185284u;
    // 0x185284: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185288: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x185288u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x18528c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18528cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185290: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185294: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x185294u;
    SET_GPR_U32(ctx, 31, 0x18529Cu);
    ctx->pc = 0x185298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185294u;
            // 0x185298: 0x241200b4  addiu       $s2, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18529Cu; }
        if (ctx->pc != 0x18529Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18529Cu; }
        if (ctx->pc != 0x18529Cu) { return; }
    }
    ctx->pc = 0x18529Cu;
    // 0x18529c: 0x100001ac  b           . + 4 + (0x1AC << 2)
    ctx->pc = 0x18529Cu;
    {
        const bool branch_taken_0x18529c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18529c) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x1852A4u;
    // 0x1852a4: 0x0  nop
    ctx->pc = 0x1852a4u;
    // NOP
label_1852a8:
    // 0x1852a8: 0xc0619c0  jal         func_186700
    ctx->pc = 0x1852A8u;
    SET_GPR_U32(ctx, 31, 0x1852B0u);
    ctx->pc = 0x1852ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1852A8u;
            // 0x1852ac: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1852B0u; }
        if (ctx->pc != 0x1852B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1852B0u; }
        if (ctx->pc != 0x1852B0u) { return; }
    }
    ctx->pc = 0x1852B0u;
    // 0x1852b0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1852b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1852b4: 0x8c2323b0  lw          $v1, 0x23B0($at)
    ctx->pc = 0x1852b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9136)));
    // 0x1852b8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1852b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1852bc: 0x8c222340  lw          $v0, 0x2340($at)
    ctx->pc = 0x1852bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9024)));
    // 0x1852c0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1852c0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1852c4: 0x104001a2  beqz        $v0, . + 4 + (0x1A2 << 2)
    ctx->pc = 0x1852C4u;
    {
        const bool branch_taken_0x1852c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1852C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1852C4u;
            // 0x1852c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1852c4) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x1852CCu;
    // 0x1852cc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1852ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1852d0: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x1852d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x1852d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1852d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1852d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1852d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1852dc: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x1852DCu;
    SET_GPR_U32(ctx, 31, 0x1852E4u);
    ctx->pc = 0x1852E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1852DCu;
            // 0x1852e0: 0x241200e6  addiu       $s2, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1852E4u; }
        if (ctx->pc != 0x1852E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1852E4u; }
        if (ctx->pc != 0x1852E4u) { return; }
    }
    ctx->pc = 0x1852E4u;
    // 0x1852e4: 0x1000019a  b           . + 4 + (0x19A << 2)
    ctx->pc = 0x1852E4u;
    {
        const bool branch_taken_0x1852e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1852e4) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x1852ECu;
    // 0x1852ec: 0x0  nop
    ctx->pc = 0x1852ecu;
    // NOP
label_1852f0:
    // 0x1852f0: 0xc0619c0  jal         func_186700
    ctx->pc = 0x1852F0u;
    SET_GPR_U32(ctx, 31, 0x1852F8u);
    ctx->pc = 0x1852F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1852F0u;
            // 0x1852f4: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1852F8u; }
        if (ctx->pc != 0x1852F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1852F8u; }
        if (ctx->pc != 0x1852F8u) { return; }
    }
    ctx->pc = 0x1852F8u;
    // 0x1852f8: 0x10000195  b           . + 4 + (0x195 << 2)
    ctx->pc = 0x1852F8u;
    {
        const bool branch_taken_0x1852f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1852f8) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x185300u;
label_185300:
    // 0x185300: 0xc0619c0  jal         func_186700
    ctx->pc = 0x185300u;
    SET_GPR_U32(ctx, 31, 0x185308u);
    ctx->pc = 0x185304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185300u;
            // 0x185304: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185308u; }
        if (ctx->pc != 0x185308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185308u; }
        if (ctx->pc != 0x185308u) { return; }
    }
    ctx->pc = 0x185308u;
    // 0x185308: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x185308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18530c: 0x8c2323b0  lw          $v1, 0x23B0($at)
    ctx->pc = 0x18530cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9136)));
    // 0x185310: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x185310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x185314: 0x8c222340  lw          $v0, 0x2340($at)
    ctx->pc = 0x185314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9024)));
    // 0x185318: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x185318u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18531c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18531Cu;
    {
        const bool branch_taken_0x18531c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18531Cu;
            // 0x185320: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18531c) {
            ctx->pc = 0x185348u;
            goto label_185348;
        }
    }
    ctx->pc = 0x185324u;
    // 0x185324: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185328: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x185328u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x18532c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18532cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185334: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x185334u;
    SET_GPR_U32(ctx, 31, 0x18533Cu);
    ctx->pc = 0x185338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185334u;
            // 0x185338: 0x241200e6  addiu       $s2, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18533Cu; }
        if (ctx->pc != 0x18533Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18533Cu; }
        if (ctx->pc != 0x18533Cu) { return; }
    }
    ctx->pc = 0x18533Cu;
    // 0x18533c: 0x10000184  b           . + 4 + (0x184 << 2)
    ctx->pc = 0x18533Cu;
    {
        const bool branch_taken_0x18533c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18533c) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x185344u;
    // 0x185344: 0x0  nop
    ctx->pc = 0x185344u;
    // NOP
label_185348:
    // 0x185348: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x185348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18534c: 0x8c232400  lw          $v1, 0x2400($at)
    ctx->pc = 0x18534cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9216)));
    // 0x185350: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x185350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x185354: 0x8c222390  lw          $v0, 0x2390($at)
    ctx->pc = 0x185354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9104)));
    // 0x185358: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x185358u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18535c: 0x1040017c  beqz        $v0, . + 4 + (0x17C << 2)
    ctx->pc = 0x18535Cu;
    {
        const bool branch_taken_0x18535c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18535Cu;
            // 0x185360: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18535c) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x185364u;
    // 0x185364: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185368: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x185368u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x18536c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18536cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185374: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x185374u;
    SET_GPR_U32(ctx, 31, 0x18537Cu);
    ctx->pc = 0x185378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185374u;
            // 0x185378: 0x24120118  addiu       $s2, $zero, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18537Cu; }
        if (ctx->pc != 0x18537Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18537Cu; }
        if (ctx->pc != 0x18537Cu) { return; }
    }
    ctx->pc = 0x18537Cu;
    // 0x18537c: 0x10000174  b           . + 4 + (0x174 << 2)
    ctx->pc = 0x18537Cu;
    {
        const bool branch_taken_0x18537c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18537c) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x185384u;
    // 0x185384: 0x0  nop
    ctx->pc = 0x185384u;
    // NOP
label_185388:
    // 0x185388: 0xc0619c0  jal         func_186700
    ctx->pc = 0x185388u;
    SET_GPR_U32(ctx, 31, 0x185390u);
    ctx->pc = 0x18538Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185388u;
            // 0x18538c: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185390u; }
        if (ctx->pc != 0x185390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185390u; }
        if (ctx->pc != 0x185390u) { return; }
    }
    ctx->pc = 0x185390u;
    // 0x185390: 0x1000016f  b           . + 4 + (0x16F << 2)
    ctx->pc = 0x185390u;
    {
        const bool branch_taken_0x185390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185390) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x185398u;
label_185398:
    // 0x185398: 0xc0619c0  jal         func_186700
    ctx->pc = 0x185398u;
    SET_GPR_U32(ctx, 31, 0x1853A0u);
    ctx->pc = 0x18539Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185398u;
            // 0x18539c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1853A0u; }
        if (ctx->pc != 0x1853A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1853A0u; }
        if (ctx->pc != 0x1853A0u) { return; }
    }
    ctx->pc = 0x1853A0u;
    // 0x1853a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1853a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1853a4: 0x441016a  bgez        $v0, . + 4 + (0x16A << 2)
    ctx->pc = 0x1853A4u;
    {
        const bool branch_taken_0x1853a4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1853A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1853A4u;
            // 0x1853a8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1853a4) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x1853ACu;
    // 0x1853ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1853acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1853b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1853b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1853b4: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x1853B4u;
    SET_GPR_U32(ctx, 31, 0x1853BCu);
    ctx->pc = 0x1853B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1853B4u;
            // 0x1853b8: 0x24120082  addiu       $s2, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1853BCu; }
        if (ctx->pc != 0x1853BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1853BCu; }
        if (ctx->pc != 0x1853BCu) { return; }
    }
    ctx->pc = 0x1853BCu;
    // 0x1853bc: 0x10000164  b           . + 4 + (0x164 << 2)
    ctx->pc = 0x1853BCu;
    {
        const bool branch_taken_0x1853bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1853bc) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x1853C4u;
    // 0x1853c4: 0x0  nop
    ctx->pc = 0x1853c4u;
    // NOP
label_1853c8:
    // 0x1853c8: 0xc0619c0  jal         func_186700
    ctx->pc = 0x1853C8u;
    SET_GPR_U32(ctx, 31, 0x1853D0u);
    ctx->pc = 0x1853CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1853C8u;
            // 0x1853cc: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1853D0u; }
        if (ctx->pc != 0x1853D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1853D0u; }
        if (ctx->pc != 0x1853D0u) { return; }
    }
    ctx->pc = 0x1853D0u;
    // 0x1853d0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1853d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1853d4: 0xc061930  jal         func_1864C0
    ctx->pc = 0x1853D4u;
    SET_GPR_U32(ctx, 31, 0x1853DCu);
    ctx->pc = 0x1853D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1853D4u;
            // 0x1853d8: 0x8c24b730  lw          $a0, -0x48D0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1864C0u;
    if (runtime->hasFunction(0x1864C0u)) {
        auto targetFn = runtime->lookupFunction(0x1864C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1853DCu; }
        if (ctx->pc != 0x1853DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        selectbarDraw_0x1864c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1853DCu; }
        if (ctx->pc != 0x1853DCu) { return; }
    }
    ctx->pc = 0x1853DCu;
    // 0x1853dc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1853dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1853e0: 0x8c2323f8  lw          $v1, 0x23F8($at)
    ctx->pc = 0x1853e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9208)));
    // 0x1853e4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1853e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1853e8: 0x8c222388  lw          $v0, 0x2388($at)
    ctx->pc = 0x1853e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9096)));
    // 0x1853ec: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1853ecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1853f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1853F0u;
    {
        const bool branch_taken_0x1853f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1853F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1853F0u;
            // 0x1853f4: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1853f0) {
            ctx->pc = 0x185420u;
            goto label_185420;
        }
    }
    ctx->pc = 0x1853F8u;
    // 0x1853f8: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x1853f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x1853fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1853fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x185400: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185404: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x185404u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x185408: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18540c: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x18540cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x185410: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x185410u;
    {
        const bool branch_taken_0x185410 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x185414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185410u;
            // 0x185414: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185410) {
            ctx->pc = 0x185420u;
            goto label_185420;
        }
    }
    ctx->pc = 0x185418u;
    // 0x185418: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18541c: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x18541cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
label_185420:
    // 0x185420: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x185420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x185424: 0x8c2323f0  lw          $v1, 0x23F0($at)
    ctx->pc = 0x185424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9200)));
    // 0x185428: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x185428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18542c: 0x8c222380  lw          $v0, 0x2380($at)
    ctx->pc = 0x18542cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9088)));
    // 0x185430: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x185430u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x185434: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x185434u;
    {
        const bool branch_taken_0x185434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185434u;
            // 0x185438: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185434) {
            ctx->pc = 0x185468u;
            goto label_185468;
        }
    }
    ctx->pc = 0x18543Cu;
    // 0x18543c: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x18543cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x185440: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x185440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x185444: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185448: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x185448u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x18544c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x18544cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185450: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x185450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x185454: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x185454u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x185458: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x185458u;
    {
        const bool branch_taken_0x185458 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x185458) {
            ctx->pc = 0x185468u;
            goto label_185468;
        }
    }
    ctx->pc = 0x185460u;
    // 0x185460: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185464: 0xac20b730  sw          $zero, -0x48D0($at)
    ctx->pc = 0x185464u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 0));
label_185468:
    // 0x185468: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x185468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18546c: 0x8c232418  lw          $v1, 0x2418($at)
    ctx->pc = 0x18546cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x185470: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x185470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x185474: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x185474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x185478: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x185478u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18547c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18547Cu;
    {
        const bool branch_taken_0x18547c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18547Cu;
            // 0x185480: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18547c) {
            ctx->pc = 0x1854A0u;
            goto label_1854a0;
        }
    }
    ctx->pc = 0x185484u;
    // 0x185484: 0x8c232408  lw          $v1, 0x2408($at)
    ctx->pc = 0x185484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x185488: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x185488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18548c: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x18548cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x185490: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x185490u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x185494: 0x1040012e  beqz        $v0, . + 4 + (0x12E << 2)
    ctx->pc = 0x185494u;
    {
        const bool branch_taken_0x185494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185494) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x18549Cu;
    // 0x18549c: 0x0  nop
    ctx->pc = 0x18549cu;
    // NOP
label_1854a0:
    // 0x1854a0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1854a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1854a4: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x1854a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x1854a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1854A8u;
    {
        const bool branch_taken_0x1854a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1854ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1854A8u;
            // 0x1854ac: 0x241200b5  addiu       $s2, $zero, 0xB5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1854a8) {
            ctx->pc = 0x1854B8u;
            goto label_1854b8;
        }
    }
    ctx->pc = 0x1854B0u;
    // 0x1854b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1854B0u;
    {
        const bool branch_taken_0x1854b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1854b0) {
            ctx->pc = 0x1854C0u;
            goto label_1854c0;
        }
    }
    ctx->pc = 0x1854B8u;
label_1854b8:
    // 0x1854b8: 0x24120096  addiu       $s2, $zero, 0x96
    ctx->pc = 0x1854b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1854bc: 0x0  nop
    ctx->pc = 0x1854bcu;
    // NOP
label_1854c0:
    // 0x1854c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1854c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1854c4: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x1854C4u;
    SET_GPR_U32(ctx, 31, 0x1854CCu);
    ctx->pc = 0x1854C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1854C4u;
            // 0x1854c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1854CCu; }
        if (ctx->pc != 0x1854CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1854CCu; }
        if (ctx->pc != 0x1854CCu) { return; }
    }
    ctx->pc = 0x1854CCu;
    // 0x1854cc: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x1854CCu;
    {
        const bool branch_taken_0x1854cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1854cc) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x1854D4u;
    // 0x1854d4: 0x0  nop
    ctx->pc = 0x1854d4u;
    // NOP
label_1854d8:
    // 0x1854d8: 0xc0619c0  jal         func_186700
    ctx->pc = 0x1854D8u;
    SET_GPR_U32(ctx, 31, 0x1854E0u);
    ctx->pc = 0x1854DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1854D8u;
            // 0x1854dc: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1854E0u; }
        if (ctx->pc != 0x1854E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1854E0u; }
        if (ctx->pc != 0x1854E0u) { return; }
    }
    ctx->pc = 0x1854E0u;
    // 0x1854e0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1854e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1854e4: 0xc061930  jal         func_1864C0
    ctx->pc = 0x1854E4u;
    SET_GPR_U32(ctx, 31, 0x1854ECu);
    ctx->pc = 0x1854E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1854E4u;
            // 0x1854e8: 0x8c24b730  lw          $a0, -0x48D0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1864C0u;
    if (runtime->hasFunction(0x1864C0u)) {
        auto targetFn = runtime->lookupFunction(0x1864C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1854ECu; }
        if (ctx->pc != 0x1854ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        selectbarDraw_0x1864c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1854ECu; }
        if (ctx->pc != 0x1854ECu) { return; }
    }
    ctx->pc = 0x1854ECu;
    // 0x1854ec: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1854ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1854f0: 0x8c2323f8  lw          $v1, 0x23F8($at)
    ctx->pc = 0x1854f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9208)));
    // 0x1854f4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1854f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1854f8: 0x8c222388  lw          $v0, 0x2388($at)
    ctx->pc = 0x1854f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9096)));
    // 0x1854fc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1854fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x185500: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x185500u;
    {
        const bool branch_taken_0x185500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185500u;
            // 0x185504: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185500) {
            ctx->pc = 0x185530u;
            goto label_185530;
        }
    }
    ctx->pc = 0x185508u;
    // 0x185508: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x185508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x18550c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18550cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x185510: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185514: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x185514u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x185518: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18551c: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x18551cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x185520: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x185520u;
    {
        const bool branch_taken_0x185520 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x185524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185520u;
            // 0x185524: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185520) {
            ctx->pc = 0x185530u;
            goto label_185530;
        }
    }
    ctx->pc = 0x185528u;
    // 0x185528: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18552c: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x18552cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
label_185530:
    // 0x185530: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x185530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x185534: 0x8c2323f0  lw          $v1, 0x23F0($at)
    ctx->pc = 0x185534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9200)));
    // 0x185538: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x185538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18553c: 0x8c222380  lw          $v0, 0x2380($at)
    ctx->pc = 0x18553cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9088)));
    // 0x185540: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x185540u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x185544: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x185544u;
    {
        const bool branch_taken_0x185544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185544u;
            // 0x185548: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185544) {
            ctx->pc = 0x185578u;
            goto label_185578;
        }
    }
    ctx->pc = 0x18554Cu;
    // 0x18554c: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x18554cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x185550: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x185550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x185554: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185558: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x185558u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x18555c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x18555cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185560: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x185560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x185564: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x185564u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x185568: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x185568u;
    {
        const bool branch_taken_0x185568 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x185568) {
            ctx->pc = 0x185578u;
            goto label_185578;
        }
    }
    ctx->pc = 0x185570u;
    // 0x185570: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185574: 0xac20b730  sw          $zero, -0x48D0($at)
    ctx->pc = 0x185574u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 0));
label_185578:
    // 0x185578: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x185578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18557c: 0x8c232418  lw          $v1, 0x2418($at)
    ctx->pc = 0x18557cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x185580: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x185580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x185584: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x185584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x185588: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x185588u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18558c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18558Cu;
    {
        const bool branch_taken_0x18558c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18558Cu;
            // 0x185590: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18558c) {
            ctx->pc = 0x1855B0u;
            goto label_1855b0;
        }
    }
    ctx->pc = 0x185594u;
    // 0x185594: 0x8c232408  lw          $v1, 0x2408($at)
    ctx->pc = 0x185594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x185598: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x185598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18559c: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x18559cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x1855a0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1855a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1855a4: 0x104000ea  beqz        $v0, . + 4 + (0xEA << 2)
    ctx->pc = 0x1855A4u;
    {
        const bool branch_taken_0x1855a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1855a4) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x1855ACu;
    // 0x1855ac: 0x0  nop
    ctx->pc = 0x1855acu;
    // NOP
label_1855b0:
    // 0x1855b0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1855b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1855b4: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x1855b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x1855b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1855B8u;
    {
        const bool branch_taken_0x1855b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1855BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1855B8u;
            // 0x1855bc: 0x241200f0  addiu       $s2, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1855b8) {
            ctx->pc = 0x1855C8u;
            goto label_1855c8;
        }
    }
    ctx->pc = 0x1855C0u;
    // 0x1855c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1855C0u;
    {
        const bool branch_taken_0x1855c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1855c0) {
            ctx->pc = 0x1855D0u;
            goto label_1855d0;
        }
    }
    ctx->pc = 0x1855C8u;
label_1855c8:
    // 0x1855c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1855c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1855cc: 0x0  nop
    ctx->pc = 0x1855ccu;
    // NOP
label_1855d0:
    // 0x1855d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1855d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1855d4: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x1855D4u;
    SET_GPR_U32(ctx, 31, 0x1855DCu);
    ctx->pc = 0x1855D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1855D4u;
            // 0x1855d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1855DCu; }
        if (ctx->pc != 0x1855DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1855DCu; }
        if (ctx->pc != 0x1855DCu) { return; }
    }
    ctx->pc = 0x1855DCu;
    // 0x1855dc: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x1855DCu;
    {
        const bool branch_taken_0x1855dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1855dc) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x1855E4u;
    // 0x1855e4: 0x0  nop
    ctx->pc = 0x1855e4u;
    // NOP
label_1855e8:
    // 0x1855e8: 0xc0619c0  jal         func_186700
    ctx->pc = 0x1855E8u;
    SET_GPR_U32(ctx, 31, 0x1855F0u);
    ctx->pc = 0x1855ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1855E8u;
            // 0x1855ec: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1855F0u; }
        if (ctx->pc != 0x1855F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1855F0u; }
        if (ctx->pc != 0x1855F0u) { return; }
    }
    ctx->pc = 0x1855F0u;
    // 0x1855f0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1855f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1855f4: 0xc061930  jal         func_1864C0
    ctx->pc = 0x1855F4u;
    SET_GPR_U32(ctx, 31, 0x1855FCu);
    ctx->pc = 0x1855F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1855F4u;
            // 0x1855f8: 0x8c24b730  lw          $a0, -0x48D0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1864C0u;
    if (runtime->hasFunction(0x1864C0u)) {
        auto targetFn = runtime->lookupFunction(0x1864C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1855FCu; }
        if (ctx->pc != 0x1855FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        selectbarDraw_0x1864c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1855FCu; }
        if (ctx->pc != 0x1855FCu) { return; }
    }
    ctx->pc = 0x1855FCu;
    // 0x1855fc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1855fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x185600: 0x8c2323f8  lw          $v1, 0x23F8($at)
    ctx->pc = 0x185600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9208)));
    // 0x185604: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x185604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x185608: 0x8c222388  lw          $v0, 0x2388($at)
    ctx->pc = 0x185608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9096)));
    // 0x18560c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18560cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x185610: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x185610u;
    {
        const bool branch_taken_0x185610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185610u;
            // 0x185614: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185610) {
            ctx->pc = 0x185640u;
            goto label_185640;
        }
    }
    ctx->pc = 0x185618u;
    // 0x185618: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x185618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x18561c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18561cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x185620: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185624: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x185624u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x185628: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18562c: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x18562cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x185630: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x185630u;
    {
        const bool branch_taken_0x185630 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x185634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185630u;
            // 0x185634: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185630) {
            ctx->pc = 0x185640u;
            goto label_185640;
        }
    }
    ctx->pc = 0x185638u;
    // 0x185638: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18563c: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x18563cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
label_185640:
    // 0x185640: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x185640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x185644: 0x8c2323f0  lw          $v1, 0x23F0($at)
    ctx->pc = 0x185644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9200)));
    // 0x185648: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x185648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18564c: 0x8c222380  lw          $v0, 0x2380($at)
    ctx->pc = 0x18564cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9088)));
    // 0x185650: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x185650u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x185654: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x185654u;
    {
        const bool branch_taken_0x185654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185654u;
            // 0x185658: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185654) {
            ctx->pc = 0x185688u;
            goto label_185688;
        }
    }
    ctx->pc = 0x18565Cu;
    // 0x18565c: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x18565cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x185660: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x185660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x185664: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185668: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x185668u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x18566c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x18566cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185670: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x185670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x185674: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x185674u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x185678: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x185678u;
    {
        const bool branch_taken_0x185678 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x185678) {
            ctx->pc = 0x185688u;
            goto label_185688;
        }
    }
    ctx->pc = 0x185680u;
    // 0x185680: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185684: 0xac20b730  sw          $zero, -0x48D0($at)
    ctx->pc = 0x185684u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 0));
label_185688:
    // 0x185688: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x185688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18568c: 0x8c232418  lw          $v1, 0x2418($at)
    ctx->pc = 0x18568cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x185690: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x185690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x185694: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x185694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x185698: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x185698u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18569c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18569Cu;
    {
        const bool branch_taken_0x18569c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1856A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18569Cu;
            // 0x1856a0: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18569c) {
            ctx->pc = 0x1856C0u;
            goto label_1856c0;
        }
    }
    ctx->pc = 0x1856A4u;
    // 0x1856a4: 0x8c232408  lw          $v1, 0x2408($at)
    ctx->pc = 0x1856a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x1856a8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1856a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1856ac: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x1856acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x1856b0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1856b0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1856b4: 0x104000a6  beqz        $v0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x1856B4u;
    {
        const bool branch_taken_0x1856b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1856b4) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x1856BCu;
    // 0x1856bc: 0x0  nop
    ctx->pc = 0x1856bcu;
    // NOP
label_1856c0:
    // 0x1856c0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1856c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1856c4: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x1856c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x1856c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1856C8u;
    {
        const bool branch_taken_0x1856c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1856CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1856C8u;
            // 0x1856cc: 0x241200f0  addiu       $s2, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1856c8) {
            ctx->pc = 0x1856D8u;
            goto label_1856d8;
        }
    }
    ctx->pc = 0x1856D0u;
    // 0x1856d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1856D0u;
    {
        const bool branch_taken_0x1856d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1856d0) {
            ctx->pc = 0x1856E0u;
            goto label_1856e0;
        }
    }
    ctx->pc = 0x1856D8u;
label_1856d8:
    // 0x1856d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1856d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1856dc: 0x0  nop
    ctx->pc = 0x1856dcu;
    // NOP
label_1856e0:
    // 0x1856e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1856e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1856e4: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x1856E4u;
    SET_GPR_U32(ctx, 31, 0x1856ECu);
    ctx->pc = 0x1856E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1856E4u;
            // 0x1856e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1856ECu; }
        if (ctx->pc != 0x1856ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1856ECu; }
        if (ctx->pc != 0x1856ECu) { return; }
    }
    ctx->pc = 0x1856ECu;
    // 0x1856ec: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x1856ECu;
    {
        const bool branch_taken_0x1856ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1856ec) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x1856F4u;
    // 0x1856f4: 0x0  nop
    ctx->pc = 0x1856f4u;
    // NOP
label_1856f8:
    // 0x1856f8: 0xc065cfc  jal         func_1973F0
    ctx->pc = 0x1856F8u;
    SET_GPR_U32(ctx, 31, 0x185700u);
    ctx->pc = 0x1856FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1856F8u;
            // 0x1856fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1973F0u;
    if (runtime->hasFunction(0x1973F0u)) {
        auto targetFn = runtime->lookupFunction(0x1973F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185700u; }
        if (ctx->pc != 0x185700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAutoSave_0x1973f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185700u; }
        if (ctx->pc != 0x185700u) { return; }
    }
    ctx->pc = 0x185700u;
    // 0x185700: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x185700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185708: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x185708u;
    SET_GPR_U32(ctx, 31, 0x185710u);
    ctx->pc = 0x18570Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185708u;
            // 0x18570c: 0x24120082  addiu       $s2, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185710u; }
        if (ctx->pc != 0x185710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185710u; }
        if (ctx->pc != 0x185710u) { return; }
    }
    ctx->pc = 0x185710u;
    // 0x185710: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x185710u;
    {
        const bool branch_taken_0x185710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185710) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x185718u;
label_185718:
    // 0x185718: 0xc0619c0  jal         func_186700
    ctx->pc = 0x185718u;
    SET_GPR_U32(ctx, 31, 0x185720u);
    ctx->pc = 0x18571Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185718u;
            // 0x18571c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185720u; }
        if (ctx->pc != 0x185720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185720u; }
        if (ctx->pc != 0x185720u) { return; }
    }
    ctx->pc = 0x185720u;
    // 0x185720: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x185720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x185724: 0x8c2323b0  lw          $v1, 0x23B0($at)
    ctx->pc = 0x185724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9136)));
    // 0x185728: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x185728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18572c: 0x8c222340  lw          $v0, 0x2340($at)
    ctx->pc = 0x18572cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9024)));
    // 0x185730: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x185730u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x185734: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x185734u;
    {
        const bool branch_taken_0x185734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185734u;
            // 0x185738: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185734) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x18573Cu;
    // 0x18573c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x18573cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185740: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x185740u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x185744: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x185744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185748: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18574c: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x18574Cu;
    SET_GPR_U32(ctx, 31, 0x185754u);
    ctx->pc = 0x185750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18574Cu;
            // 0x185750: 0x241200e6  addiu       $s2, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185754u; }
        if (ctx->pc != 0x185754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185754u; }
        if (ctx->pc != 0x185754u) { return; }
    }
    ctx->pc = 0x185754u;
    // 0x185754: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x185754u;
    {
        const bool branch_taken_0x185754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185754) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x18575Cu;
    // 0x18575c: 0x0  nop
    ctx->pc = 0x18575cu;
    // NOP
label_185760:
    // 0x185760: 0xc0619c0  jal         func_186700
    ctx->pc = 0x185760u;
    SET_GPR_U32(ctx, 31, 0x185768u);
    ctx->pc = 0x185764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185760u;
            // 0x185764: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185768u; }
        if (ctx->pc != 0x185768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185768u; }
        if (ctx->pc != 0x185768u) { return; }
    }
    ctx->pc = 0x185768u;
    // 0x185768: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x185768u;
    {
        const bool branch_taken_0x185768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185768) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x185770u;
label_185770:
    // 0x185770: 0xc0619c0  jal         func_186700
    ctx->pc = 0x185770u;
    SET_GPR_U32(ctx, 31, 0x185778u);
    ctx->pc = 0x185774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185770u;
            // 0x185774: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185778u; }
        if (ctx->pc != 0x185778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185778u; }
        if (ctx->pc != 0x185778u) { return; }
    }
    ctx->pc = 0x185778u;
    // 0x185778: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x185778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18577c: 0x4410074  bgez        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x18577Cu;
    {
        const bool branch_taken_0x18577c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x185780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18577Cu;
            // 0x185780: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18577c) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x185784u;
    // 0x185784: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x185784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18578c: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x18578Cu;
    SET_GPR_U32(ctx, 31, 0x185794u);
    ctx->pc = 0x185790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18578Cu;
            // 0x185790: 0x24120082  addiu       $s2, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185794u; }
        if (ctx->pc != 0x185794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185794u; }
        if (ctx->pc != 0x185794u) { return; }
    }
    ctx->pc = 0x185794u;
    // 0x185794: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x185794u;
    {
        const bool branch_taken_0x185794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185794) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x18579Cu;
    // 0x18579c: 0x0  nop
    ctx->pc = 0x18579cu;
    // NOP
label_1857a0:
    // 0x1857a0: 0xc0619c0  jal         func_186700
    ctx->pc = 0x1857A0u;
    SET_GPR_U32(ctx, 31, 0x1857A8u);
    ctx->pc = 0x1857A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1857A0u;
            // 0x1857a4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1857A8u; }
        if (ctx->pc != 0x1857A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1857A8u; }
        if (ctx->pc != 0x1857A8u) { return; }
    }
    ctx->pc = 0x1857A8u;
    // 0x1857a8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1857a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1857ac: 0x8c232418  lw          $v1, 0x2418($at)
    ctx->pc = 0x1857acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x1857b0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1857b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1857b4: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x1857b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x1857b8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1857b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1857bc: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x1857BCu;
    {
        const bool branch_taken_0x1857bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1857C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1857BCu;
            // 0x1857c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1857bc) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x1857C4u;
    // 0x1857c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1857c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1857c8: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x1857C8u;
    SET_GPR_U32(ctx, 31, 0x1857D0u);
    ctx->pc = 0x1857CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1857C8u;
            // 0x1857cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1857D0u; }
        if (ctx->pc != 0x1857D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1857D0u; }
        if (ctx->pc != 0x1857D0u) { return; }
    }
    ctx->pc = 0x1857D0u;
    // 0x1857d0: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x1857D0u;
    {
        const bool branch_taken_0x1857d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1857d0) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x1857D8u;
label_1857d8:
    // 0x1857d8: 0xc0619c0  jal         func_186700
    ctx->pc = 0x1857D8u;
    SET_GPR_U32(ctx, 31, 0x1857E0u);
    ctx->pc = 0x1857DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1857D8u;
            // 0x1857dc: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1857E0u; }
        if (ctx->pc != 0x1857E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1857E0u; }
        if (ctx->pc != 0x1857E0u) { return; }
    }
    ctx->pc = 0x1857E0u;
    // 0x1857e0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1857e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1857e4: 0x8c232418  lw          $v1, 0x2418($at)
    ctx->pc = 0x1857e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x1857e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1857e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1857ec: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x1857ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x1857f0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1857f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1857f4: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1857F4u;
    {
        const bool branch_taken_0x1857f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1857F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1857F4u;
            // 0x1857f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1857f4) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x1857FCu;
    // 0x1857fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1857fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185800: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x185800u;
    SET_GPR_U32(ctx, 31, 0x185808u);
    ctx->pc = 0x185804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185800u;
            // 0x185804: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185808u; }
        if (ctx->pc != 0x185808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185808u; }
        if (ctx->pc != 0x185808u) { return; }
    }
    ctx->pc = 0x185808u;
    // 0x185808: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x185808u;
    {
        const bool branch_taken_0x185808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185808) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x185810u;
label_185810:
    // 0x185810: 0xc0619c0  jal         func_186700
    ctx->pc = 0x185810u;
    SET_GPR_U32(ctx, 31, 0x185818u);
    ctx->pc = 0x185814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185810u;
            // 0x185814: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185818u; }
        if (ctx->pc != 0x185818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185818u; }
        if (ctx->pc != 0x185818u) { return; }
    }
    ctx->pc = 0x185818u;
    // 0x185818: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x185818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18581c: 0x8c232418  lw          $v1, 0x2418($at)
    ctx->pc = 0x18581cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x185820: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x185820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x185824: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x185824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x185828: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x185828u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18582c: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x18582Cu;
    {
        const bool branch_taken_0x18582c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18582Cu;
            // 0x185830: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18582c) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x185834u;
    // 0x185834: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185838: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x185838u;
    SET_GPR_U32(ctx, 31, 0x185840u);
    ctx->pc = 0x18583Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185838u;
            // 0x18583c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185840u; }
        if (ctx->pc != 0x185840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185840u; }
        if (ctx->pc != 0x185840u) { return; }
    }
    ctx->pc = 0x185840u;
    // 0x185840: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x185840u;
    {
        const bool branch_taken_0x185840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185840) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x185848u;
label_185848:
    // 0x185848: 0xc0619c0  jal         func_186700
    ctx->pc = 0x185848u;
    SET_GPR_U32(ctx, 31, 0x185850u);
    ctx->pc = 0x18584Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185848u;
            // 0x18584c: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185850u; }
        if (ctx->pc != 0x185850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185850u; }
        if (ctx->pc != 0x185850u) { return; }
    }
    ctx->pc = 0x185850u;
    // 0x185850: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185854: 0xc061930  jal         func_1864C0
    ctx->pc = 0x185854u;
    SET_GPR_U32(ctx, 31, 0x18585Cu);
    ctx->pc = 0x185858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185854u;
            // 0x185858: 0x8c24b730  lw          $a0, -0x48D0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1864C0u;
    if (runtime->hasFunction(0x1864C0u)) {
        auto targetFn = runtime->lookupFunction(0x1864C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18585Cu; }
        if (ctx->pc != 0x18585Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        selectbarDraw_0x1864c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18585Cu; }
        if (ctx->pc != 0x18585Cu) { return; }
    }
    ctx->pc = 0x18585Cu;
    // 0x18585c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18585cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x185860: 0x8c2323f8  lw          $v1, 0x23F8($at)
    ctx->pc = 0x185860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9208)));
    // 0x185864: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x185864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x185868: 0x8c222388  lw          $v0, 0x2388($at)
    ctx->pc = 0x185868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9096)));
    // 0x18586c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18586cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x185870: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x185870u;
    {
        const bool branch_taken_0x185870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185870u;
            // 0x185874: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185870) {
            ctx->pc = 0x1858A0u;
            goto label_1858a0;
        }
    }
    ctx->pc = 0x185878u;
    // 0x185878: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x185878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x18587c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18587cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x185880: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185884: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x185884u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x185888: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18588c: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x18588cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x185890: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x185890u;
    {
        const bool branch_taken_0x185890 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x185894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185890u;
            // 0x185894: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185890) {
            ctx->pc = 0x1858A0u;
            goto label_1858a0;
        }
    }
    ctx->pc = 0x185898u;
    // 0x185898: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18589c: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x18589cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
label_1858a0:
    // 0x1858a0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1858a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1858a4: 0x8c2323f0  lw          $v1, 0x23F0($at)
    ctx->pc = 0x1858a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9200)));
    // 0x1858a8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1858a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1858ac: 0x8c222380  lw          $v0, 0x2380($at)
    ctx->pc = 0x1858acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9088)));
    // 0x1858b0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1858b0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1858b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1858B4u;
    {
        const bool branch_taken_0x1858b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1858B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1858B4u;
            // 0x1858b8: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1858b4) {
            ctx->pc = 0x1858E8u;
            goto label_1858e8;
        }
    }
    ctx->pc = 0x1858BCu;
    // 0x1858bc: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x1858bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x1858c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1858c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1858c4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1858c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1858c8: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x1858c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x1858cc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1858ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1858d0: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x1858d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x1858d4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1858d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1858d8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1858D8u;
    {
        const bool branch_taken_0x1858d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1858d8) {
            ctx->pc = 0x1858E8u;
            goto label_1858e8;
        }
    }
    ctx->pc = 0x1858E0u;
    // 0x1858e0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1858e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1858e4: 0xac20b730  sw          $zero, -0x48D0($at)
    ctx->pc = 0x1858e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 0));
label_1858e8:
    // 0x1858e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1858e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1858ec: 0x8c232418  lw          $v1, 0x2418($at)
    ctx->pc = 0x1858ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x1858f0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1858f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1858f4: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x1858f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x1858f8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1858f8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1858fc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1858FCu;
    {
        const bool branch_taken_0x1858fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1858FCu;
            // 0x185900: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1858fc) {
            ctx->pc = 0x185920u;
            goto label_185920;
        }
    }
    ctx->pc = 0x185904u;
    // 0x185904: 0x8c232408  lw          $v1, 0x2408($at)
    ctx->pc = 0x185904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x185908: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x185908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18590c: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x18590cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x185910: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x185910u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x185914: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x185914u;
    {
        const bool branch_taken_0x185914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185914) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x18591Cu;
    // 0x18591c: 0x0  nop
    ctx->pc = 0x18591cu;
    // NOP
label_185920:
    // 0x185920: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185924: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x185924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x185928: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x185928u;
    {
        const bool branch_taken_0x185928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18592Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185928u;
            // 0x18592c: 0x2412003c  addiu       $s2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185928) {
            ctx->pc = 0x185938u;
            goto label_185938;
        }
    }
    ctx->pc = 0x185930u;
    // 0x185930: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x185930u;
    {
        const bool branch_taken_0x185930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185930) {
            ctx->pc = 0x185940u;
            goto label_185940;
        }
    }
    ctx->pc = 0x185938u;
label_185938:
    // 0x185938: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x185938u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18593c: 0x0  nop
    ctx->pc = 0x18593cu;
    // NOP
label_185940:
    // 0x185940: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x185940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185944: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x185944u;
    SET_GPR_U32(ctx, 31, 0x18594Cu);
    ctx->pc = 0x185948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185944u;
            // 0x185948: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18594Cu; }
        if (ctx->pc != 0x18594Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18594Cu; }
        if (ctx->pc != 0x18594Cu) { return; }
    }
    ctx->pc = 0x18594Cu;
    // 0x18594c: 0x0  nop
    ctx->pc = 0x18594cu;
    // NOP
label_185950:
    // 0x185950: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x185950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x185954: 0xc0478ec  jal         func_11E3B0
    ctx->pc = 0x185954u;
    SET_GPR_U32(ctx, 31, 0x18595Cu);
    ctx->pc = 0x185958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185954u;
            // 0x185958: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3B0u;
    if (runtime->hasFunction(0x11E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x11E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18595Cu; }
        if (ctx->pc != 0x18595Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2CheckAsync_0x11e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18595Cu; }
        if (ctx->pc != 0x18595Cu) { return; }
    }
    ctx->pc = 0x18595Cu;
    // 0x18595c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18595cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185960: 0x104501af  beq         $v0, $a1, . + 4 + (0x1AF << 2)
    ctx->pc = 0x185960u;
    {
        const bool branch_taken_0x185960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x185960) {
            ctx->pc = 0x186020u;
            goto label_186020;
        }
    }
    ctx->pc = 0x185968u;
    // 0x185968: 0x104002cb  beqz        $v0, . + 4 + (0x2CB << 2)
    ctx->pc = 0x185968u;
    {
        const bool branch_taken_0x185968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18596Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185968u;
            // 0x18596c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185968) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x185970u;
    // 0x185970: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x185970u;
    {
        const bool branch_taken_0x185970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x185970) {
            ctx->pc = 0x185980u;
            goto label_185980;
        }
    }
    ctx->pc = 0x185978u;
    // 0x185978: 0x100002c7  b           . + 4 + (0x2C7 << 2)
    ctx->pc = 0x185978u;
    {
        const bool branch_taken_0x185978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185978) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x185980u;
label_185980:
    // 0x185980: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x185980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x185984: 0x1243019c  beq         $s2, $v1, . + 4 + (0x19C << 2)
    ctx->pc = 0x185984u;
    {
        const bool branch_taken_0x185984 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x185988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185984u;
            // 0x185988: 0x24030078  addiu       $v1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185984) {
            ctx->pc = 0x185FF8u;
            goto label_185ff8;
        }
    }
    ctx->pc = 0x18598Cu;
    // 0x18598c: 0x1243018e  beq         $s2, $v1, . + 4 + (0x18E << 2)
    ctx->pc = 0x18598Cu;
    {
        const bool branch_taken_0x18598c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x18598c) {
            ctx->pc = 0x185FC8u;
            goto label_185fc8;
        }
    }
    ctx->pc = 0x185994u;
    // 0x185994: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x185994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x185998: 0x1243017f  beq         $s2, $v1, . + 4 + (0x17F << 2)
    ctx->pc = 0x185998u;
    {
        const bool branch_taken_0x185998 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x18599Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185998u;
            // 0x18599c: 0x24030082  addiu       $v1, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185998) {
            ctx->pc = 0x185F98u;
            goto label_185f98;
        }
    }
    ctx->pc = 0x1859A0u;
    // 0x1859a0: 0x12430175  beq         $s2, $v1, . + 4 + (0x175 << 2)
    ctx->pc = 0x1859A0u;
    {
        const bool branch_taken_0x1859a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x1859a0) {
            ctx->pc = 0x185F78u;
            goto label_185f78;
        }
    }
    ctx->pc = 0x1859A8u;
    // 0x1859a8: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1859a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1859ac: 0x12430162  beq         $s2, $v1, . + 4 + (0x162 << 2)
    ctx->pc = 0x1859ACu;
    {
        const bool branch_taken_0x1859ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x1859B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1859ACu;
            // 0x1859b0: 0x240300ca  addiu       $v1, $zero, 0xCA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1859ac) {
            ctx->pc = 0x185F38u;
            goto label_185f38;
        }
    }
    ctx->pc = 0x1859B4u;
    // 0x1859b4: 0x12430150  beq         $s2, $v1, . + 4 + (0x150 << 2)
    ctx->pc = 0x1859B4u;
    {
        const bool branch_taken_0x1859b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x1859b4) {
            ctx->pc = 0x185EF8u;
            goto label_185ef8;
        }
    }
    ctx->pc = 0x1859BCu;
    // 0x1859bc: 0x240300c9  addiu       $v1, $zero, 0xC9
    ctx->pc = 0x1859bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x1859c0: 0x1243013d  beq         $s2, $v1, . + 4 + (0x13D << 2)
    ctx->pc = 0x1859C0u;
    {
        const bool branch_taken_0x1859c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x1859C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1859C0u;
            // 0x1859c4: 0x240300c8  addiu       $v1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1859c0) {
            ctx->pc = 0x185EB8u;
            goto label_185eb8;
        }
    }
    ctx->pc = 0x1859C8u;
    // 0x1859c8: 0x12430125  beq         $s2, $v1, . + 4 + (0x125 << 2)
    ctx->pc = 0x1859C8u;
    {
        const bool branch_taken_0x1859c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x1859c8) {
            ctx->pc = 0x185E60u;
            goto label_185e60;
        }
    }
    ctx->pc = 0x1859D0u;
    // 0x1859d0: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x1859d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1859d4: 0x12430116  beq         $s2, $v1, . + 4 + (0x116 << 2)
    ctx->pc = 0x1859D4u;
    {
        const bool branch_taken_0x1859d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x1859D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1859D4u;
            // 0x1859d8: 0x240300bf  addiu       $v1, $zero, 0xBF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1859d4) {
            ctx->pc = 0x185E30u;
            goto label_185e30;
        }
    }
    ctx->pc = 0x1859DCu;
    // 0x1859dc: 0x12430108  beq         $s2, $v1, . + 4 + (0x108 << 2)
    ctx->pc = 0x1859DCu;
    {
        const bool branch_taken_0x1859dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x1859dc) {
            ctx->pc = 0x185E00u;
            goto label_185e00;
        }
    }
    ctx->pc = 0x1859E4u;
    // 0x1859e4: 0x240300be  addiu       $v1, $zero, 0xBE
    ctx->pc = 0x1859e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x1859e8: 0x124300f1  beq         $s2, $v1, . + 4 + (0xF1 << 2)
    ctx->pc = 0x1859E8u;
    {
        const bool branch_taken_0x1859e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x1859ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1859E8u;
            // 0x1859ec: 0x240300b5  addiu       $v1, $zero, 0xB5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1859e8) {
            ctx->pc = 0x185DB0u;
            goto label_185db0;
        }
    }
    ctx->pc = 0x1859F0u;
    // 0x1859f0: 0x124300db  beq         $s2, $v1, . + 4 + (0xDB << 2)
    ctx->pc = 0x1859F0u;
    {
        const bool branch_taken_0x1859f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x1859f0) {
            ctx->pc = 0x185D60u;
            goto label_185d60;
        }
    }
    ctx->pc = 0x1859F8u;
    // 0x1859f8: 0x240300aa  addiu       $v1, $zero, 0xAA
    ctx->pc = 0x1859f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x1859fc: 0x124300be  beq         $s2, $v1, . + 4 + (0xBE << 2)
    ctx->pc = 0x1859FCu;
    {
        const bool branch_taken_0x1859fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x185A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1859FCu;
            // 0x185a00: 0x240300a0  addiu       $v1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1859fc) {
            ctx->pc = 0x185CF8u;
            goto label_185cf8;
        }
    }
    ctx->pc = 0x185A04u;
    // 0x185a04: 0x124300a8  beq         $s2, $v1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x185A04u;
    {
        const bool branch_taken_0x185a04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x185a04) {
            ctx->pc = 0x185CA8u;
            goto label_185ca8;
        }
    }
    ctx->pc = 0x185A0Cu;
    // 0x185a0c: 0x24030136  addiu       $v1, $zero, 0x136
    ctx->pc = 0x185a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
    // 0x185a10: 0x12430099  beq         $s2, $v1, . + 4 + (0x99 << 2)
    ctx->pc = 0x185A10u;
    {
        const bool branch_taken_0x185a10 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x185A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185A10u;
            // 0x185a14: 0x2403012c  addiu       $v1, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a10) {
            ctx->pc = 0x185C78u;
            goto label_185c78;
        }
    }
    ctx->pc = 0x185A18u;
    // 0x185a18: 0x1243008b  beq         $s2, $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x185A18u;
    {
        const bool branch_taken_0x185a18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x185a18) {
            ctx->pc = 0x185C48u;
            goto label_185c48;
        }
    }
    ctx->pc = 0x185A20u;
    // 0x185a20: 0x24030122  addiu       $v1, $zero, 0x122
    ctx->pc = 0x185a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x185a24: 0x1243007c  beq         $s2, $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x185A24u;
    {
        const bool branch_taken_0x185a24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x185a24) {
            ctx->pc = 0x185C18u;
            goto label_185c18;
        }
    }
    ctx->pc = 0x185A2Cu;
    // 0x185a2c: 0x1245006e  beq         $s2, $a1, . + 4 + (0x6E << 2)
    ctx->pc = 0x185A2Cu;
    {
        const bool branch_taken_0x185a2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        ctx->pc = 0x185A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185A2Cu;
            // 0x185a30: 0x240300fa  addiu       $v1, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a2c) {
            ctx->pc = 0x185BE8u;
            goto label_185be8;
        }
    }
    ctx->pc = 0x185A34u;
    // 0x185a34: 0x12430060  beq         $s2, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x185A34u;
    {
        const bool branch_taken_0x185a34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x185a34) {
            ctx->pc = 0x185BB8u;
            goto label_185bb8;
        }
    }
    ctx->pc = 0x185A3Cu;
    // 0x185a3c: 0x240300e6  addiu       $v1, $zero, 0xE6
    ctx->pc = 0x185a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x185a40: 0x12430051  beq         $s2, $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x185A40u;
    {
        const bool branch_taken_0x185a40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x185A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185A40u;
            // 0x185a44: 0x240300b4  addiu       $v1, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a40) {
            ctx->pc = 0x185B88u;
            goto label_185b88;
        }
    }
    ctx->pc = 0x185A48u;
    // 0x185a48: 0x12430043  beq         $s2, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x185A48u;
    {
        const bool branch_taken_0x185a48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x185a48) {
            ctx->pc = 0x185B58u;
            goto label_185b58;
        }
    }
    ctx->pc = 0x185A50u;
    // 0x185a50: 0x240300d2  addiu       $v1, $zero, 0xD2
    ctx->pc = 0x185a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x185a54: 0x12430034  beq         $s2, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x185A54u;
    {
        const bool branch_taken_0x185a54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x185A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185A54u;
            // 0x185a58: 0x24030096  addiu       $v1, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a54) {
            ctx->pc = 0x185B28u;
            goto label_185b28;
        }
    }
    ctx->pc = 0x185A5Cu;
    // 0x185a5c: 0x12430026  beq         $s2, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x185A5Cu;
    {
        const bool branch_taken_0x185a5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x185a5c) {
            ctx->pc = 0x185AF8u;
            goto label_185af8;
        }
    }
    ctx->pc = 0x185A64u;
    // 0x185a64: 0x2403008c  addiu       $v1, $zero, 0x8C
    ctx->pc = 0x185a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x185a68: 0x12430017  beq         $s2, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x185A68u;
    {
        const bool branch_taken_0x185a68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x185a68) {
            ctx->pc = 0x185AC8u;
            goto label_185ac8;
        }
    }
    ctx->pc = 0x185A70u;
    // 0x185a70: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x185A70u;
    {
        const bool branch_taken_0x185a70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x185a70) {
            ctx->pc = 0x185A80u;
            goto label_185a80;
        }
    }
    ctx->pc = 0x185A78u;
    // 0x185a78: 0x10000287  b           . + 4 + (0x287 << 2)
    ctx->pc = 0x185A78u;
    {
        const bool branch_taken_0x185a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185a78) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x185A80u;
label_185a80:
    // 0x185a80: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185a84: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x185a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x185a88: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185a88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185a8c: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x185a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x185a90: 0x24a52128  addiu       $a1, $a1, 0x2128
    ctx->pc = 0x185a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8488));
    // 0x185a94: 0xc047990  jal         func_11E640
    ctx->pc = 0x185A94u;
    SET_GPR_U32(ctx, 31, 0x185A9Cu);
    ctx->pc = 0x185A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185A94u;
            // 0x185a98: 0x24c6bd00  addiu       $a2, $a2, -0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E640u;
    if (runtime->hasFunction(0x11E640u)) {
        auto targetFn = runtime->lookupFunction(0x11E640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185A9Cu; }
        if (ctx->pc != 0x185A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Chdir_0x11e640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185A9Cu; }
        if (ctx->pc != 0x185A9Cu) { return; }
    }
    ctx->pc = 0x185A9Cu;
    // 0x185a9c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185aa0: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x185aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x185aa4: 0xc04755e  jal         func_11D578
    ctx->pc = 0x185AA4u;
    SET_GPR_U32(ctx, 31, 0x185AACu);
    ctx->pc = 0x185AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185AA4u;
            // 0x185aa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185AACu; }
        if (ctx->pc != 0x185AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185AACu; }
        if (ctx->pc != 0x185AACu) { return; }
    }
    ctx->pc = 0x185AACu;
    // 0x185aac: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x185aacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x185ab0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185ab4: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x185ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x185ab8: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x185AB8u;
    SET_GPR_U32(ctx, 31, 0x185AC0u);
    ctx->pc = 0x185ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185AB8u;
            // 0x185abc: 0x24a52130  addiu       $a1, $a1, 0x2130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185AC0u; }
        if (ctx->pc != 0x185AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185AC0u; }
        if (ctx->pc != 0x185AC0u) { return; }
    }
    ctx->pc = 0x185AC0u;
    // 0x185ac0: 0x10000275  b           . + 4 + (0x275 << 2)
    ctx->pc = 0x185AC0u;
    {
        const bool branch_taken_0x185ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185ac0) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x185AC8u;
label_185ac8:
    // 0x185ac8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185acc: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x185accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x185ad0: 0xc04755e  jal         func_11D578
    ctx->pc = 0x185AD0u;
    SET_GPR_U32(ctx, 31, 0x185AD8u);
    ctx->pc = 0x185AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185AD0u;
            // 0x185ad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185AD8u; }
        if (ctx->pc != 0x185AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185AD8u; }
        if (ctx->pc != 0x185AD8u) { return; }
    }
    ctx->pc = 0x185AD8u;
    // 0x185ad8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x185ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x185adc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185adcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185ae0: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x185ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x185ae4: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x185AE4u;
    SET_GPR_U32(ctx, 31, 0x185AECu);
    ctx->pc = 0x185AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185AE4u;
            // 0x185ae8: 0x24a52140  addiu       $a1, $a1, 0x2140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185AECu; }
        if (ctx->pc != 0x185AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185AECu; }
        if (ctx->pc != 0x185AECu) { return; }
    }
    ctx->pc = 0x185AECu;
    // 0x185aec: 0x1000026a  b           . + 4 + (0x26A << 2)
    ctx->pc = 0x185AECu;
    {
        const bool branch_taken_0x185aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185aec) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x185AF4u;
    // 0x185af4: 0x0  nop
    ctx->pc = 0x185af4u;
    // NOP
label_185af8:
    // 0x185af8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185afc: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x185afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x185b00: 0xc04755e  jal         func_11D578
    ctx->pc = 0x185B00u;
    SET_GPR_U32(ctx, 31, 0x185B08u);
    ctx->pc = 0x185B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185B00u;
            // 0x185b04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185B08u; }
        if (ctx->pc != 0x185B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185B08u; }
        if (ctx->pc != 0x185B08u) { return; }
    }
    ctx->pc = 0x185B08u;
    // 0x185b08: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x185b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x185b0c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185b10: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x185b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x185b14: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x185B14u;
    SET_GPR_U32(ctx, 31, 0x185B1Cu);
    ctx->pc = 0x185B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185B14u;
            // 0x185b18: 0x24a52160  addiu       $a1, $a1, 0x2160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185B1Cu; }
        if (ctx->pc != 0x185B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185B1Cu; }
        if (ctx->pc != 0x185B1Cu) { return; }
    }
    ctx->pc = 0x185B1Cu;
    // 0x185b1c: 0x1000025e  b           . + 4 + (0x25E << 2)
    ctx->pc = 0x185B1Cu;
    {
        const bool branch_taken_0x185b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185b1c) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x185B24u;
    // 0x185b24: 0x0  nop
    ctx->pc = 0x185b24u;
    // NOP
label_185b28:
    // 0x185b28: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185b2c: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x185b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x185b30: 0xc04755e  jal         func_11D578
    ctx->pc = 0x185B30u;
    SET_GPR_U32(ctx, 31, 0x185B38u);
    ctx->pc = 0x185B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185B30u;
            // 0x185b34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185B38u; }
        if (ctx->pc != 0x185B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185B38u; }
        if (ctx->pc != 0x185B38u) { return; }
    }
    ctx->pc = 0x185B38u;
    // 0x185b38: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x185b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x185b3c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185b40: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x185b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x185b44: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x185B44u;
    SET_GPR_U32(ctx, 31, 0x185B4Cu);
    ctx->pc = 0x185B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185B44u;
            // 0x185b48: 0x24a52180  addiu       $a1, $a1, 0x2180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185B4Cu; }
        if (ctx->pc != 0x185B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185B4Cu; }
        if (ctx->pc != 0x185B4Cu) { return; }
    }
    ctx->pc = 0x185B4Cu;
    // 0x185b4c: 0x10000252  b           . + 4 + (0x252 << 2)
    ctx->pc = 0x185B4Cu;
    {
        const bool branch_taken_0x185b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185b4c) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x185B54u;
    // 0x185b54: 0x0  nop
    ctx->pc = 0x185b54u;
    // NOP
label_185b58:
    // 0x185b58: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185b5c: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x185b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x185b60: 0xc04755e  jal         func_11D578
    ctx->pc = 0x185B60u;
    SET_GPR_U32(ctx, 31, 0x185B68u);
    ctx->pc = 0x185B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185B60u;
            // 0x185b64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185B68u; }
        if (ctx->pc != 0x185B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185B68u; }
        if (ctx->pc != 0x185B68u) { return; }
    }
    ctx->pc = 0x185B68u;
    // 0x185b68: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x185b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x185b6c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185b70: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x185b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x185b74: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x185B74u;
    SET_GPR_U32(ctx, 31, 0x185B7Cu);
    ctx->pc = 0x185B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185B74u;
            // 0x185b78: 0x24a52180  addiu       $a1, $a1, 0x2180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185B7Cu; }
        if (ctx->pc != 0x185B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185B7Cu; }
        if (ctx->pc != 0x185B7Cu) { return; }
    }
    ctx->pc = 0x185B7Cu;
    // 0x185b7c: 0x10000246  b           . + 4 + (0x246 << 2)
    ctx->pc = 0x185B7Cu;
    {
        const bool branch_taken_0x185b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185b7c) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x185B84u;
    // 0x185b84: 0x0  nop
    ctx->pc = 0x185b84u;
    // NOP
label_185b88:
    // 0x185b88: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185b8c: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x185b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x185b90: 0xc04755e  jal         func_11D578
    ctx->pc = 0x185B90u;
    SET_GPR_U32(ctx, 31, 0x185B98u);
    ctx->pc = 0x185B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185B90u;
            // 0x185b94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185B98u; }
        if (ctx->pc != 0x185B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185B98u; }
        if (ctx->pc != 0x185B98u) { return; }
    }
    ctx->pc = 0x185B98u;
    // 0x185b98: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x185b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x185b9c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185ba0: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x185ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x185ba4: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x185BA4u;
    SET_GPR_U32(ctx, 31, 0x185BACu);
    ctx->pc = 0x185BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185BA4u;
            // 0x185ba8: 0x24a52180  addiu       $a1, $a1, 0x2180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185BACu; }
        if (ctx->pc != 0x185BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185BACu; }
        if (ctx->pc != 0x185BACu) { return; }
    }
    ctx->pc = 0x185BACu;
    // 0x185bac: 0x1000023a  b           . + 4 + (0x23A << 2)
    ctx->pc = 0x185BACu;
    {
        const bool branch_taken_0x185bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185bac) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x185BB4u;
    // 0x185bb4: 0x0  nop
    ctx->pc = 0x185bb4u;
    // NOP
label_185bb8:
    // 0x185bb8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185bbc: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x185bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x185bc0: 0xc04755e  jal         func_11D578
    ctx->pc = 0x185BC0u;
    SET_GPR_U32(ctx, 31, 0x185BC8u);
    ctx->pc = 0x185BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185BC0u;
            // 0x185bc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185BC8u; }
        if (ctx->pc != 0x185BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185BC8u; }
        if (ctx->pc != 0x185BC8u) { return; }
    }
    ctx->pc = 0x185BC8u;
    // 0x185bc8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x185bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x185bcc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185bccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185bd0: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x185bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x185bd4: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x185BD4u;
    SET_GPR_U32(ctx, 31, 0x185BDCu);
    ctx->pc = 0x185BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185BD4u;
            // 0x185bd8: 0x24a52180  addiu       $a1, $a1, 0x2180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185BDCu; }
        if (ctx->pc != 0x185BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185BDCu; }
        if (ctx->pc != 0x185BDCu) { return; }
    }
    ctx->pc = 0x185BDCu;
    // 0x185bdc: 0x1000022e  b           . + 4 + (0x22E << 2)
    ctx->pc = 0x185BDCu;
    {
        const bool branch_taken_0x185bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185bdc) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x185BE4u;
    // 0x185be4: 0x0  nop
    ctx->pc = 0x185be4u;
    // NOP
label_185be8:
    // 0x185be8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185bec: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x185becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x185bf0: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x185bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x185bf4: 0xc04755e  jal         func_11D578
    ctx->pc = 0x185BF4u;
    SET_GPR_U32(ctx, 31, 0x185BFCu);
    ctx->pc = 0x185BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185BF4u;
            // 0x185bf8: 0x24a5bb60  addiu       $a1, $a1, -0x44A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185BFCu; }
        if (ctx->pc != 0x185BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185BFCu; }
        if (ctx->pc != 0x185BFCu) { return; }
    }
    ctx->pc = 0x185BFCu;
    // 0x185bfc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x185bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x185c00: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185c00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185c04: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x185c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x185c08: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x185C08u;
    SET_GPR_U32(ctx, 31, 0x185C10u);
    ctx->pc = 0x185C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185C08u;
            // 0x185c0c: 0x24a52198  addiu       $a1, $a1, 0x2198 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C10u; }
        if (ctx->pc != 0x185C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C10u; }
        if (ctx->pc != 0x185C10u) { return; }
    }
    ctx->pc = 0x185C10u;
    // 0x185c10: 0x10000221  b           . + 4 + (0x221 << 2)
    ctx->pc = 0x185C10u;
    {
        const bool branch_taken_0x185c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185c10) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x185C18u;
label_185c18:
    // 0x185c18: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185c1c: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x185c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x185c20: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x185c20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x185c24: 0xc04755e  jal         func_11D578
    ctx->pc = 0x185C24u;
    SET_GPR_U32(ctx, 31, 0x185C2Cu);
    ctx->pc = 0x185C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185C24u;
            // 0x185c28: 0x24a5bb60  addiu       $a1, $a1, -0x44A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C2Cu; }
        if (ctx->pc != 0x185C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C2Cu; }
        if (ctx->pc != 0x185C2Cu) { return; }
    }
    ctx->pc = 0x185C2Cu;
    // 0x185c2c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x185c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x185c30: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185c34: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x185c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x185c38: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x185C38u;
    SET_GPR_U32(ctx, 31, 0x185C40u);
    ctx->pc = 0x185C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185C38u;
            // 0x185c3c: 0x24a52198  addiu       $a1, $a1, 0x2198 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C40u; }
        if (ctx->pc != 0x185C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C40u; }
        if (ctx->pc != 0x185C40u) { return; }
    }
    ctx->pc = 0x185C40u;
    // 0x185c40: 0x10000215  b           . + 4 + (0x215 << 2)
    ctx->pc = 0x185C40u;
    {
        const bool branch_taken_0x185c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185c40) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x185C48u;
label_185c48:
    // 0x185c48: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185c4c: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x185c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x185c50: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x185c50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x185c54: 0xc04755e  jal         func_11D578
    ctx->pc = 0x185C54u;
    SET_GPR_U32(ctx, 31, 0x185C5Cu);
    ctx->pc = 0x185C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185C54u;
            // 0x185c58: 0x24a5bb60  addiu       $a1, $a1, -0x44A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C5Cu; }
        if (ctx->pc != 0x185C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C5Cu; }
        if (ctx->pc != 0x185C5Cu) { return; }
    }
    ctx->pc = 0x185C5Cu;
    // 0x185c5c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x185c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x185c60: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185c60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185c64: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x185c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x185c68: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x185C68u;
    SET_GPR_U32(ctx, 31, 0x185C70u);
    ctx->pc = 0x185C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185C68u;
            // 0x185c6c: 0x24a52198  addiu       $a1, $a1, 0x2198 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C70u; }
        if (ctx->pc != 0x185C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C70u; }
        if (ctx->pc != 0x185C70u) { return; }
    }
    ctx->pc = 0x185C70u;
    // 0x185c70: 0x10000209  b           . + 4 + (0x209 << 2)
    ctx->pc = 0x185C70u;
    {
        const bool branch_taken_0x185c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185c70) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x185C78u;
label_185c78:
    // 0x185c78: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185c7c: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x185c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x185c80: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x185c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x185c84: 0xc04755e  jal         func_11D578
    ctx->pc = 0x185C84u;
    SET_GPR_U32(ctx, 31, 0x185C8Cu);
    ctx->pc = 0x185C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185C84u;
            // 0x185c88: 0x24a5bb60  addiu       $a1, $a1, -0x44A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C8Cu; }
        if (ctx->pc != 0x185C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C8Cu; }
        if (ctx->pc != 0x185C8Cu) { return; }
    }
    ctx->pc = 0x185C8Cu;
    // 0x185c8c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x185c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x185c90: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185c90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185c94: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x185c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x185c98: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x185C98u;
    SET_GPR_U32(ctx, 31, 0x185CA0u);
    ctx->pc = 0x185C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185C98u;
            // 0x185c9c: 0x24a52198  addiu       $a1, $a1, 0x2198 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185CA0u; }
        if (ctx->pc != 0x185CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185CA0u; }
        if (ctx->pc != 0x185CA0u) { return; }
    }
    ctx->pc = 0x185CA0u;
    // 0x185ca0: 0x100001fd  b           . + 4 + (0x1FD << 2)
    ctx->pc = 0x185CA0u;
    {
        const bool branch_taken_0x185ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185ca0) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x185CA8u;
label_185ca8:
    // 0x185ca8: 0xc061aa0  jal         func_186A80
    ctx->pc = 0x185CA8u;
    SET_GPR_U32(ctx, 31, 0x185CB0u);
    ctx->pc = 0x186A80u;
    if (runtime->hasFunction(0x186A80u)) {
        auto targetFn = runtime->lookupFunction(0x186A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185CB0u; }
        if (ctx->pc != 0x185CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FileInfoClean_0x186a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185CB0u; }
        if (ctx->pc != 0x185CB0u) { return; }
    }
    ctx->pc = 0x185CB0u;
    // 0x185cb0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185cb4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185cb8: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x185cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x185cbc: 0x3c08003b  lui         $t0, 0x3B
    ctx->pc = 0x185cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)59 << 16));
    // 0x185cc0: 0x24a521a0  addiu       $a1, $a1, 0x21A0
    ctx->pc = 0x185cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8608));
    // 0x185cc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x185cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185cc8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x185cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185ccc: 0x2508bcc0  addiu       $t0, $t0, -0x4340
    ctx->pc = 0x185cccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294950080));
    // 0x185cd0: 0xc04769e  jal         func_11DA78
    ctx->pc = 0x185CD0u;
    SET_GPR_U32(ctx, 31, 0x185CD8u);
    ctx->pc = 0x185CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185CD0u;
            // 0x185cd4: 0x27a90054  addiu       $t1, $sp, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DA78u;
    if (runtime->hasFunction(0x11DA78u)) {
        auto targetFn = runtime->lookupFunction(0x11DA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185CD8u; }
        if (ctx->pc != 0x185CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetDirAsync_0x11da78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185CD8u; }
        if (ctx->pc != 0x185CD8u) { return; }
    }
    ctx->pc = 0x185CD8u;
    // 0x185cd8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x185cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x185cdc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185ce0: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x185ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x185ce4: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x185CE4u;
    SET_GPR_U32(ctx, 31, 0x185CECu);
    ctx->pc = 0x185CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185CE4u;
            // 0x185ce8: 0x24a521b0  addiu       $a1, $a1, 0x21B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185CECu; }
        if (ctx->pc != 0x185CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185CECu; }
        if (ctx->pc != 0x185CECu) { return; }
    }
    ctx->pc = 0x185CECu;
    // 0x185cec: 0x100001ea  b           . + 4 + (0x1EA << 2)
    ctx->pc = 0x185CECu;
    {
        const bool branch_taken_0x185cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185cec) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x185CF4u;
    // 0x185cf4: 0x0  nop
    ctx->pc = 0x185cf4u;
    // NOP
label_185cf8:
    // 0x185cf8: 0xc061aa0  jal         func_186A80
    ctx->pc = 0x185CF8u;
    SET_GPR_U32(ctx, 31, 0x185D00u);
    ctx->pc = 0x186A80u;
    if (runtime->hasFunction(0x186A80u)) {
        auto targetFn = runtime->lookupFunction(0x186A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185D00u; }
        if (ctx->pc != 0x185D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FileInfoClean_0x186a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185D00u; }
        if (ctx->pc != 0x185D00u) { return; }
    }
    ctx->pc = 0x185D00u;
    // 0x185d00: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185d04: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185d08: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x185d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x185d0c: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x185d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x185d10: 0x24a521a0  addiu       $a1, $a1, 0x21A0
    ctx->pc = 0x185d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8608));
    // 0x185d14: 0xc047990  jal         func_11E640
    ctx->pc = 0x185D14u;
    SET_GPR_U32(ctx, 31, 0x185D1Cu);
    ctx->pc = 0x185D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185D14u;
            // 0x185d18: 0x24c6bd00  addiu       $a2, $a2, -0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E640u;
    if (runtime->hasFunction(0x11E640u)) {
        auto targetFn = runtime->lookupFunction(0x11E640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185D1Cu; }
        if (ctx->pc != 0x185D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Chdir_0x11e640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185D1Cu; }
        if (ctx->pc != 0x185D1Cu) { return; }
    }
    ctx->pc = 0x185D1Cu;
    // 0x185d1c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185d20: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185d20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185d24: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x185d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x185d28: 0x3c08003b  lui         $t0, 0x3B
    ctx->pc = 0x185d28u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)59 << 16));
    // 0x185d2c: 0x24a521b8  addiu       $a1, $a1, 0x21B8
    ctx->pc = 0x185d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8632));
    // 0x185d30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x185d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d34: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x185d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x185d38: 0x2508bb70  addiu       $t0, $t0, -0x4490
    ctx->pc = 0x185d38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949744));
    // 0x185d3c: 0xc04769e  jal         func_11DA78
    ctx->pc = 0x185D3Cu;
    SET_GPR_U32(ctx, 31, 0x185D44u);
    ctx->pc = 0x185D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185D3Cu;
            // 0x185d40: 0x27a90054  addiu       $t1, $sp, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DA78u;
    if (runtime->hasFunction(0x11DA78u)) {
        auto targetFn = runtime->lookupFunction(0x11DA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185D44u; }
        if (ctx->pc != 0x185D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetDirAsync_0x11da78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185D44u; }
        if (ctx->pc != 0x185D44u) { return; }
    }
    ctx->pc = 0x185D44u;
    // 0x185d44: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x185d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x185d48: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185d48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185d4c: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x185d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x185d50: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x185D50u;
    SET_GPR_U32(ctx, 31, 0x185D58u);
    ctx->pc = 0x185D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185D50u;
            // 0x185d54: 0x24a521c0  addiu       $a1, $a1, 0x21C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185D58u; }
        if (ctx->pc != 0x185D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185D58u; }
        if (ctx->pc != 0x185D58u) { return; }
    }
    ctx->pc = 0x185D58u;
    // 0x185d58: 0x100001cf  b           . + 4 + (0x1CF << 2)
    ctx->pc = 0x185D58u;
    {
        const bool branch_taken_0x185d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185d58) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x185D60u;
label_185d60:
    // 0x185d60: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185d64: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x185d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x185d68: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185d68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185d6c: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x185d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x185d70: 0x24a52128  addiu       $a1, $a1, 0x2128
    ctx->pc = 0x185d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8488));
    // 0x185d74: 0xc047990  jal         func_11E640
    ctx->pc = 0x185D74u;
    SET_GPR_U32(ctx, 31, 0x185D7Cu);
    ctx->pc = 0x185D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185D74u;
            // 0x185d78: 0x24c6bd00  addiu       $a2, $a2, -0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E640u;
    if (runtime->hasFunction(0x11E640u)) {
        auto targetFn = runtime->lookupFunction(0x11E640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185D7Cu; }
        if (ctx->pc != 0x185D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Chdir_0x11e640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185D7Cu; }
        if (ctx->pc != 0x185D7Cu) { return; }
    }
    ctx->pc = 0x185D7Cu;
    // 0x185d7c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185d80: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185d84: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x185d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x185d88: 0xc0476da  jal         func_11DB68
    ctx->pc = 0x185D88u;
    SET_GPR_U32(ctx, 31, 0x185D90u);
    ctx->pc = 0x185D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185D88u;
            // 0x185d8c: 0x24a521a0  addiu       $a1, $a1, 0x21A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DB68u;
    if (runtime->hasFunction(0x11DB68u)) {
        auto targetFn = runtime->lookupFunction(0x11DB68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185D90u; }
        if (ctx->pc != 0x185D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2MkdirAsync_0x11db68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185D90u; }
        if (ctx->pc != 0x185D90u) { return; }
    }
    ctx->pc = 0x185D90u;
    // 0x185d90: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x185d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x185d94: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185d98: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x185d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x185d9c: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x185D9Cu;
    SET_GPR_U32(ctx, 31, 0x185DA4u);
    ctx->pc = 0x185DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185D9Cu;
            // 0x185da0: 0x24a52258  addiu       $a1, $a1, 0x2258 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185DA4u; }
        if (ctx->pc != 0x185DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185DA4u; }
        if (ctx->pc != 0x185DA4u) { return; }
    }
    ctx->pc = 0x185DA4u;
    // 0x185da4: 0x100001bc  b           . + 4 + (0x1BC << 2)
    ctx->pc = 0x185DA4u;
    {
        const bool branch_taken_0x185da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185da4) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x185DACu;
    // 0x185dac: 0x0  nop
    ctx->pc = 0x185dacu;
    // NOP
label_185db0:
    // 0x185db0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185db4: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x185db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x185db8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185db8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185dbc: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x185dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x185dc0: 0x24a521a0  addiu       $a1, $a1, 0x21A0
    ctx->pc = 0x185dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8608));
    // 0x185dc4: 0xc047990  jal         func_11E640
    ctx->pc = 0x185DC4u;
    SET_GPR_U32(ctx, 31, 0x185DCCu);
    ctx->pc = 0x185DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185DC4u;
            // 0x185dc8: 0x24c6bd00  addiu       $a2, $a2, -0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E640u;
    if (runtime->hasFunction(0x11E640u)) {
        auto targetFn = runtime->lookupFunction(0x11E640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185DCCu; }
        if (ctx->pc != 0x185DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Chdir_0x11e640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185DCCu; }
        if (ctx->pc != 0x185DCCu) { return; }
    }
    ctx->pc = 0x185DCCu;
    // 0x185dcc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185dd0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185dd4: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x185dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x185dd8: 0xc047642  jal         func_11D908
    ctx->pc = 0x185DD8u;
    SET_GPR_U32(ctx, 31, 0x185DE0u);
    ctx->pc = 0x185DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185DD8u;
            // 0x185ddc: 0x24a521a0  addiu       $a1, $a1, 0x21A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D908u;
    if (runtime->hasFunction(0x11D908u)) {
        auto targetFn = runtime->lookupFunction(0x11D908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185DE0u; }
        if (ctx->pc != 0x185DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2CreateFileAsync_0x11d908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185DE0u; }
        if (ctx->pc != 0x185DE0u) { return; }
    }
    ctx->pc = 0x185DE0u;
    // 0x185de0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x185de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x185de4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185de4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185de8: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x185de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x185dec: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x185DECu;
    SET_GPR_U32(ctx, 31, 0x185DF4u);
    ctx->pc = 0x185DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185DECu;
            // 0x185df0: 0x24a52260  addiu       $a1, $a1, 0x2260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185DF4u; }
        if (ctx->pc != 0x185DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185DF4u; }
        if (ctx->pc != 0x185DF4u) { return; }
    }
    ctx->pc = 0x185DF4u;
    // 0x185df4: 0x100001a8  b           . + 4 + (0x1A8 << 2)
    ctx->pc = 0x185DF4u;
    {
        const bool branch_taken_0x185df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185df4) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x185DFCu;
    // 0x185dfc: 0x0  nop
    ctx->pc = 0x185dfcu;
    // NOP
label_185e00:
    // 0x185e00: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185e04: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x185e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x185e08: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185e08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185e0c: 0xc047642  jal         func_11D908
    ctx->pc = 0x185E0Cu;
    SET_GPR_U32(ctx, 31, 0x185E14u);
    ctx->pc = 0x185E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185E0Cu;
            // 0x185e10: 0x24a52270  addiu       $a1, $a1, 0x2270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D908u;
    if (runtime->hasFunction(0x11D908u)) {
        auto targetFn = runtime->lookupFunction(0x11D908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E14u; }
        if (ctx->pc != 0x185E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2CreateFileAsync_0x11d908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E14u; }
        if (ctx->pc != 0x185E14u) { return; }
    }
    ctx->pc = 0x185E14u;
    // 0x185e14: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x185e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x185e18: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185e18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185e1c: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x185e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x185e20: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x185E20u;
    SET_GPR_U32(ctx, 31, 0x185E28u);
    ctx->pc = 0x185E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185E20u;
            // 0x185e24: 0x24a52280  addiu       $a1, $a1, 0x2280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E28u; }
        if (ctx->pc != 0x185E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E28u; }
        if (ctx->pc != 0x185E28u) { return; }
    }
    ctx->pc = 0x185E28u;
    // 0x185e28: 0x1000019b  b           . + 4 + (0x19B << 2)
    ctx->pc = 0x185E28u;
    {
        const bool branch_taken_0x185e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185e28) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x185E30u;
label_185e30:
    // 0x185e30: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185e34: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x185e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x185e38: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185e38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185e3c: 0xc047642  jal         func_11D908
    ctx->pc = 0x185E3Cu;
    SET_GPR_U32(ctx, 31, 0x185E44u);
    ctx->pc = 0x185E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185E3Cu;
            // 0x185e40: 0x24a52290  addiu       $a1, $a1, 0x2290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D908u;
    if (runtime->hasFunction(0x11D908u)) {
        auto targetFn = runtime->lookupFunction(0x11D908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E44u; }
        if (ctx->pc != 0x185E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2CreateFileAsync_0x11d908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E44u; }
        if (ctx->pc != 0x185E44u) { return; }
    }
    ctx->pc = 0x185E44u;
    // 0x185e44: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x185e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x185e48: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185e48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185e4c: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x185e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x185e50: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x185E50u;
    SET_GPR_U32(ctx, 31, 0x185E58u);
    ctx->pc = 0x185E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185E50u;
            // 0x185e54: 0x24a522a0  addiu       $a1, $a1, 0x22A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E58u; }
        if (ctx->pc != 0x185E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E58u; }
        if (ctx->pc != 0x185E58u) { return; }
    }
    ctx->pc = 0x185E58u;
    // 0x185e58: 0x1000018f  b           . + 4 + (0x18F << 2)
    ctx->pc = 0x185E58u;
    {
        const bool branch_taken_0x185e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185e58) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x185E60u;
label_185e60:
    // 0x185e60: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x185e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x185e64: 0xc065cc8  jal         func_197320
    ctx->pc = 0x185E64u;
    SET_GPR_U32(ctx, 31, 0x185E6Cu);
    ctx->pc = 0x185E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185E64u;
            // 0x185e68: 0x24841610  addiu       $a0, $a0, 0x1610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197320u;
    if (runtime->hasFunction(0x197320u)) {
        auto targetFn = runtime->lookupFunction(0x197320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E6Cu; }
        if (ctx->pc != 0x185E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcCheckSum_0x197320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E6Cu; }
        if (ctx->pc != 0x185E6Cu) { return; }
    }
    ctx->pc = 0x185E6Cu;
    // 0x185e6c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x185e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x185e70: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185e74: 0xac2218ec  sw          $v0, 0x18EC($at)
    ctx->pc = 0x185e74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6380), GPR_U32(ctx, 2));
    // 0x185e78: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x185e78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
    // 0x185e7c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185e80: 0x24a521a0  addiu       $a1, $a1, 0x21A0
    ctx->pc = 0x185e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8608));
    // 0x185e84: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x185e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x185e88: 0x24c61610  addiu       $a2, $a2, 0x1610
    ctx->pc = 0x185e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5648));
    // 0x185e8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x185e8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e90: 0xc04760a  jal         func_11D828
    ctx->pc = 0x185E90u;
    SET_GPR_U32(ctx, 31, 0x185E98u);
    ctx->pc = 0x185E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185E90u;
            // 0x185e94: 0x240802e0  addiu       $t0, $zero, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D828u;
    if (runtime->hasFunction(0x11D828u)) {
        auto targetFn = runtime->lookupFunction(0x11D828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E98u; }
        if (ctx->pc != 0x185E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2WriteFileAsync_0x11d828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E98u; }
        if (ctx->pc != 0x185E98u) { return; }
    }
    ctx->pc = 0x185E98u;
    // 0x185e98: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x185e98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x185e9c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185ea0: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x185ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x185ea4: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x185EA4u;
    SET_GPR_U32(ctx, 31, 0x185EACu);
    ctx->pc = 0x185EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185EA4u;
            // 0x185ea8: 0x24a522b0  addiu       $a1, $a1, 0x22B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185EACu; }
        if (ctx->pc != 0x185EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185EACu; }
        if (ctx->pc != 0x185EACu) { return; }
    }
    ctx->pc = 0x185EACu;
    // 0x185eac: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x185EACu;
    {
        const bool branch_taken_0x185eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185eac) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x185EB4u;
    // 0x185eb4: 0x0  nop
    ctx->pc = 0x185eb4u;
    // NOP
label_185eb8:
    // 0x185eb8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185ebc: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x185ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x185ec0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185ec4: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x185ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x185ec8: 0x24a52270  addiu       $a1, $a1, 0x2270
    ctx->pc = 0x185ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8816));
    // 0x185ecc: 0x24c6bef0  addiu       $a2, $a2, -0x4110
    ctx->pc = 0x185eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950640));
    // 0x185ed0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x185ed0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ed4: 0xc04760a  jal         func_11D828
    ctx->pc = 0x185ED4u;
    SET_GPR_U32(ctx, 31, 0x185EDCu);
    ctx->pc = 0x185ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185ED4u;
            // 0x185ed8: 0x240803c4  addiu       $t0, $zero, 0x3C4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D828u;
    if (runtime->hasFunction(0x11D828u)) {
        auto targetFn = runtime->lookupFunction(0x11D828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185EDCu; }
        if (ctx->pc != 0x185EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2WriteFileAsync_0x11d828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185EDCu; }
        if (ctx->pc != 0x185EDCu) { return; }
    }
    ctx->pc = 0x185EDCu;
    // 0x185edc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x185edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x185ee0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185ee4: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x185ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x185ee8: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x185EE8u;
    SET_GPR_U32(ctx, 31, 0x185EF0u);
    ctx->pc = 0x185EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185EE8u;
            // 0x185eec: 0x24a522c0  addiu       $a1, $a1, 0x22C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185EF0u; }
        if (ctx->pc != 0x185EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185EF0u; }
        if (ctx->pc != 0x185EF0u) { return; }
    }
    ctx->pc = 0x185EF0u;
    // 0x185ef0: 0x10000169  b           . + 4 + (0x169 << 2)
    ctx->pc = 0x185EF0u;
    {
        const bool branch_taken_0x185ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185ef0) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x185EF8u;
label_185ef8:
    // 0x185ef8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185efc: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x185efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x185f00: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185f04: 0x24a52290  addiu       $a1, $a1, 0x2290
    ctx->pc = 0x185f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8848));
    // 0x185f08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x185f08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f0c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185f10: 0x8c26bee0  lw          $a2, -0x4120($at)
    ctx->pc = 0x185f10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950624)));
    // 0x185f14: 0xc04760a  jal         func_11D828
    ctx->pc = 0x185F14u;
    SET_GPR_U32(ctx, 31, 0x185F1Cu);
    ctx->pc = 0x185F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185F14u;
            // 0x185f18: 0x3408880e  ori         $t0, $zero, 0x880E (Delay Slot)
        SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)34830u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D828u;
    if (runtime->hasFunction(0x11D828u)) {
        auto targetFn = runtime->lookupFunction(0x11D828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185F1Cu; }
        if (ctx->pc != 0x185F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2WriteFileAsync_0x11d828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185F1Cu; }
        if (ctx->pc != 0x185F1Cu) { return; }
    }
    ctx->pc = 0x185F1Cu;
    // 0x185f1c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x185f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x185f20: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185f24: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x185f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x185f28: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x185F28u;
    SET_GPR_U32(ctx, 31, 0x185F30u);
    ctx->pc = 0x185F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185F28u;
            // 0x185f2c: 0x24a522d0  addiu       $a1, $a1, 0x22D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185F30u; }
        if (ctx->pc != 0x185F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185F30u; }
        if (ctx->pc != 0x185F30u) { return; }
    }
    ctx->pc = 0x185F30u;
    // 0x185f30: 0x10000159  b           . + 4 + (0x159 << 2)
    ctx->pc = 0x185F30u;
    {
        const bool branch_taken_0x185f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185f30) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x185F38u;
label_185f38:
    // 0x185f38: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185f3c: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x185f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x185f40: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185f40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185f44: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x185f44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x185f48: 0x24a521a0  addiu       $a1, $a1, 0x21A0
    ctx->pc = 0x185f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8608));
    // 0x185f4c: 0x24c6b740  addiu       $a2, $a2, -0x48C0
    ctx->pc = 0x185f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948672));
    // 0x185f50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x185f50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f54: 0xc0475d2  jal         func_11D748
    ctx->pc = 0x185F54u;
    SET_GPR_U32(ctx, 31, 0x185F5Cu);
    ctx->pc = 0x185F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185F54u;
            // 0x185f58: 0x240802e0  addiu       $t0, $zero, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D748u;
    if (runtime->hasFunction(0x11D748u)) {
        auto targetFn = runtime->lookupFunction(0x11D748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185F5Cu; }
        if (ctx->pc != 0x185F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2ReadFileAsync_0x11d748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185F5Cu; }
        if (ctx->pc != 0x185F5Cu) { return; }
    }
    ctx->pc = 0x185F5Cu;
    // 0x185f5c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x185f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x185f60: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185f60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185f64: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x185f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x185f68: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x185F68u;
    SET_GPR_U32(ctx, 31, 0x185F70u);
    ctx->pc = 0x185F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185F68u;
            // 0x185f6c: 0x24a521c8  addiu       $a1, $a1, 0x21C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185F70u; }
        if (ctx->pc != 0x185F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185F70u; }
        if (ctx->pc != 0x185F70u) { return; }
    }
    ctx->pc = 0x185F70u;
    // 0x185f70: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x185F70u;
    {
        const bool branch_taken_0x185f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185f70) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x185F78u;
label_185f78:
    // 0x185f78: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x185f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x185f7c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185f80: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x185f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x185f84: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x185F84u;
    SET_GPR_U32(ctx, 31, 0x185F8Cu);
    ctx->pc = 0x185F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185F84u;
            // 0x185f88: 0x24a521d8  addiu       $a1, $a1, 0x21D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185F8Cu; }
        if (ctx->pc != 0x185F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185F8Cu; }
        if (ctx->pc != 0x185F8Cu) { return; }
    }
    ctx->pc = 0x185F8Cu;
    // 0x185f8c: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x185F8Cu;
    {
        const bool branch_taken_0x185f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185F8Cu;
            // 0x185f90: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f8c) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x185F94u;
    // 0x185f94: 0x0  nop
    ctx->pc = 0x185f94u;
    // NOP
label_185f98:
    // 0x185f98: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185f9c: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x185f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x185fa0: 0xc04755e  jal         func_11D578
    ctx->pc = 0x185FA0u;
    SET_GPR_U32(ctx, 31, 0x185FA8u);
    ctx->pc = 0x185FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185FA0u;
            // 0x185fa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185FA8u; }
        if (ctx->pc != 0x185FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185FA8u; }
        if (ctx->pc != 0x185FA8u) { return; }
    }
    ctx->pc = 0x185FA8u;
    // 0x185fa8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x185fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x185fac: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185facu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185fb0: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x185fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x185fb4: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x185FB4u;
    SET_GPR_U32(ctx, 31, 0x185FBCu);
    ctx->pc = 0x185FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185FB4u;
            // 0x185fb8: 0x24a521e0  addiu       $a1, $a1, 0x21E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185FBCu; }
        if (ctx->pc != 0x185FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185FBCu; }
        if (ctx->pc != 0x185FBCu) { return; }
    }
    ctx->pc = 0x185FBCu;
    // 0x185fbc: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x185FBCu;
    {
        const bool branch_taken_0x185fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185fbc) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x185FC4u;
    // 0x185fc4: 0x0  nop
    ctx->pc = 0x185fc4u;
    // NOP
label_185fc8:
    // 0x185fc8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185fcc: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x185fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x185fd0: 0xc04755e  jal         func_11D578
    ctx->pc = 0x185FD0u;
    SET_GPR_U32(ctx, 31, 0x185FD8u);
    ctx->pc = 0x185FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185FD0u;
            // 0x185fd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185FD8u; }
        if (ctx->pc != 0x185FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185FD8u; }
        if (ctx->pc != 0x185FD8u) { return; }
    }
    ctx->pc = 0x185FD8u;
    // 0x185fd8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x185fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x185fdc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x185fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x185fe0: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x185fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x185fe4: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x185FE4u;
    SET_GPR_U32(ctx, 31, 0x185FECu);
    ctx->pc = 0x185FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185FE4u;
            // 0x185fe8: 0x24a521e0  addiu       $a1, $a1, 0x21E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185FECu; }
        if (ctx->pc != 0x185FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185FECu; }
        if (ctx->pc != 0x185FECu) { return; }
    }
    ctx->pc = 0x185FECu;
    // 0x185fec: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x185FECu;
    {
        const bool branch_taken_0x185fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185fec) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x185FF4u;
    // 0x185ff4: 0x0  nop
    ctx->pc = 0x185ff4u;
    // NOP
label_185ff8:
    // 0x185ff8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x185ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x185ffc: 0xc04751e  jal         func_11D478
    ctx->pc = 0x185FFCu;
    SET_GPR_U32(ctx, 31, 0x186004u);
    ctx->pc = 0x186000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185FFCu;
            // 0x186000: 0x8c24bcf8  lw          $a0, -0x4308($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D478u;
    if (runtime->hasFunction(0x11D478u)) {
        auto targetFn = runtime->lookupFunction(0x11D478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186004u; }
        if (ctx->pc != 0x186004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2FormatAsync_0x11d478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186004u; }
        if (ctx->pc != 0x186004u) { return; }
    }
    ctx->pc = 0x186004u;
    // 0x186004: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x186008: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x186008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18600c: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x18600cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x186010: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x186010u;
    SET_GPR_U32(ctx, 31, 0x186018u);
    ctx->pc = 0x186014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186010u;
            // 0x186014: 0x24a522e0  addiu       $a1, $a1, 0x22E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186018u; }
        if (ctx->pc != 0x186018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186018u; }
        if (ctx->pc != 0x186018u) { return; }
    }
    ctx->pc = 0x186018u;
    // 0x186018: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x186018u;
    {
        const bool branch_taken_0x186018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186018) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x186020u;
label_186020:
    // 0x186020: 0x240300e6  addiu       $v1, $zero, 0xE6
    ctx->pc = 0x186020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x186024: 0x12430116  beq         $s2, $v1, . + 4 + (0x116 << 2)
    ctx->pc = 0x186024u;
    {
        const bool branch_taken_0x186024 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x186028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186024u;
            // 0x186028: 0x24080136  addiu       $t0, $zero, 0x136 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186024) {
            ctx->pc = 0x186480u;
            goto label_186480;
        }
    }
    ctx->pc = 0x18602Cu;
    // 0x18602c: 0x12480114  beq         $s2, $t0, . + 4 + (0x114 << 2)
    ctx->pc = 0x18602Cu;
    {
        const bool branch_taken_0x18602c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 8));
        ctx->pc = 0x186030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18602Cu;
            // 0x186030: 0x2407012c  addiu       $a3, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18602c) {
            ctx->pc = 0x186480u;
            goto label_186480;
        }
    }
    ctx->pc = 0x186034u;
    // 0x186034: 0x12470112  beq         $s2, $a3, . + 4 + (0x112 << 2)
    ctx->pc = 0x186034u;
    {
        const bool branch_taken_0x186034 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 7));
        ctx->pc = 0x186038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186034u;
            // 0x186038: 0x24040122  addiu       $a0, $zero, 0x122 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186034) {
            ctx->pc = 0x186480u;
            goto label_186480;
        }
    }
    ctx->pc = 0x18603Cu;
    // 0x18603c: 0x12440110  beq         $s2, $a0, . + 4 + (0x110 << 2)
    ctx->pc = 0x18603Cu;
    {
        const bool branch_taken_0x18603c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        ctx->pc = 0x186040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18603Cu;
            // 0x186040: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18603c) {
            ctx->pc = 0x186480u;
            goto label_186480;
        }
    }
    ctx->pc = 0x186044u;
    // 0x186044: 0x12430106  beq         $s2, $v1, . + 4 + (0x106 << 2)
    ctx->pc = 0x186044u;
    {
        const bool branch_taken_0x186044 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x186044) {
            ctx->pc = 0x186460u;
            goto label_186460;
        }
    }
    ctx->pc = 0x18604Cu;
    // 0x18604c: 0x24030083  addiu       $v1, $zero, 0x83
    ctx->pc = 0x18604cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x186050: 0x12430103  beq         $s2, $v1, . + 4 + (0x103 << 2)
    ctx->pc = 0x186050u;
    {
        const bool branch_taken_0x186050 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x186054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186050u;
            // 0x186054: 0x24030078  addiu       $v1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186050) {
            ctx->pc = 0x186460u;
            goto label_186460;
        }
    }
    ctx->pc = 0x186058u;
    // 0x186058: 0x12430101  beq         $s2, $v1, . + 4 + (0x101 << 2)
    ctx->pc = 0x186058u;
    {
        const bool branch_taken_0x186058 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x186058) {
            ctx->pc = 0x186460u;
            goto label_186460;
        }
    }
    ctx->pc = 0x186060u;
    // 0x186060: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x186060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x186064: 0x124300fe  beq         $s2, $v1, . + 4 + (0xFE << 2)
    ctx->pc = 0x186064u;
    {
        const bool branch_taken_0x186064 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x186068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186064u;
            // 0x186068: 0x24030118  addiu       $v1, $zero, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186064) {
            ctx->pc = 0x186460u;
            goto label_186460;
        }
    }
    ctx->pc = 0x18606Cu;
    // 0x18606c: 0x124300fc  beq         $s2, $v1, . + 4 + (0xFC << 2)
    ctx->pc = 0x18606Cu;
    {
        const bool branch_taken_0x18606c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x18606c) {
            ctx->pc = 0x186460u;
            goto label_186460;
        }
    }
    ctx->pc = 0x186074u;
    // 0x186074: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x186074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x186078: 0x124300f9  beq         $s2, $v1, . + 4 + (0xF9 << 2)
    ctx->pc = 0x186078u;
    {
        const bool branch_taken_0x186078 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x18607Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186078u;
            // 0x18607c: 0x240600d2  addiu       $a2, $zero, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186078) {
            ctx->pc = 0x186460u;
            goto label_186460;
        }
    }
    ctx->pc = 0x186080u;
    // 0x186080: 0x124600f7  beq         $s2, $a2, . + 4 + (0xF7 << 2)
    ctx->pc = 0x186080u;
    {
        const bool branch_taken_0x186080 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 6));
        ctx->pc = 0x186084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186080u;
            // 0x186084: 0x240b00fa  addiu       $t3, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186080) {
            ctx->pc = 0x186460u;
            goto label_186460;
        }
    }
    ctx->pc = 0x186088u;
    // 0x186088: 0x124b00f5  beq         $s2, $t3, . + 4 + (0xF5 << 2)
    ctx->pc = 0x186088u;
    {
        const bool branch_taken_0x186088 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 11));
        ctx->pc = 0x18608Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186088u;
            // 0x18608c: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186088) {
            ctx->pc = 0x186460u;
            goto label_186460;
        }
    }
    ctx->pc = 0x186090u;
    // 0x186090: 0x124600eb  beq         $s2, $a2, . + 4 + (0xEB << 2)
    ctx->pc = 0x186090u;
    {
        const bool branch_taken_0x186090 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 6));
        if (branch_taken_0x186090) {
            ctx->pc = 0x186440u;
            goto label_186440;
        }
    }
    ctx->pc = 0x186098u;
    // 0x186098: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x186098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x18609c: 0x124600d4  beq         $s2, $a2, . + 4 + (0xD4 << 2)
    ctx->pc = 0x18609Cu;
    {
        const bool branch_taken_0x18609c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 6));
        ctx->pc = 0x1860A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18609Cu;
            // 0x1860a0: 0x240a00aa  addiu       $t2, $zero, 0xAA (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18609c) {
            ctx->pc = 0x1863F0u;
            goto label_1863f0;
        }
    }
    ctx->pc = 0x1860A4u;
    // 0x1860a4: 0x124a00c4  beq         $s2, $t2, . + 4 + (0xC4 << 2)
    ctx->pc = 0x1860A4u;
    {
        const bool branch_taken_0x1860a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 10));
        ctx->pc = 0x1860A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1860A4u;
            // 0x1860a8: 0x240900ca  addiu       $t1, $zero, 0xCA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860a4) {
            ctx->pc = 0x1863B8u;
            goto label_1863b8;
        }
    }
    ctx->pc = 0x1860ACu;
    // 0x1860ac: 0x124900ba  beq         $s2, $t1, . + 4 + (0xBA << 2)
    ctx->pc = 0x1860ACu;
    {
        const bool branch_taken_0x1860ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 9));
        ctx->pc = 0x1860B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1860ACu;
            // 0x1860b0: 0x240700c9  addiu       $a3, $zero, 0xC9 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860ac) {
            ctx->pc = 0x186398u;
            goto label_186398;
        }
    }
    ctx->pc = 0x1860B4u;
    // 0x1860b4: 0x124700b0  beq         $s2, $a3, . + 4 + (0xB0 << 2)
    ctx->pc = 0x1860B4u;
    {
        const bool branch_taken_0x1860b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 7));
        ctx->pc = 0x1860B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1860B4u;
            // 0x1860b8: 0x240800c8  addiu       $t0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860b4) {
            ctx->pc = 0x186378u;
            goto label_186378;
        }
    }
    ctx->pc = 0x1860BCu;
    // 0x1860bc: 0x124800a6  beq         $s2, $t0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x1860BCu;
    {
        const bool branch_taken_0x1860bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 8));
        ctx->pc = 0x1860C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1860BCu;
            // 0x1860c0: 0x240600c0  addiu       $a2, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860bc) {
            ctx->pc = 0x186358u;
            goto label_186358;
        }
    }
    ctx->pc = 0x1860C4u;
    // 0x1860c4: 0x12460098  beq         $s2, $a2, . + 4 + (0x98 << 2)
    ctx->pc = 0x1860C4u;
    {
        const bool branch_taken_0x1860c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 6));
        if (branch_taken_0x1860c4) {
            ctx->pc = 0x186328u;
            goto label_186328;
        }
    }
    ctx->pc = 0x1860CCu;
    // 0x1860cc: 0x240600bf  addiu       $a2, $zero, 0xBF
    ctx->pc = 0x1860ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    // 0x1860d0: 0x12460089  beq         $s2, $a2, . + 4 + (0x89 << 2)
    ctx->pc = 0x1860D0u;
    {
        const bool branch_taken_0x1860d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 6));
        if (branch_taken_0x1860d0) {
            ctx->pc = 0x1862F8u;
            goto label_1862f8;
        }
    }
    ctx->pc = 0x1860D8u;
    // 0x1860d8: 0x240700be  addiu       $a3, $zero, 0xBE
    ctx->pc = 0x1860d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x1860dc: 0x1247007a  beq         $s2, $a3, . + 4 + (0x7A << 2)
    ctx->pc = 0x1860DCu;
    {
        const bool branch_taken_0x1860dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 7));
        ctx->pc = 0x1860E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1860DCu;
            // 0x1860e0: 0x240600b5  addiu       $a2, $zero, 0xB5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860dc) {
            ctx->pc = 0x1862C8u;
            goto label_1862c8;
        }
    }
    ctx->pc = 0x1860E4u;
    // 0x1860e4: 0x1246006c  beq         $s2, $a2, . + 4 + (0x6C << 2)
    ctx->pc = 0x1860E4u;
    {
        const bool branch_taken_0x1860e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 6));
        if (branch_taken_0x1860e4) {
            ctx->pc = 0x186298u;
            goto label_186298;
        }
    }
    ctx->pc = 0x1860ECu;
    // 0x1860ec: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1860ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1860f0: 0x12440055  beq         $s2, $a0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1860F0u;
    {
        const bool branch_taken_0x1860f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        if (branch_taken_0x1860f0) {
            ctx->pc = 0x186248u;
            goto label_186248;
        }
    }
    ctx->pc = 0x1860F8u;
    // 0x1860f8: 0x1245003d  beq         $s2, $a1, . + 4 + (0x3D << 2)
    ctx->pc = 0x1860F8u;
    {
        const bool branch_taken_0x1860f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        ctx->pc = 0x1860FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1860F8u;
            // 0x1860fc: 0x2403008c  addiu       $v1, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860f8) {
            ctx->pc = 0x1861F0u;
            goto label_1861f0;
        }
    }
    ctx->pc = 0x186100u;
    // 0x186100: 0x12430005  beq         $s2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x186100u;
    {
        const bool branch_taken_0x186100 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x186100) {
            ctx->pc = 0x186118u;
            goto label_186118;
        }
    }
    ctx->pc = 0x186108u;
    // 0x186108: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x186108u;
    {
        const bool branch_taken_0x186108 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x186108) {
            ctx->pc = 0x186118u;
            goto label_186118;
        }
    }
    ctx->pc = 0x186110u;
    // 0x186110: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x186110u;
    {
        const bool branch_taken_0x186110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186110) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x186118u;
label_186118:
    // 0x186118: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x186118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18611c: 0x4610032  bgez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x18611Cu;
    {
        const bool branch_taken_0x18611c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18611c) {
            ctx->pc = 0x1861E8u;
            goto label_1861e8;
        }
    }
    ctx->pc = 0x186124u;
    // 0x186124: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x186124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x186128: 0x2a01000b  slti        $at, $s0, 0xB
    ctx->pc = 0x186128u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x18612c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x18612Cu;
    {
        const bool branch_taken_0x18612c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18612c) {
            ctx->pc = 0x186140u;
            goto label_186140;
        }
    }
    ctx->pc = 0x186134u;
    // 0x186134: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x186134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186138: 0x2412008c  addiu       $s2, $zero, 0x8C
    ctx->pc = 0x186138u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x18613c: 0x0  nop
    ctx->pc = 0x18613cu;
    // NOP
label_186140:
    // 0x186140: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x186144: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x186144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x186148: 0x2484be00  addiu       $a0, $a0, -0x4200
    ctx->pc = 0x186148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950400));
    // 0x18614c: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x18614Cu;
    SET_GPR_U32(ctx, 31, 0x186154u);
    ctx->pc = 0x186150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18614Cu;
            // 0x186150: 0x24a521f0  addiu       $a1, $a1, 0x21F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186154u; }
        if (ctx->pc != 0x186154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186154u; }
        if (ctx->pc != 0x186154u) { return; }
    }
    ctx->pc = 0x186154u;
    // 0x186154: 0x97a40058  lhu         $a0, 0x58($sp)
    ctx->pc = 0x186154u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x186158: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x186158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x18615c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18615Cu;
    {
        const bool branch_taken_0x18615c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x186160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18615Cu;
            // 0x186160: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18615c) {
            ctx->pc = 0x186178u;
            goto label_186178;
        }
    }
    ctx->pc = 0x186164u;
    // 0x186164: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x186164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x186168: 0x2484be00  addiu       $a0, $a0, -0x4200
    ctx->pc = 0x186168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950400));
    // 0x18616c: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x18616Cu;
    SET_GPR_U32(ctx, 31, 0x186174u);
    ctx->pc = 0x186170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18616Cu;
            // 0x186170: 0x24a521f8  addiu       $a1, $a1, 0x21F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186174u; }
        if (ctx->pc != 0x186174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186174u; }
        if (ctx->pc != 0x186174u) { return; }
    }
    ctx->pc = 0x186174u;
    // 0x186174: 0x2412008c  addiu       $s2, $zero, 0x8C
    ctx->pc = 0x186174u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_186178:
    // 0x186178: 0x97a40058  lhu         $a0, 0x58($sp)
    ctx->pc = 0x186178u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18617c: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x18617cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x186180: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x186180u;
    {
        const bool branch_taken_0x186180 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x186184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186180u;
            // 0x186184: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186180) {
            ctx->pc = 0x1861A0u;
            goto label_1861a0;
        }
    }
    ctx->pc = 0x186188u;
    // 0x186188: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x186188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18618c: 0x2484be00  addiu       $a0, $a0, -0x4200
    ctx->pc = 0x18618cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950400));
    // 0x186190: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x186190u;
    SET_GPR_U32(ctx, 31, 0x186198u);
    ctx->pc = 0x186194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186190u;
            // 0x186194: 0x24a52200  addiu       $a1, $a1, 0x2200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186198u; }
        if (ctx->pc != 0x186198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186198u; }
        if (ctx->pc != 0x186198u) { return; }
    }
    ctx->pc = 0x186198u;
    // 0x186198: 0x24120078  addiu       $s2, $zero, 0x78
    ctx->pc = 0x186198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x18619c: 0x0  nop
    ctx->pc = 0x18619cu;
    // NOP
label_1861a0:
    // 0x1861a0: 0x97a40058  lhu         $a0, 0x58($sp)
    ctx->pc = 0x1861a0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1861a4: 0x34039003  ori         $v1, $zero, 0x9003
    ctx->pc = 0x1861a4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)36867u)));
    // 0x1861a8: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1861A8u;
    {
        const bool branch_taken_0x1861a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1861ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1861A8u;
            // 0x1861ac: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861a8) {
            ctx->pc = 0x1861C8u;
            goto label_1861c8;
        }
    }
    ctx->pc = 0x1861B0u;
    // 0x1861b0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1861b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1861b4: 0x2484be00  addiu       $a0, $a0, -0x4200
    ctx->pc = 0x1861b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950400));
    // 0x1861b8: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x1861B8u;
    SET_GPR_U32(ctx, 31, 0x1861C0u);
    ctx->pc = 0x1861BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1861B8u;
            // 0x1861bc: 0x24a52210  addiu       $a1, $a1, 0x2210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1861C0u; }
        if (ctx->pc != 0x1861C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1861C0u; }
        if (ctx->pc != 0x1861C0u) { return; }
    }
    ctx->pc = 0x1861C0u;
    // 0x1861c0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1861c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1861c4: 0x0  nop
    ctx->pc = 0x1861c4u;
    // NOP
label_1861c8:
    // 0x1861c8: 0x164000b3  bnez        $s2, . + 4 + (0xB3 << 2)
    ctx->pc = 0x1861C8u;
    {
        const bool branch_taken_0x1861c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1861CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1861C8u;
            // 0x1861cc: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861c8) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x1861D0u;
    // 0x1861d0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1861d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1861d4: 0x2484be00  addiu       $a0, $a0, -0x4200
    ctx->pc = 0x1861d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950400));
    // 0x1861d8: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x1861D8u;
    SET_GPR_U32(ctx, 31, 0x1861E0u);
    ctx->pc = 0x1861DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1861D8u;
            // 0x1861dc: 0x24a521f8  addiu       $a1, $a1, 0x21F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1861E0u; }
        if (ctx->pc != 0x1861E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1861E0u; }
        if (ctx->pc != 0x1861E0u) { return; }
    }
    ctx->pc = 0x1861E0u;
    // 0x1861e0: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x1861E0u;
    {
        const bool branch_taken_0x1861e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1861E0u;
            // 0x1861e4: 0x2412008c  addiu       $s2, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861e0) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x1861E8u;
label_1861e8:
    // 0x1861e8: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x1861E8u;
    {
        const bool branch_taken_0x1861e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1861E8u;
            // 0x1861ec: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861e8) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x1861F0u;
label_1861f0:
    // 0x1861f0: 0x97a30058  lhu         $v1, 0x58($sp)
    ctx->pc = 0x1861f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1861f4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1861F4u;
    {
        const bool branch_taken_0x1861f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1861f4) {
            ctx->pc = 0x186220u;
            goto label_186220;
        }
    }
    ctx->pc = 0x1861FCu;
    // 0x1861fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1861fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x186200: 0x2a01000b  slti        $at, $s0, 0xB
    ctx->pc = 0x186200u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x186204: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x186204u;
    {
        const bool branch_taken_0x186204 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x186204) {
            ctx->pc = 0x186218u;
            goto label_186218;
        }
    }
    ctx->pc = 0x18620Cu;
    // 0x18620c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18620cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186210: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x186210u;
    {
        const bool branch_taken_0x186210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186210u;
            // 0x186214: 0x2412008c  addiu       $s2, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186210) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x186218u;
label_186218:
    // 0x186218: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x186218u;
    {
        const bool branch_taken_0x186218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18621Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186218u;
            // 0x18621c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186218) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x186220u;
label_186220:
    // 0x186220: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x186220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x186224: 0x8c26bb68  lw          $a2, -0x4498($at)
    ctx->pc = 0x186224u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949736)));
    // 0x186228: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x18622c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18622cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x186230: 0x2484be00  addiu       $a0, $a0, -0x4200
    ctx->pc = 0x186230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950400));
    // 0x186234: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x186234u;
    SET_GPR_U32(ctx, 31, 0x18623Cu);
    ctx->pc = 0x186238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186234u;
            // 0x186238: 0x24a52220  addiu       $a1, $a1, 0x2220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18623Cu; }
        if (ctx->pc != 0x18623Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18623Cu; }
        if (ctx->pc != 0x18623Cu) { return; }
    }
    ctx->pc = 0x18623Cu;
    // 0x18623c: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x18623Cu;
    {
        const bool branch_taken_0x18623c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18623Cu;
            // 0x186240: 0x241200a0  addiu       $s2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18623c) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x186244u;
    // 0x186244: 0x0  nop
    ctx->pc = 0x186244u;
    // NOP
label_186248:
    // 0x186248: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x186248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18624c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18624Cu;
    {
        const bool branch_taken_0x18624c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x186250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18624Cu;
            // 0x186250: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18624c) {
            ctx->pc = 0x186260u;
            goto label_186260;
        }
    }
    ctx->pc = 0x186254u;
    // 0x186254: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x186254u;
    {
        const bool branch_taken_0x186254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186254) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x18625Cu;
    // 0x18625c: 0x0  nop
    ctx->pc = 0x18625cu;
    // NOP
label_186260:
    // 0x186260: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x186260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x186264: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x186264u;
    {
        const bool branch_taken_0x186264 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x186268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186264u;
            // 0x186268: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186264) {
            ctx->pc = 0x186290u;
            goto label_186290;
        }
    }
    ctx->pc = 0x18626Cu;
    // 0x18626c: 0x8c24bb68  lw          $a0, -0x4498($at)
    ctx->pc = 0x18626cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949736)));
    // 0x186270: 0x28810029  slti        $at, $a0, 0x29
    ctx->pc = 0x186270u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x186274: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x186274u;
    {
        const bool branch_taken_0x186274 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x186278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186274u;
            // 0x186278: 0x160902d  daddu       $s2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186274) {
            ctx->pc = 0x186288u;
            goto label_186288;
        }
    }
    ctx->pc = 0x18627Cu;
    // 0x18627c: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x18627Cu;
    {
        const bool branch_taken_0x18627c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18627c) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x186284u;
    // 0x186284: 0x0  nop
    ctx->pc = 0x186284u;
    // NOP
label_186288:
    // 0x186288: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x186288u;
    {
        const bool branch_taken_0x186288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18628Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186288u;
            // 0x18628c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186288) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x186290u;
label_186290:
    // 0x186290: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x186290u;
    {
        const bool branch_taken_0x186290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186290u;
            // 0x186294: 0x140902d  daddu       $s2, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186290) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x186298u;
label_186298:
    // 0x186298: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x186298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18629c: 0x4610008  bgez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18629Cu;
    {
        const bool branch_taken_0x18629c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1862A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18629Cu;
            // 0x1862a0: 0x3065ffff  andi        $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18629c) {
            ctx->pc = 0x1862C0u;
            goto label_1862c0;
        }
    }
    ctx->pc = 0x1862A4u;
    // 0x1862a4: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1862a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1862a8: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1862A8u;
    {
        const bool branch_taken_0x1862a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1862ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1862A8u;
            // 0x1862ac: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1862a8) {
            ctx->pc = 0x1862B8u;
            goto label_1862b8;
        }
    }
    ctx->pc = 0x1862B0u;
    // 0x1862b0: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x1862B0u;
    {
        const bool branch_taken_0x1862b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1862b0) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x1862B8u;
label_1862b8:
    // 0x1862b8: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x1862B8u;
    {
        const bool branch_taken_0x1862b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1862BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1862B8u;
            // 0x1862bc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1862b8) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x1862C0u;
label_1862c0:
    // 0x1862c0: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x1862C0u;
    {
        const bool branch_taken_0x1862c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1862C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1862C0u;
            // 0x1862c4: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1862c0) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x1862C8u;
label_1862c8:
    // 0x1862c8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1862c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1862cc: 0x4610008  bgez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1862CCu;
    {
        const bool branch_taken_0x1862cc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1862D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1862CCu;
            // 0x1862d0: 0x3065ffff  andi        $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1862cc) {
            ctx->pc = 0x1862F0u;
            goto label_1862f0;
        }
    }
    ctx->pc = 0x1862D4u;
    // 0x1862d4: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1862d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1862d8: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1862D8u;
    {
        const bool branch_taken_0x1862d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1862DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1862D8u;
            // 0x1862dc: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1862d8) {
            ctx->pc = 0x1862E8u;
            goto label_1862e8;
        }
    }
    ctx->pc = 0x1862E0u;
    // 0x1862e0: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1862E0u;
    {
        const bool branch_taken_0x1862e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1862e0) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x1862E8u;
label_1862e8:
    // 0x1862e8: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x1862E8u;
    {
        const bool branch_taken_0x1862e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1862ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1862E8u;
            // 0x1862ec: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1862e8) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x1862F0u;
label_1862f0:
    // 0x1862f0: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1862F0u;
    {
        const bool branch_taken_0x1862f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1862F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1862F0u;
            // 0x1862f4: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1862f0) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x1862F8u;
label_1862f8:
    // 0x1862f8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1862f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1862fc: 0x4610008  bgez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1862FCu;
    {
        const bool branch_taken_0x1862fc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x186300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1862FCu;
            // 0x186300: 0x3065ffff  andi        $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1862fc) {
            ctx->pc = 0x186320u;
            goto label_186320;
        }
    }
    ctx->pc = 0x186304u;
    // 0x186304: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x186304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x186308: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x186308u;
    {
        const bool branch_taken_0x186308 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x18630Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186308u;
            // 0x18630c: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186308) {
            ctx->pc = 0x186318u;
            goto label_186318;
        }
    }
    ctx->pc = 0x186310u;
    // 0x186310: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x186310u;
    {
        const bool branch_taken_0x186310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186310) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x186318u;
label_186318:
    // 0x186318: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x186318u;
    {
        const bool branch_taken_0x186318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18631Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186318u;
            // 0x18631c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186318) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x186320u;
label_186320:
    // 0x186320: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x186320u;
    {
        const bool branch_taken_0x186320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186320u;
            // 0x186324: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186320) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x186328u;
label_186328:
    // 0x186328: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x186328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18632c: 0x4610008  bgez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18632Cu;
    {
        const bool branch_taken_0x18632c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x186330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18632Cu;
            // 0x186330: 0x3065ffff  andi        $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18632c) {
            ctx->pc = 0x186350u;
            goto label_186350;
        }
    }
    ctx->pc = 0x186334u;
    // 0x186334: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x186334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x186338: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x186338u;
    {
        const bool branch_taken_0x186338 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x18633Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186338u;
            // 0x18633c: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186338) {
            ctx->pc = 0x186348u;
            goto label_186348;
        }
    }
    ctx->pc = 0x186340u;
    // 0x186340: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x186340u;
    {
        const bool branch_taken_0x186340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186340) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x186348u;
label_186348:
    // 0x186348: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x186348u;
    {
        const bool branch_taken_0x186348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18634Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186348u;
            // 0x18634c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186348) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x186350u;
label_186350:
    // 0x186350: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x186350u;
    {
        const bool branch_taken_0x186350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186350u;
            // 0x186354: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186350) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x186358u;
label_186358:
    // 0x186358: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x186358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18635c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18635Cu;
    {
        const bool branch_taken_0x18635c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x186360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18635Cu;
            // 0x186360: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18635c) {
            ctx->pc = 0x186370u;
            goto label_186370;
        }
    }
    ctx->pc = 0x186364u;
    // 0x186364: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x186364u;
    {
        const bool branch_taken_0x186364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186364) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x18636Cu;
    // 0x18636c: 0x0  nop
    ctx->pc = 0x18636cu;
    // NOP
label_186370:
    // 0x186370: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x186370u;
    {
        const bool branch_taken_0x186370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186370u;
            // 0x186374: 0x241200bf  addiu       $s2, $zero, 0xBF (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186370) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x186378u;
label_186378:
    // 0x186378: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x186378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18637c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18637Cu;
    {
        const bool branch_taken_0x18637c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x186380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18637Cu;
            // 0x186380: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18637c) {
            ctx->pc = 0x186390u;
            goto label_186390;
        }
    }
    ctx->pc = 0x186384u;
    // 0x186384: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x186384u;
    {
        const bool branch_taken_0x186384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186384) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x18638Cu;
    // 0x18638c: 0x0  nop
    ctx->pc = 0x18638cu;
    // NOP
label_186390:
    // 0x186390: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x186390u;
    {
        const bool branch_taken_0x186390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186390u;
            // 0x186394: 0x241200c0  addiu       $s2, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186390) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x186398u;
label_186398:
    // 0x186398: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x186398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18639c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18639Cu;
    {
        const bool branch_taken_0x18639c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1863A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18639Cu;
            // 0x1863a0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18639c) {
            ctx->pc = 0x1863B0u;
            goto label_1863b0;
        }
    }
    ctx->pc = 0x1863A4u;
    // 0x1863a4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1863A4u;
    {
        const bool branch_taken_0x1863a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1863a4) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x1863ACu;
    // 0x1863ac: 0x0  nop
    ctx->pc = 0x1863acu;
    // NOP
label_1863b0:
    // 0x1863b0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1863B0u;
    {
        const bool branch_taken_0x1863b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1863B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1863B0u;
            // 0x1863b4: 0x241200dc  addiu       $s2, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863b0) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x1863B8u;
label_1863b8:
    // 0x1863b8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1863b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1863bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1863BCu;
    {
        const bool branch_taken_0x1863bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1863C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1863BCu;
            // 0x1863c0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863bc) {
            ctx->pc = 0x1863D0u;
            goto label_1863d0;
        }
    }
    ctx->pc = 0x1863C4u;
    // 0x1863c4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1863C4u;
    {
        const bool branch_taken_0x1863c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1863c4) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x1863CCu;
    // 0x1863cc: 0x0  nop
    ctx->pc = 0x1863ccu;
    // NOP
label_1863d0:
    // 0x1863d0: 0xc061a14  jal         func_186850
    ctx->pc = 0x1863D0u;
    SET_GPR_U32(ctx, 31, 0x1863D8u);
    ctx->pc = 0x186850u;
    if (runtime->hasFunction(0x186850u)) {
        auto targetFn = runtime->lookupFunction(0x186850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1863D8u; }
        if (ctx->pc != 0x1863D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MemCardFileCheckLight_0x186850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1863D8u; }
        if (ctx->pc != 0x1863D8u) { return; }
    }
    ctx->pc = 0x1863D8u;
    // 0x1863d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1863D8u;
    {
        const bool branch_taken_0x1863d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1863DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1863D8u;
            // 0x1863dc: 0x24120028  addiu       $s2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863d8) {
            ctx->pc = 0x1863E8u;
            goto label_1863e8;
        }
    }
    ctx->pc = 0x1863E0u;
    // 0x1863e0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1863E0u;
    {
        const bool branch_taken_0x1863e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1863e0) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x1863E8u;
label_1863e8:
    // 0x1863e8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1863E8u;
    {
        const bool branch_taken_0x1863e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1863ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1863E8u;
            // 0x1863ec: 0x241200d2  addiu       $s2, $zero, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863e8) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x1863F0u;
label_1863f0:
    // 0x1863f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1863f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1863f4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1863F4u;
    {
        const bool branch_taken_0x1863f4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1863F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1863F4u;
            // 0x1863f8: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863f4) {
            ctx->pc = 0x186408u;
            goto label_186408;
        }
    }
    ctx->pc = 0x1863FCu;
    // 0x1863fc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1863FCu;
    {
        const bool branch_taken_0x1863fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1863fc) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x186404u;
    // 0x186404: 0x0  nop
    ctx->pc = 0x186404u;
    // NOP
label_186408:
    // 0x186408: 0xc061a08  jal         func_186820
    ctx->pc = 0x186408u;
    SET_GPR_U32(ctx, 31, 0x186410u);
    ctx->pc = 0x186820u;
    if (runtime->hasFunction(0x186820u)) {
        auto targetFn = runtime->lookupFunction(0x186820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186410u; }
        if (ctx->pc != 0x186410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MemCardFileCheck_0x186820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186410u; }
        if (ctx->pc != 0x186410u) { return; }
    }
    ctx->pc = 0x186410u;
    // 0x186410: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x186410u;
    {
        const bool branch_taken_0x186410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186410u;
            // 0x186414: 0x3c040043  lui         $a0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186410) {
            ctx->pc = 0x186438u;
            goto label_186438;
        }
    }
    ctx->pc = 0x186418u;
    // 0x186418: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x186418u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x18641c: 0x24841610  addiu       $a0, $a0, 0x1610
    ctx->pc = 0x18641cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5648));
    // 0x186420: 0x24a5b740  addiu       $a1, $a1, -0x48C0
    ctx->pc = 0x186420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948672));
    // 0x186424: 0x240602e0  addiu       $a2, $zero, 0x2E0
    ctx->pc = 0x186424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
    // 0x186428: 0xc04ed22  jal         func_13B488
    ctx->pc = 0x186428u;
    SET_GPR_U32(ctx, 31, 0x186430u);
    ctx->pc = 0x18642Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186428u;
            // 0x18642c: 0x24120104  addiu       $s2, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186430u; }
        if (ctx->pc != 0x186430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186430u; }
        if (ctx->pc != 0x186430u) { return; }
    }
    ctx->pc = 0x186430u;
    // 0x186430: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x186430u;
    {
        const bool branch_taken_0x186430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186430) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x186438u;
label_186438:
    // 0x186438: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x186438u;
    {
        const bool branch_taken_0x186438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18643Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186438u;
            // 0x18643c: 0x241200d2  addiu       $s2, $zero, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186438) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x186440u;
label_186440:
    // 0x186440: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x186440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x186444: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x186444u;
    {
        const bool branch_taken_0x186444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x186448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186444u;
            // 0x186448: 0x241200b5  addiu       $s2, $zero, 0xB5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186444) {
            ctx->pc = 0x186458u;
            goto label_186458;
        }
    }
    ctx->pc = 0x18644Cu;
    // 0x18644c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x18644Cu;
    {
        const bool branch_taken_0x18644c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18644c) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x186454u;
    // 0x186454: 0x0  nop
    ctx->pc = 0x186454u;
    // NOP
label_186458:
    // 0x186458: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x186458u;
    {
        const bool branch_taken_0x186458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18645Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186458u;
            // 0x18645c: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186458) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x186460u;
label_186460:
    // 0x186460: 0x97a40058  lhu         $a0, 0x58($sp)
    ctx->pc = 0x186460u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x186464: 0x34039003  ori         $v1, $zero, 0x9003
    ctx->pc = 0x186464u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)36867u)));
    // 0x186468: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x186468u;
    {
        const bool branch_taken_0x186468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18646Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186468u;
            // 0x18646c: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186468) {
            ctx->pc = 0x186478u;
            goto label_186478;
        }
    }
    ctx->pc = 0x186470u;
    // 0x186470: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x186470u;
    {
        const bool branch_taken_0x186470 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x186470) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x186478u;
label_186478:
    // 0x186478: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x186478u;
    {
        const bool branch_taken_0x186478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18647Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186478u;
            // 0x18647c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186478) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x186480u;
label_186480:
    // 0x186480: 0x97a40058  lhu         $a0, 0x58($sp)
    ctx->pc = 0x186480u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x186484: 0x34039003  ori         $v1, $zero, 0x9003
    ctx->pc = 0x186484u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)36867u)));
    // 0x186488: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x186488u;
    {
        const bool branch_taken_0x186488 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x186488) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x186490u;
    // 0x186490: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x186490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186494: 0x0  nop
    ctx->pc = 0x186494u;
    // NOP
label_186498:
    // 0x186498: 0x1660fb01  bnez        $s3, . + 4 + (-0x4FF << 2)
    ctx->pc = 0x186498u;
    {
        const bool branch_taken_0x186498 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x186498) {
            ctx->pc = 0x1850A0u;
            goto label_1850a0;
        }
    }
    ctx->pc = 0x1864A0u;
    // 0x1864a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1864a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1864a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1864a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1864a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1864a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1864ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1864acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1864b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1864b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1864b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1864B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1864B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1864B4u;
            // 0x1864b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1850A0u: goto label_1850a0;
            case 0x1851C8u: goto label_1851c8;
            case 0x1851D8u: goto label_1851d8;
            case 0x185220u: goto label_185220;
            case 0x185268u: goto label_185268;
            case 0x1852A8u: goto label_1852a8;
            case 0x1852F0u: goto label_1852f0;
            case 0x185300u: goto label_185300;
            case 0x185348u: goto label_185348;
            case 0x185388u: goto label_185388;
            case 0x185398u: goto label_185398;
            case 0x1853C8u: goto label_1853c8;
            case 0x185420u: goto label_185420;
            case 0x185468u: goto label_185468;
            case 0x1854A0u: goto label_1854a0;
            case 0x1854B8u: goto label_1854b8;
            case 0x1854C0u: goto label_1854c0;
            case 0x1854D8u: goto label_1854d8;
            case 0x185530u: goto label_185530;
            case 0x185578u: goto label_185578;
            case 0x1855B0u: goto label_1855b0;
            case 0x1855C8u: goto label_1855c8;
            case 0x1855D0u: goto label_1855d0;
            case 0x1855E8u: goto label_1855e8;
            case 0x185640u: goto label_185640;
            case 0x185688u: goto label_185688;
            case 0x1856C0u: goto label_1856c0;
            case 0x1856D8u: goto label_1856d8;
            case 0x1856E0u: goto label_1856e0;
            case 0x1856F8u: goto label_1856f8;
            case 0x185718u: goto label_185718;
            case 0x185760u: goto label_185760;
            case 0x185770u: goto label_185770;
            case 0x1857A0u: goto label_1857a0;
            case 0x1857D8u: goto label_1857d8;
            case 0x185810u: goto label_185810;
            case 0x185848u: goto label_185848;
            case 0x1858A0u: goto label_1858a0;
            case 0x1858E8u: goto label_1858e8;
            case 0x185920u: goto label_185920;
            case 0x185938u: goto label_185938;
            case 0x185940u: goto label_185940;
            case 0x185950u: goto label_185950;
            case 0x185980u: goto label_185980;
            case 0x185A80u: goto label_185a80;
            case 0x185AC8u: goto label_185ac8;
            case 0x185AF8u: goto label_185af8;
            case 0x185B28u: goto label_185b28;
            case 0x185B58u: goto label_185b58;
            case 0x185B88u: goto label_185b88;
            case 0x185BB8u: goto label_185bb8;
            case 0x185BE8u: goto label_185be8;
            case 0x185C18u: goto label_185c18;
            case 0x185C48u: goto label_185c48;
            case 0x185C78u: goto label_185c78;
            case 0x185CA8u: goto label_185ca8;
            case 0x185CF8u: goto label_185cf8;
            case 0x185D60u: goto label_185d60;
            case 0x185DB0u: goto label_185db0;
            case 0x185E00u: goto label_185e00;
            case 0x185E30u: goto label_185e30;
            case 0x185E60u: goto label_185e60;
            case 0x185EB8u: goto label_185eb8;
            case 0x185EF8u: goto label_185ef8;
            case 0x185F38u: goto label_185f38;
            case 0x185F78u: goto label_185f78;
            case 0x185F98u: goto label_185f98;
            case 0x185FC8u: goto label_185fc8;
            case 0x185FF8u: goto label_185ff8;
            case 0x186020u: goto label_186020;
            case 0x186118u: goto label_186118;
            case 0x186140u: goto label_186140;
            case 0x186178u: goto label_186178;
            case 0x1861A0u: goto label_1861a0;
            case 0x1861C8u: goto label_1861c8;
            case 0x1861E8u: goto label_1861e8;
            case 0x1861F0u: goto label_1861f0;
            case 0x186218u: goto label_186218;
            case 0x186220u: goto label_186220;
            case 0x186248u: goto label_186248;
            case 0x186260u: goto label_186260;
            case 0x186288u: goto label_186288;
            case 0x186290u: goto label_186290;
            case 0x186298u: goto label_186298;
            case 0x1862B8u: goto label_1862b8;
            case 0x1862C0u: goto label_1862c0;
            case 0x1862C8u: goto label_1862c8;
            case 0x1862E8u: goto label_1862e8;
            case 0x1862F0u: goto label_1862f0;
            case 0x1862F8u: goto label_1862f8;
            case 0x186318u: goto label_186318;
            case 0x186320u: goto label_186320;
            case 0x186328u: goto label_186328;
            case 0x186348u: goto label_186348;
            case 0x186350u: goto label_186350;
            case 0x186358u: goto label_186358;
            case 0x186370u: goto label_186370;
            case 0x186378u: goto label_186378;
            case 0x186390u: goto label_186390;
            case 0x186398u: goto label_186398;
            case 0x1863B0u: goto label_1863b0;
            case 0x1863B8u: goto label_1863b8;
            case 0x1863D0u: goto label_1863d0;
            case 0x1863E8u: goto label_1863e8;
            case 0x1863F0u: goto label_1863f0;
            case 0x186408u: goto label_186408;
            case 0x186438u: goto label_186438;
            case 0x186440u: goto label_186440;
            case 0x186458u: goto label_186458;
            case 0x186460u: goto label_186460;
            case 0x186478u: goto label_186478;
            case 0x186480u: goto label_186480;
            case 0x186498u: goto label_186498;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1864BCu;
}
