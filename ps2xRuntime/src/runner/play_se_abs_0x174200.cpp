#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: play_se_abs
// Address: 0x174200 - 0x1742ec
void play_se_abs_0x174200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("play_se_abs_0x174200");
#endif

    ctx->pc = 0x174200u;

    // 0x174200: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x174200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x174204: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x174204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x174208: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x174208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17420c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17420cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x174210: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x174210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x174214: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x174214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174218: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x174218u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x17421c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x17421cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x174220: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x174220u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x174224: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x174224u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x174228: 0xc05cad0  jal         func_172B40
    ctx->pc = 0x174228u;
    SET_GPR_U32(ctx, 31, 0x174230u);
    ctx->pc = 0x17422Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174228u;
            // 0x17422c: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x172B40u;
    if (runtime->hasFunction(0x172B40u)) {
        auto targetFn = runtime->lookupFunction(0x172B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174230u; }
        if (ctx->pc != 0x174230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_FindFreeSPUChannel_0x172b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174230u; }
        if (ctx->pc != 0x174230u) { return; }
    }
    ctx->pc = 0x174230u;
    // 0x174230: 0xc065cf4  jal         func_1973D0
    ctx->pc = 0x174230u;
    SET_GPR_U32(ctx, 31, 0x174238u);
    ctx->pc = 0x174234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174230u;
            // 0x174234: 0x3050ffff  andi        $s0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1973D0u;
    if (runtime->hasFunction(0x1973D0u)) {
        auto targetFn = runtime->lookupFunction(0x1973D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174238u; }
        if (ctx->pc != 0x174238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSoundType_0x1973d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174238u; }
        if (ctx->pc != 0x174238u) { return; }
    }
    ctx->pc = 0x174238u;
    // 0x174238: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x174238u;
    {
        const bool branch_taken_0x174238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17423Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174238u;
            // 0x17423c: 0x3203ffff  andi        $v1, $s0, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174238) {
            ctx->pc = 0x174280u;
            goto label_174280;
        }
    }
    ctx->pc = 0x174240u;
    // 0x174240: 0x4600023  bltz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x174240u;
    {
        const bool branch_taken_0x174240 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x174244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174240u;
            // 0x174244: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x174240) {
            ctx->pc = 0x1742D0u;
            goto label_1742d0;
        }
    }
    ctx->pc = 0x174248u;
    // 0x174248: 0x27a4004e  addiu       $a0, $sp, 0x4E
    ctx->pc = 0x174248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 78));
    // 0x17424c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x17424cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x174250: 0xc05d0bc  jal         func_1742F0
    ctx->pc = 0x174250u;
    SET_GPR_U32(ctx, 31, 0x174258u);
    ctx->pc = 0x174254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174250u;
            // 0x174254: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1742F0u;
    if (runtime->hasFunction(0x1742F0u)) {
        auto targetFn = runtime->lookupFunction(0x1742F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174258u; }
        if (ctx->pc != 0x174258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSoundScale_0x1742f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174258u; }
        if (ctx->pc != 0x174258u) { return; }
    }
    ctx->pc = 0x174258u;
    // 0x174258: 0x97a6004e  lhu         $a2, 0x4E($sp)
    ctx->pc = 0x174258u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 78)));
    // 0x17425c: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x17425cu;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)65535u)));
    // 0x174260: 0x97a7004c  lhu         $a3, 0x4C($sp)
    ctx->pc = 0x174260u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x174264: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x174264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174268: 0x24080800  addiu       $t0, $zero, 0x800
    ctx->pc = 0x174268u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x17426c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17426cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174270: 0xc05cd90  jal         func_173640
    ctx->pc = 0x174270u;
    SET_GPR_U32(ctx, 31, 0x174278u);
    ctx->pc = 0x174274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174270u;
            // 0x174274: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173640u;
    if (runtime->hasFunction(0x173640u)) {
        auto targetFn = runtime->lookupFunction(0x173640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174278u; }
        if (ctx->pc != 0x174278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_PlaySFX_0x173640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174278u; }
        if (ctx->pc != 0x174278u) { return; }
    }
    ctx->pc = 0x174278u;
    // 0x174278: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x174278u;
    {
        const bool branch_taken_0x174278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174278) {
            ctx->pc = 0x1742D0u;
            goto label_1742d0;
        }
    }
    ctx->pc = 0x174280u;
label_174280:
    // 0x174280: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x174280u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)65535u)));
    // 0x174284: 0x4600012  bltz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x174284u;
    {
        const bool branch_taken_0x174284 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x174288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174284u;
            // 0x174288: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x174284) {
            ctx->pc = 0x1742D0u;
            goto label_1742d0;
        }
    }
    ctx->pc = 0x17428Cu;
    // 0x17428c: 0x27a4004e  addiu       $a0, $sp, 0x4E
    ctx->pc = 0x17428cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 78));
    // 0x174290: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x174290u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x174294: 0xc05d0bc  jal         func_1742F0
    ctx->pc = 0x174294u;
    SET_GPR_U32(ctx, 31, 0x17429Cu);
    ctx->pc = 0x174298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174294u;
            // 0x174298: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1742F0u;
    if (runtime->hasFunction(0x1742F0u)) {
        auto targetFn = runtime->lookupFunction(0x1742F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17429Cu; }
        if (ctx->pc != 0x17429Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSoundScale_0x1742f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17429Cu; }
        if (ctx->pc != 0x17429Cu) { return; }
    }
    ctx->pc = 0x17429Cu;
    // 0x17429c: 0x97a3004e  lhu         $v1, 0x4E($sp)
    ctx->pc = 0x17429cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 78)));
    // 0x1742a0: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x1742a0u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)65535u)));
    // 0x1742a4: 0x97a2004c  lhu         $v0, 0x4C($sp)
    ctx->pc = 0x1742a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1742a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1742a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1742ac: 0x24080800  addiu       $t0, $zero, 0x800
    ctx->pc = 0x1742acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1742b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1742b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1742b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1742b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1742b8: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1742b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1742bc: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1742bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1742c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1742c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1742c4: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x1742c4u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x1742c8: 0xc05cd90  jal         func_173640
    ctx->pc = 0x1742C8u;
    SET_GPR_U32(ctx, 31, 0x1742D0u);
    ctx->pc = 0x1742CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1742C8u;
            // 0x1742cc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173640u;
    if (runtime->hasFunction(0x173640u)) {
        auto targetFn = runtime->lookupFunction(0x173640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1742D0u; }
        if (ctx->pc != 0x1742D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_PlaySFX_0x173640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1742D0u; }
        if (ctx->pc != 0x1742D0u) { return; }
    }
    ctx->pc = 0x1742D0u;
label_1742d0:
    // 0x1742d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1742d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1742d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1742d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1742d8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1742d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1742dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1742dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1742e0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1742e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1742e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1742E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1742E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1742E4u;
            // 0x1742e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174280u: goto label_174280;
            case 0x1742D0u: goto label_1742d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1742ECu;
}
