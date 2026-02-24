#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: initAll
// Address: 0x118e70 - 0x11912c
void initAll_0x118e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("initAll_0x118e70");
#endif

    ctx->pc = 0x118e70u;

    // 0x118e70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x118e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x118e74: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x118e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x118e78: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x118e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x118e7c: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x118e7cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)57344u)));
    // 0x118e80: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x118e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x118e84: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x118e84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x118e88: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x118e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x118e8c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x118e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x118e90: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x118e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x118e94: 0x34c6e010  ori         $a2, $a2, 0xE010
    ctx->pc = 0x118e94u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)57360u)));
    // 0x118e98: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x118e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x118e9c: 0x24b0a000  addiu       $s0, $a1, -0x6000
    ctx->pc = 0x118e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942720));
    // 0x118ea0: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x118ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x118ea4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x118ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x118ea8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x118ea8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118eac: 0x3c140075  lui         $s4, 0x75
    ctx->pc = 0x118eacu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)117 << 16));
    // 0x118eb0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x118eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118eb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118eb8: 0x2693e5c8  addiu       $s3, $s4, -0x1A38
    ctx->pc = 0x118eb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4294960584));
    // 0x118ebc: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x118ebcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)3u)));
    // 0x118ec0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x118ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x118ec4: 0xc046554  jal         func_119550
    ctx->pc = 0x118EC4u;
    SET_GPR_U32(ctx, 31, 0x118ECCu);
    ctx->pc = 0x118EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118EC4u;
            // 0x118ec8: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119550u;
    if (runtime->hasFunction(0x119550u)) {
        auto targetFn = runtime->lookupFunction(0x119550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118ECCu; }
        if (ctx->pc != 0x118ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        readBufCreate_0x119550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118ECCu; }
        if (ctx->pc != 0x118ECCu) { return; }
    }
    ctx->pc = 0x118ECCu;
    // 0x118ecc: 0xc047c96  jal         func_11F258
    ctx->pc = 0x118ECCu;
    SET_GPR_U32(ctx, 31, 0x118ED4u);
    ctx->pc = 0x11F258u;
    if (runtime->hasFunction(0x11F258u)) {
        auto targetFn = runtime->lookupFunction(0x11F258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118ED4u; }
        if (ctx->pc != 0x118ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegInit_0x11f258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118ED4u; }
        if (ctx->pc != 0x118ED4u) { return; }
    }
    ctx->pc = 0x118ED4u;
    // 0x118ed4: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x118ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
    // 0x118ed8: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x118ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x118edc: 0x3c08004d  lui         $t0, 0x4D
    ctx->pc = 0x118edcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)77 << 16));
    // 0x118ee0: 0x3c0a0075  lui         $t2, 0x75
    ctx->pc = 0x118ee0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)117 << 16));
    // 0x118ee4: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x118ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x118ee8: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x118ee8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x118eec: 0x240b0200  addiu       $t3, $zero, 0x200
    ctx->pc = 0x118eecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x118ef0: 0x254aa040  addiu       $t2, $t2, -0x5FC0
    ctx->pc = 0x118ef0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294942784));
    // 0x118ef4: 0x24a54000  addiu       $a1, $a1, 0x4000
    ctx->pc = 0x118ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
    // 0x118ef8: 0x24e76040  addiu       $a3, $a3, 0x6040
    ctx->pc = 0x118ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24640));
    // 0x118efc: 0x25082fc0  addiu       $t0, $t0, 0x2FC0
    ctx->pc = 0x118efcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12224));
    // 0x118f00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x118f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f04: 0xc0467ec  jal         func_119FB0
    ctx->pc = 0x118F04u;
    SET_GPR_U32(ctx, 31, 0x118F0Cu);
    ctx->pc = 0x118F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118F04u;
            // 0x118f08: 0x34c65800  ori         $a2, $a2, 0x5800 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)22528u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119FB0u;
    if (runtime->hasFunction(0x119FB0u)) {
        auto targetFn = runtime->lookupFunction(0x119FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118F0Cu; }
        if (ctx->pc != 0x118F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecCreate_0x119fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118F0Cu; }
        if (ctx->pc != 0x118F0Cu) { return; }
    }
    ctx->pc = 0x118F0Cu;
    // 0x118f0c: 0xc045c30  jal         func_1170C0
    ctx->pc = 0x118F0Cu;
    SET_GPR_U32(ctx, 31, 0x118F14u);
    ctx->pc = 0x1170C0u;
    if (runtime->hasFunction(0x1170C0u)) {
        auto targetFn = runtime->lookupFunction(0x1170C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118F14u; }
        if (ctx->pc != 0x118F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemoteInit_0x1170c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118F14u; }
        if (ctx->pc != 0x118F14u) { return; }
    }
    ctx->pc = 0x118F14u;
    // 0x118f14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x118f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118f18: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x118f18u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x118f1c: 0xc045c80  jal         func_117200
    ctx->pc = 0x118F1Cu;
    SET_GPR_U32(ctx, 31, 0x118F24u);
    ctx->pc = 0x118F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118F1Cu;
            // 0x118f20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118F24u; }
        if (ctx->pc != 0x118F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118F24u; }
        if (ctx->pc != 0x118F24u) { return; }
    }
    ctx->pc = 0x118F24u;
    // 0x118f24: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x118f24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x118f28: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x118f28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x118f2c: 0x2484e568  addiu       $a0, $a0, -0x1A98
    ctx->pc = 0x118f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960488));
    // 0x118f30: 0x24a5a040  addiu       $a1, $a1, -0x5FC0
    ctx->pc = 0x118f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942784));
    // 0x118f34: 0x3406c000  ori         $a2, $zero, 0xC000
    ctx->pc = 0x118f34u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)49152u)));
    // 0x118f38: 0xc046598  jal         func_119660
    ctx->pc = 0x118F38u;
    SET_GPR_U32(ctx, 31, 0x118F40u);
    ctx->pc = 0x118F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118F38u;
            // 0x118f3c: 0x24076000  addiu       $a3, $zero, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119660u;
    if (runtime->hasFunction(0x119660u)) {
        auto targetFn = runtime->lookupFunction(0x119660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118F40u; }
        if (ctx->pc != 0x118F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        audioDecCreate_0x119660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118F40u; }
        if (ctx->pc != 0x118F40u) { return; }
    }
    ctx->pc = 0x118F40u;
    // 0x118f40: 0x3c070012  lui         $a3, 0x12
    ctx->pc = 0x118f40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)18 << 16));
    // 0x118f44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x118f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f48: 0x24e79220  addiu       $a3, $a3, -0x6DE0
    ctx->pc = 0x118f48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939168));
    // 0x118f4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x118f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x118f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f54: 0xc04682e  jal         func_11A0B8
    ctx->pc = 0x118F54u;
    SET_GPR_U32(ctx, 31, 0x118F5Cu);
    ctx->pc = 0x118F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118F54u;
            // 0x118f58: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A0B8u;
    if (runtime->hasFunction(0x11A0B8u)) {
        auto targetFn = runtime->lookupFunction(0x11A0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118F5Cu; }
        if (ctx->pc != 0x118F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecSetStream_0x11a0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118F5Cu; }
        if (ctx->pc != 0x118F5Cu) { return; }
    }
    ctx->pc = 0x118F5Cu;
    // 0x118f5c: 0x8f838410  lw          $v1, -0x7BF0($gp)
    ctx->pc = 0x118f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935568)));
    // 0x118f60: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x118F60u;
    {
        const bool branch_taken_0x118f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118F60u;
            // 0x118f64: 0x3c070012  lui         $a3, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)18 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f60) {
            ctx->pc = 0x118F80u;
            goto label_118f80;
        }
    }
    ctx->pc = 0x118F68u;
    // 0x118f68: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x118f68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f6c: 0x24e79340  addiu       $a3, $a3, -0x6CC0
    ctx->pc = 0x118f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939456));
    // 0x118f70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x118f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f74: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x118f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x118f78: 0xc04682e  jal         func_11A0B8
    ctx->pc = 0x118F78u;
    SET_GPR_U32(ctx, 31, 0x118F80u);
    ctx->pc = 0x118F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118F78u;
            // 0x118f7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A0B8u;
    if (runtime->hasFunction(0x11A0B8u)) {
        auto targetFn = runtime->lookupFunction(0x11A0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118F80u; }
        if (ctx->pc != 0x118F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecSetStream_0x11a0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118F80u; }
        if (ctx->pc != 0x118F80u) { return; }
    }
    ctx->pc = 0x118F80u;
label_118f80:
    // 0x118f80: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x118f80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x118f84: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x118f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x118f88: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x118f88u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)32768u)));
    // 0x118f8c: 0xc0462ca  jal         func_118B28
    ctx->pc = 0x118F8Cu;
    SET_GPR_U32(ctx, 31, 0x118F94u);
    ctx->pc = 0x118F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118F8Cu;
            // 0x118f90: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118B28u;
    if (runtime->hasFunction(0x118B28u)) {
        auto targetFn = runtime->lookupFunction(0x118B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118F94u; }
        if (ctx->pc != 0x118F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bigmemalign_0x118b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118F94u; }
        if (ctx->pc != 0x118F94u) { return; }
    }
    ctx->pc = 0x118F94u;
    // 0x118f94: 0x3c100018  lui         $s0, 0x18
    ctx->pc = 0x118f94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)24 << 16));
    // 0x118f98: 0x2610daf0  addiu       $s0, $s0, -0x2510
    ctx->pc = 0x118f98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957808));
    // 0x118f9c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x118f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x118fa0: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x118fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x118fa4: 0xaf8284b8  sw          $v0, -0x7B48($gp)
    ctx->pc = 0x118fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935736), GPR_U32(ctx, 2));
    // 0x118fa8: 0x24844420  addiu       $a0, $a0, 0x4420
    ctx->pc = 0x118fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17440));
    // 0x118fac: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x118FACu;
    SET_GPR_U32(ctx, 31, 0x118FB4u);
    ctx->pc = 0x118FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118FACu;
            // 0x118fb0: 0x34a58000  ori         $a1, $a1, 0x8000 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)32768u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118FB4u; }
        if (ctx->pc != 0x118FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118FB4u; }
        if (ctx->pc != 0x118FB4u) { return; }
    }
    ctx->pc = 0x118FB4u;
    // 0x118fb4: 0x8f8584b8  lw          $a1, -0x7B48($gp)
    ctx->pc = 0x118fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935736)));
    // 0x118fb8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x118fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x118fbc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x118fbcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x118fc0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x118fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x118fc4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x118fc4u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x118fc8: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x118fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x118fcc: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x118fccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x118fd0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x118fd0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x118fd4: 0x2484e518  addiu       $a0, $a0, -0x1AE8
    ctx->pc = 0x118fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960408));
    // 0x118fd8: 0x24c6c380  addiu       $a2, $a2, -0x3C80
    ctx->pc = 0x118fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951808));
    // 0x118fdc: 0xc046a34  jal         func_11A8D0
    ctx->pc = 0x118FDCu;
    SET_GPR_U32(ctx, 31, 0x118FE4u);
    ctx->pc = 0x118FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118FDCu;
            // 0x118fe0: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A8D0u;
    if (runtime->hasFunction(0x11A8D0u)) {
        auto targetFn = runtime->lookupFunction(0x11A8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118FE4u; }
        if (ctx->pc != 0x118FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        voBufCreate_0x11a8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118FE4u; }
        if (ctx->pc != 0x118FE4u) { return; }
    }
    ctx->pc = 0x118FE4u;
    // 0x118fe4: 0x3c030012  lui         $v1, 0x12
    ctx->pc = 0x118fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18 << 16));
    // 0x118fe8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x118fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x118fec: 0x246391d0  addiu       $v1, $v1, -0x6E30
    ctx->pc = 0x118fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939088));
    // 0x118ff0: 0x24429800  addiu       $v0, $v0, -0x6800
    ctx->pc = 0x118ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940672));
    // 0x118ff4: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x118ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x118ff8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x118ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x118ffc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x118ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x119000: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x119000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119004: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x119004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x119008: 0xafb10014  sw          $s1, 0x14($sp)
    ctx->pc = 0x119008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 17));
    // 0x11900c: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x11900cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x119010: 0xc043828  jal         func_10E0A0
    ctx->pc = 0x119010u;
    SET_GPR_U32(ctx, 31, 0x119018u);
    ctx->pc = 0x119014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119010u;
            // 0x119014: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E0A0u;
    if (runtime->hasFunction(0x10E0A0u)) {
        auto targetFn = runtime->lookupFunction(0x10E0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119018u; }
        if (ctx->pc != 0x119018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateThread_0x10e0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119018u; }
        if (ctx->pc != 0x119018u) { return; }
    }
    ctx->pc = 0x119018u;
    // 0x119018: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x119018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11901c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11901cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119020: 0xc043830  jal         func_10E0C0
    ctx->pc = 0x119020u;
    SET_GPR_U32(ctx, 31, 0x119028u);
    ctx->pc = 0x119024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119020u;
            // 0x119024: 0xaf8284c0  sw          $v0, -0x7B40($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935744), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E0C0u;
    if (runtime->hasFunction(0x10E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x10E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119028u; }
        if (ctx->pc != 0x119028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartThread_0x10e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119028u; }
        if (ctx->pc != 0x119028u) { return; }
    }
    ctx->pc = 0x119028u;
    // 0x119028: 0x3c030012  lui         $v1, 0x12
    ctx->pc = 0x119028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18 << 16));
    // 0x11902c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x11902cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x119030: 0x2463a308  addiu       $v1, $v1, -0x5CF8
    ctx->pc = 0x119030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943496));
    // 0x119034: 0x24426040  addiu       $v0, $v0, 0x6040
    ctx->pc = 0x119034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24640));
    // 0x119038: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x119038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x11903c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x11903cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x119040: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x119040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x119044: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x119044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119048: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x119048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x11904c: 0xafb10014  sw          $s1, 0x14($sp)
    ctx->pc = 0x11904cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 17));
    // 0x119050: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x119050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x119054: 0xc043828  jal         func_10E0A0
    ctx->pc = 0x119054u;
    SET_GPR_U32(ctx, 31, 0x11905Cu);
    ctx->pc = 0x119058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119054u;
            // 0x119058: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E0A0u;
    if (runtime->hasFunction(0x10E0A0u)) {
        auto targetFn = runtime->lookupFunction(0x10E0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11905Cu; }
        if (ctx->pc != 0x11905Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateThread_0x10e0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11905Cu; }
        if (ctx->pc != 0x11905Cu) { return; }
    }
    ctx->pc = 0x11905Cu;
    // 0x11905c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11905cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119060: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119064: 0xc043830  jal         func_10E0C0
    ctx->pc = 0x119064u;
    SET_GPR_U32(ctx, 31, 0x11906Cu);
    ctx->pc = 0x119068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119064u;
            // 0x119068: 0xaf8284c4  sw          $v0, -0x7B3C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935748), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E0C0u;
    if (runtime->hasFunction(0x10E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x10E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11906Cu; }
        if (ctx->pc != 0x11906Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartThread_0x10e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11906Cu; }
        if (ctx->pc != 0x11906Cu) { return; }
    }
    ctx->pc = 0x11906Cu;
    // 0x11906c: 0x8f838428  lw          $v1, -0x7BD8($gp)
    ctx->pc = 0x11906cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935592)));
    // 0x119070: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x119070u;
    {
        const bool branch_taken_0x119070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x119070) {
            ctx->pc = 0x119074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x119070u;
            // 0x119074: 0xaf808428  sw          $zero, -0x7BD8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x119078u;
            goto label_119078;
        }
    }
    ctx->pc = 0x119078u;
label_119078:
    // 0x119078: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x119078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11907c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11907Cu;
    {
        const bool branch_taken_0x11907c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11907Cu;
            // 0x119080: 0x3c110075  lui         $s1, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11907c) {
            ctx->pc = 0x1190B4u;
            goto label_1190b4;
        }
    }
    ctx->pc = 0x119084u;
    // 0x119084: 0x0  nop
    ctx->pc = 0x119084u;
    // NOP
label_119088:
    // 0x119088: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x119088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x11908c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11908cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119090: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x119090u;
    SET_GPR_U32(ctx, 31, 0x119098u);
    ctx->pc = 0x119094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119090u;
            // 0x119094: 0x24844430  addiu       $a0, $a0, 0x4430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119098u; }
        if (ctx->pc != 0x119098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119098u; }
        if (ctx->pc != 0x119098u) { return; }
    }
    ctx->pc = 0x119098u;
    // 0x119098: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x119098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11909c: 0x16030005  bne         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11909Cu;
    {
        const bool branch_taken_0x11909c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1190A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11909Cu;
            // 0x1190a0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11909c) {
            ctx->pc = 0x1190B4u;
            goto label_1190b4;
        }
    }
    ctx->pc = 0x1190A4u;
    // 0x1190a4: 0xc04644c  jal         func_119130
    ctx->pc = 0x1190A4u;
    SET_GPR_U32(ctx, 31, 0x1190ACu);
    ctx->pc = 0x119130u;
    if (runtime->hasFunction(0x119130u)) {
        auto targetFn = runtime->lookupFunction(0x119130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1190ACu; }
        if (ctx->pc != 0x1190ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        termAll_0x119130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1190ACu; }
        if (ctx->pc != 0x1190ACu) { return; }
    }
    ctx->pc = 0x1190ACu;
    // 0x1190ac: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1190ACu;
    {
        const bool branch_taken_0x1190ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1190B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1190ACu;
            // 0x1190b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1190ac) {
            ctx->pc = 0x11910Cu;
            goto label_11910c;
        }
    }
    ctx->pc = 0x1190B4u;
label_1190b4:
    // 0x1190b4: 0x2624e680  addiu       $a0, $s1, -0x1980
    ctx->pc = 0x1190b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294960768));
    // 0x1190b8: 0xc046f14  jal         func_11BC50
    ctx->pc = 0x1190B8u;
    SET_GPR_U32(ctx, 31, 0x1190C0u);
    ctx->pc = 0x1190BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1190B8u;
            // 0x1190bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11BC50u;
    if (runtime->hasFunction(0x11BC50u)) {
        auto targetFn = runtime->lookupFunction(0x11BC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1190C0u; }
        if (ctx->pc != 0x1190C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strFileOpen_0x11bc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1190C0u; }
        if (ctx->pc != 0x1190C0u) { return; }
    }
    ctx->pc = 0x1190C0u;
    // 0x1190c0: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1190C0u;
    {
        const bool branch_taken_0x1190c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1190C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1190C0u;
            // 0x1190c4: 0x3c050012  lui         $a1, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1190c0) {
            ctx->pc = 0x119088u;
            goto label_119088;
        }
    }
    ctx->pc = 0x1190C8u;
    // 0x1190c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1190c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1190cc: 0x24a5baa0  addiu       $a1, $a1, -0x4560
    ctx->pc = 0x1190ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949536));
    // 0x1190d0: 0xc0437e0  jal         func_10DF80
    ctx->pc = 0x1190D0u;
    SET_GPR_U32(ctx, 31, 0x1190D8u);
    ctx->pc = 0x1190D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1190D0u;
            // 0x1190d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DF80u;
    if (runtime->hasFunction(0x10DF80u)) {
        auto targetFn = runtime->lookupFunction(0x10DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1190D8u; }
        if (ctx->pc != 0x1190D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddIntcHandler_0x10df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1190D8u; }
        if (ctx->pc != 0x1190D8u) { return; }
    }
    ctx->pc = 0x1190D8u;
    // 0x1190d8: 0x2690e5c8  addiu       $s0, $s4, -0x1A38
    ctx->pc = 0x1190d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294960584));
    // 0x1190dc: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x1190dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
    // 0x1190e0: 0xc043aac  jal         func_10EAB0
    ctx->pc = 0x1190E0u;
    SET_GPR_U32(ctx, 31, 0x1190E8u);
    ctx->pc = 0x1190E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1190E0u;
            // 0x1190e4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EAB0u;
    if (runtime->hasFunction(0x10EAB0u)) {
        auto targetFn = runtime->lookupFunction(0x10EAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1190E8u; }
        if (ctx->pc != 0x1190E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableIntc_0x10eab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1190E8u; }
        if (ctx->pc != 0x1190E8u) { return; }
    }
    ctx->pc = 0x1190E8u;
    // 0x1190e8: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x1190e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x1190ec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1190ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1190f0: 0x24a5bbc8  addiu       $a1, $a1, -0x4438
    ctx->pc = 0x1190f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949832));
    // 0x1190f4: 0xc0437ec  jal         func_10DFB0
    ctx->pc = 0x1190F4u;
    SET_GPR_U32(ctx, 31, 0x1190FCu);
    ctx->pc = 0x1190F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1190F4u;
            // 0x1190f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DFB0u;
    if (runtime->hasFunction(0x10DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x10DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1190FCu; }
        if (ctx->pc != 0x1190FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddDmacHandler_0x10dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1190FCu; }
        if (ctx->pc != 0x1190FCu) { return; }
    }
    ctx->pc = 0x1190FCu;
    // 0x1190fc: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x1190fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x119100: 0xc043ae0  jal         func_10EB80
    ctx->pc = 0x119100u;
    SET_GPR_U32(ctx, 31, 0x119108u);
    ctx->pc = 0x119104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119100u;
            // 0x119104: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EB80u;
    if (runtime->hasFunction(0x10EB80u)) {
        auto targetFn = runtime->lookupFunction(0x10EB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119108u; }
        if (ctx->pc != 0x119108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableDmac_0x10eb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119108u; }
        if (ctx->pc != 0x119108u) { return; }
    }
    ctx->pc = 0x119108u;
    // 0x119108: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x119108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11910c:
    // 0x11910c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x11910cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x119110: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x119110u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x119114: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x119114u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x119118: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x119118u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11911c: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x11911cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119120: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x119120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119124: 0x3e00008  jr          $ra
    ctx->pc = 0x119124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119124u;
            // 0x119128: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118F80u: goto label_118f80;
            case 0x119078u: goto label_119078;
            case 0x119088u: goto label_119088;
            case 0x1190B4u: goto label_1190b4;
            case 0x11910Cu: goto label_11910c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11912Cu;
}
