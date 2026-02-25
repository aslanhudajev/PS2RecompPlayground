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
// Address: 0x1881f0 - 0x1884b0
void initAll_0x1881f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("initAll_0x1881f0");
#endif

    ctx->pc = 0x1881f0u;

    // 0x1881f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1881f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1881f4: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1881f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1881f8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1881f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1881fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1881fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x188200: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x188200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x188204: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x188204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x188208: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x188208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18820c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x18820cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188210: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x188210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x188214: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x188214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x188218: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x188218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18821c: 0x2484ff40  addiu       $a0, $a0, -0xC0
    ctx->pc = 0x18821cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967104));
    // 0x188220: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x188220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x188224: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x188224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x188228: 0x8c23e000  lw          $v1, -0x2000($at)
    ctx->pc = 0x188228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959104)));
    // 0x18822c: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x18822cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)3u)));
    // 0x188230: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x188230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x188234: 0xac23e000  sw          $v1, -0x2000($at)
    ctx->pc = 0x188234u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294959104), GPR_U32(ctx, 3)); // MMIO: 0x1000e000
    // 0x188238: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x188238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x18823c: 0xc062394  jal         func_188E50
    ctx->pc = 0x18823Cu;
    SET_GPR_U32(ctx, 31, 0x188244u);
    ctx->pc = 0x188240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18823Cu;
            // 0x188240: 0xac22e010  sw          $v0, -0x1FF0($at) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294959120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188E50u;
    if (runtime->hasFunction(0x188E50u)) {
        auto targetFn = runtime->lookupFunction(0x188E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188244u; }
        if (ctx->pc != 0x188244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        readBufCreate_0x188e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188244u; }
        if (ctx->pc != 0x188244u) { return; }
    }
    ctx->pc = 0x188244u;
    // 0x188244: 0xc04acb6  jal         func_12B2D8
    ctx->pc = 0x188244u;
    SET_GPR_U32(ctx, 31, 0x18824Cu);
    ctx->pc = 0x12B2D8u;
    if (runtime->hasFunction(0x12B2D8u)) {
        auto targetFn = runtime->lookupFunction(0x12B2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18824Cu; }
        if (ctx->pc != 0x18824Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegInit_0x12b2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18824Cu; }
        if (ctx->pc != 0x18824Cu) { return; }
    }
    ctx->pc = 0x18824Cu;
    // 0x18824c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x18824cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x188250: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x188250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x188254: 0x8c25cb18  lw          $a1, -0x34E8($at)
    ctx->pc = 0x188254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953752)));
    // 0x188258: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x188258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x18825c: 0x3c0a003b  lui         $t2, 0x3B
    ctx->pc = 0x18825cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)59 << 16));
    // 0x188260: 0x2484fe00  addiu       $a0, $a0, -0x200
    ctx->pc = 0x188260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966784));
    // 0x188264: 0x3446916c  ori         $a2, $v0, 0x916C
    ctx->pc = 0x188264u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)37228u)));
    // 0x188268: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x188268u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x18826c: 0x254acb40  addiu       $t2, $t2, -0x34C0
    ctx->pc = 0x18826cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294953792));
    // 0x188270: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x188270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x188274: 0x8c27cb00  lw          $a3, -0x3500($at)
    ctx->pc = 0x188274u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953728)));
    // 0x188278: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x188278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18827c: 0x8c28cb20  lw          $t0, -0x34E0($at)
    ctx->pc = 0x18827cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953760)));
    // 0x188280: 0xc062a7c  jal         func_18A9F0
    ctx->pc = 0x188280u;
    SET_GPR_U32(ctx, 31, 0x188288u);
    ctx->pc = 0x188284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188280u;
            // 0x188284: 0x240b0200  addiu       $t3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A9F0u;
    if (runtime->hasFunction(0x18A9F0u)) {
        auto targetFn = runtime->lookupFunction(0x18A9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188288u; }
        if (ctx->pc != 0x188288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecCreate_0x18a9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188288u; }
        if (ctx->pc != 0x188288u) { return; }
    }
    ctx->pc = 0x188288u;
    // 0x188288: 0xc04b562  jal         func_12D588
    ctx->pc = 0x188288u;
    SET_GPR_U32(ctx, 31, 0x188290u);
    ctx->pc = 0x12D588u;
    if (runtime->hasFunction(0x12D588u)) {
        auto targetFn = runtime->lookupFunction(0x12D588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188290u; }
        if (ctx->pc != 0x188290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemoteInit_0x12d588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188290u; }
        if (ctx->pc != 0x188290u) { return; }
    }
    ctx->pc = 0x188290u;
    // 0x188290: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188294: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x188294u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x188298: 0xc04b5b2  jal         func_12D6C8
    ctx->pc = 0x188298u;
    SET_GPR_U32(ctx, 31, 0x1882A0u);
    ctx->pc = 0x18829Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188298u;
            // 0x18829c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D6C8u;
    if (runtime->hasFunction(0x12D6C8u)) {
        auto targetFn = runtime->lookupFunction(0x12D6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1882A0u; }
        if (ctx->pc != 0x1882A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x12d6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1882A0u; }
        if (ctx->pc != 0x1882A0u) { return; }
    }
    ctx->pc = 0x1882A0u;
    // 0x1882a0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1882a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1882a4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1882a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1882a8: 0x8c25cb08  lw          $a1, -0x34F8($at)
    ctx->pc = 0x1882a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953736)));
    // 0x1882ac: 0x24066000  addiu       $a2, $zero, 0x6000
    ctx->pc = 0x1882acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x1882b0: 0x2484fda0  addiu       $a0, $a0, -0x260
    ctx->pc = 0x1882b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966688));
    // 0x1882b4: 0xc061dd4  jal         func_187750
    ctx->pc = 0x1882B4u;
    SET_GPR_U32(ctx, 31, 0x1882BCu);
    ctx->pc = 0x1882B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1882B4u;
            // 0x1882b8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187750u;
    if (runtime->hasFunction(0x187750u)) {
        auto targetFn = runtime->lookupFunction(0x187750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1882BCu; }
        if (ctx->pc != 0x1882BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        audioDecCreate_0x187750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1882BCu; }
        if (ctx->pc != 0x1882BCu) { return; }
    }
    ctx->pc = 0x1882BCu;
    // 0x1882bc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1882bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1882c0: 0x3c070019  lui         $a3, 0x19
    ctx->pc = 0x1882c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25 << 16));
    // 0x1882c4: 0x3c08003b  lui         $t0, 0x3B
    ctx->pc = 0x1882c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)59 << 16));
    // 0x1882c8: 0x2484fe00  addiu       $a0, $a0, -0x200
    ctx->pc = 0x1882c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966784));
    // 0x1882cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1882ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1882d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1882d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1882d4: 0x24e78ba0  addiu       $a3, $a3, -0x7460
    ctx->pc = 0x1882d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937504));
    // 0x1882d8: 0xc062a74  jal         func_18A9D0
    ctx->pc = 0x1882D8u;
    SET_GPR_U32(ctx, 31, 0x1882E0u);
    ctx->pc = 0x1882DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1882D8u;
            // 0x1882dc: 0x2508ff40  addiu       $t0, $t0, -0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A9D0u;
    if (runtime->hasFunction(0x18A9D0u)) {
        auto targetFn = runtime->lookupFunction(0x18A9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1882E0u; }
        if (ctx->pc != 0x1882E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecSetStream_0x18a9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1882E0u; }
        if (ctx->pc != 0x1882E0u) { return; }
    }
    ctx->pc = 0x1882E0u;
    // 0x1882e0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1882e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1882e4: 0x8c22a4c0  lw          $v0, -0x5B40($at)
    ctx->pc = 0x1882e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943936)));
    // 0x1882e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1882E8u;
    {
        const bool branch_taken_0x1882e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1882ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1882E8u;
            // 0x1882ec: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1882e8) {
            ctx->pc = 0x188310u;
            goto label_188310;
        }
    }
    ctx->pc = 0x1882F0u;
    // 0x1882f0: 0x3c070019  lui         $a3, 0x19
    ctx->pc = 0x1882f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25 << 16));
    // 0x1882f4: 0x3c08003b  lui         $t0, 0x3B
    ctx->pc = 0x1882f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)59 << 16));
    // 0x1882f8: 0x2484fe00  addiu       $a0, $a0, -0x200
    ctx->pc = 0x1882f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966784));
    // 0x1882fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1882fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188300: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x188300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188304: 0x24e78ad0  addiu       $a3, $a3, -0x7530
    ctx->pc = 0x188304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937296));
    // 0x188308: 0xc062a74  jal         func_18A9D0
    ctx->pc = 0x188308u;
    SET_GPR_U32(ctx, 31, 0x188310u);
    ctx->pc = 0x18830Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188308u;
            // 0x18830c: 0x2508ff40  addiu       $t0, $t0, -0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A9D0u;
    if (runtime->hasFunction(0x18A9D0u)) {
        auto targetFn = runtime->lookupFunction(0x18A9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188310u; }
        if (ctx->pc != 0x188310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecSetStream_0x18a9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188310u; }
        if (ctx->pc != 0x188310u) { return; }
    }
    ctx->pc = 0x188310u;
label_188310:
    // 0x188310: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x188310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x188314: 0xc061ecc  jal         func_187B30
    ctx->pc = 0x188314u;
    SET_GPR_U32(ctx, 31, 0x18831Cu);
    ctx->pc = 0x188318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188314u;
            // 0x188318: 0x8c24cb30  lw          $a0, -0x34D0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187B30u;
    if (runtime->hasFunction(0x187B30u)) {
        auto targetFn = runtime->lookupFunction(0x187B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18831Cu; }
        if (ctx->pc != 0x18831Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UncAddr_0x187b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18831Cu; }
        if (ctx->pc != 0x18831Cu) { return; }
    }
    ctx->pc = 0x18831Cu;
    // 0x18831c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x18831cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x188320: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x188320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x188324: 0x8c26cb28  lw          $a2, -0x34D8($at)
    ctx->pc = 0x188324u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953768)));
    // 0x188328: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x188328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18832c: 0x2484fd80  addiu       $a0, $a0, -0x280
    ctx->pc = 0x18832cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966656));
    // 0x188330: 0xc062b38  jal         func_18ACE0
    ctx->pc = 0x188330u;
    SET_GPR_U32(ctx, 31, 0x188338u);
    ctx->pc = 0x188334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188330u;
            // 0x188334: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ACE0u;
    if (runtime->hasFunction(0x18ACE0u)) {
        auto targetFn = runtime->lookupFunction(0x18ACE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188338u; }
        if (ctx->pc != 0x188338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        voBufCreate_0x18ace0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188338u; }
        if (ctx->pc != 0x188338u) { return; }
    }
    ctx->pc = 0x188338u;
    // 0x188338: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x188338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18833c: 0x27b40084  addiu       $s4, $sp, 0x84
    ctx->pc = 0x18833cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x188340: 0x24428130  addiu       $v0, $v0, -0x7ED0
    ctx->pc = 0x188340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934832));
    // 0x188344: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x188344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x188348: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x188348u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x18834c: 0x27b30088  addiu       $s3, $sp, 0x88
    ctx->pc = 0x18834cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x188350: 0x8c26cb10  lw          $a2, -0x34F0($at)
    ctx->pc = 0x188350u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953744)));
    // 0x188354: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x188354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x188358: 0x27b2008c  addiu       $s2, $sp, 0x8C
    ctx->pc = 0x188358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x18835c: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x18835cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x188360: 0x27b10094  addiu       $s1, $sp, 0x94
    ctx->pc = 0x188360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x188364: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x188364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188368: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x188368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18836c: 0x2442b670  addiu       $v0, $v0, -0x4990
    ctx->pc = 0x18836cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948464));
    // 0x188370: 0x27b600a0  addiu       $s6, $sp, 0xA0
    ctx->pc = 0x188370u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x188374: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x188374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x188378: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x188378u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x18837c: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x18837cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x188380: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x188380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x188384: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x188384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x188388: 0xc04ba98  jal         func_12EA60
    ctx->pc = 0x188388u;
    SET_GPR_U32(ctx, 31, 0x188390u);
    ctx->pc = 0x18838Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188388u;
            // 0x18838c: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EA60u;
    if (runtime->hasFunction(0x12EA60u)) {
        auto targetFn = runtime->lookupFunction(0x12EA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188390u; }
        if (ctx->pc != 0x188390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateThread_0x12ea60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188390u; }
        if (ctx->pc != 0x188390u) { return; }
    }
    ctx->pc = 0x188390u;
    // 0x188390: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x188390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x188394: 0xac22fef8  sw          $v0, -0x108($at)
    ctx->pc = 0x188394u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294967032), GPR_U32(ctx, 2));
    // 0x188398: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x188398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18839c: 0x8c24fef8  lw          $a0, -0x108($at)
    ctx->pc = 0x18839cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967032)));
    // 0x1883a0: 0xc04baa0  jal         func_12EA80
    ctx->pc = 0x1883A0u;
    SET_GPR_U32(ctx, 31, 0x1883A8u);
    ctx->pc = 0x1883A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1883A0u;
            // 0x1883a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EA80u;
    if (runtime->hasFunction(0x12EA80u)) {
        auto targetFn = runtime->lookupFunction(0x12EA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1883A8u; }
        if (ctx->pc != 0x1883A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartThread_0x12ea80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1883A8u; }
        if (ctx->pc != 0x1883A8u) { return; }
    }
    ctx->pc = 0x1883A8u;
    // 0x1883a8: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x1883a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x1883ac: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1883acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1883b0: 0x2442a760  addiu       $v0, $v0, -0x58A0
    ctx->pc = 0x1883b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944608));
    // 0x1883b4: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x1883b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1883b8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1883b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1883bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1883bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1883c0: 0x8c26caf8  lw          $a2, -0x3508($at)
    ctx->pc = 0x1883c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953720)));
    // 0x1883c4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1883c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1883c8: 0x2442b670  addiu       $v0, $v0, -0x4990
    ctx->pc = 0x1883c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948464));
    // 0x1883cc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1883ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1883d0: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x1883d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x1883d4: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x1883d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x1883d8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1883d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1883dc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1883dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1883e0: 0xc04ba98  jal         func_12EA60
    ctx->pc = 0x1883E0u;
    SET_GPR_U32(ctx, 31, 0x1883E8u);
    ctx->pc = 0x1883E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1883E0u;
            // 0x1883e4: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EA60u;
    if (runtime->hasFunction(0x12EA60u)) {
        auto targetFn = runtime->lookupFunction(0x12EA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1883E8u; }
        if (ctx->pc != 0x1883E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateThread_0x12ea60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1883E8u; }
        if (ctx->pc != 0x1883E8u) { return; }
    }
    ctx->pc = 0x1883E8u;
    // 0x1883e8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1883e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1883ec: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x1883ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x1883f0: 0xac22ff00  sw          $v0, -0x100($at)
    ctx->pc = 0x1883f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294967040), GPR_U32(ctx, 2));
    // 0x1883f4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1883f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1883f8: 0x8c24ff00  lw          $a0, -0x100($at)
    ctx->pc = 0x1883f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967040)));
    // 0x1883fc: 0xc04baa0  jal         func_12EA80
    ctx->pc = 0x1883FCu;
    SET_GPR_U32(ctx, 31, 0x188404u);
    ctx->pc = 0x188400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1883FCu;
            // 0x188400: 0x24a5fe00  addiu       $a1, $a1, -0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EA80u;
    if (runtime->hasFunction(0x12EA80u)) {
        auto targetFn = runtime->lookupFunction(0x12EA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188404u; }
        if (ctx->pc != 0x188404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartThread_0x12ea80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188404u; }
        if (ctx->pc != 0x188404u) { return; }
    }
    ctx->pc = 0x188404u;
    // 0x188404: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x188404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x188408: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x188408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18840c: 0xc0623c8  jal         func_188F20
    ctx->pc = 0x18840Cu;
    SET_GPR_U32(ctx, 31, 0x188414u);
    ctx->pc = 0x188410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18840Cu;
            // 0x188410: 0x2484fec0  addiu       $a0, $a0, -0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188F20u;
    if (runtime->hasFunction(0x188F20u)) {
        auto targetFn = runtime->lookupFunction(0x188F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188414u; }
        if (ctx->pc != 0x188414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strFileOpen_0x188f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188414u; }
        if (ctx->pc != 0x188414u) { return; }
    }
    ctx->pc = 0x188414u;
    // 0x188414: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x188414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x188418: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x188418u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x18841c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18841Cu;
    {
        const bool branch_taken_0x18841c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18841c) {
            ctx->pc = 0x188458u;
            goto label_188458;
        }
    }
    ctx->pc = 0x188424u;
    // 0x188424: 0x0  nop
    ctx->pc = 0x188424u;
    // NOP
label_188428:
    // 0x188428: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x188428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x18842c: 0x24842560  addiu       $a0, $a0, 0x2560
    ctx->pc = 0x18842cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9568));
    // 0x188430: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x188430u;
    SET_GPR_U32(ctx, 31, 0x188438u);
    ctx->pc = 0x188434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188430u;
            // 0x188434: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188438u; }
        if (ctx->pc != 0x188438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188438u; }
        if (ctx->pc != 0x188438u) { return; }
    }
    ctx->pc = 0x188438u;
    // 0x188438: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x188438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x18843c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x18843cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188440: 0xc0623c8  jal         func_188F20
    ctx->pc = 0x188440u;
    SET_GPR_U32(ctx, 31, 0x188448u);
    ctx->pc = 0x188444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188440u;
            // 0x188444: 0x2484fec0  addiu       $a0, $a0, -0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188F20u;
    if (runtime->hasFunction(0x188F20u)) {
        auto targetFn = runtime->lookupFunction(0x188F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188448u; }
        if (ctx->pc != 0x188448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strFileOpen_0x188f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188448u; }
        if (ctx->pc != 0x188448u) { return; }
    }
    ctx->pc = 0x188448u;
    // 0x188448: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x188448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18844c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x18844cu;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x188450: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x188450u;
    {
        const bool branch_taken_0x188450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188450) {
            ctx->pc = 0x188428u;
            goto label_188428;
        }
    }
    ctx->pc = 0x188458u;
label_188458:
    // 0x188458: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x188458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x18845c: 0xc043042  jal         func_10C108
    ctx->pc = 0x18845Cu;
    SET_GPR_U32(ctx, 31, 0x188464u);
    ctx->pc = 0x188460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18845Cu;
            // 0x188460: 0x24847940  addiu       $a0, $a0, 0x7940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C108u;
    if (runtime->hasFunction(0x10C108u)) {
        auto targetFn = runtime->lookupFunction(0x10C108u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188464u; }
        if (ctx->pc != 0x188464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncVCallback_0x10c108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188464u; }
        if (ctx->pc != 0x188464u) { return; }
    }
    ctx->pc = 0x188464u;
    // 0x188464: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x188464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x188468: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x188468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18846c: 0x24a578f0  addiu       $a1, $a1, 0x78F0
    ctx->pc = 0x18846cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30960));
    // 0x188470: 0xc04ba5c  jal         func_12E970
    ctx->pc = 0x188470u;
    SET_GPR_U32(ctx, 31, 0x188478u);
    ctx->pc = 0x188474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188470u;
            // 0x188474: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E970u;
    if (runtime->hasFunction(0x12E970u)) {
        auto targetFn = runtime->lookupFunction(0x12E970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188478u; }
        if (ctx->pc != 0x188478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddDmacHandler_0x12e970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188478u; }
        if (ctx->pc != 0x188478u) { return; }
    }
    ctx->pc = 0x188478u;
    // 0x188478: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x188478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18847c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18847cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188480: 0xc04be1e  jal         func_12F878
    ctx->pc = 0x188480u;
    SET_GPR_U32(ctx, 31, 0x188488u);
    ctx->pc = 0x188484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188480u;
            // 0x188484: 0xac22feb0  sw          $v0, -0x150($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F878u;
    if (runtime->hasFunction(0x12F878u)) {
        auto targetFn = runtime->lookupFunction(0x12F878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188488u; }
        if (ctx->pc != 0x188488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableDmac_0x12f878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188488u; }
        if (ctx->pc != 0x188488u) { return; }
    }
    ctx->pc = 0x188488u;
    // 0x188488: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x188488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18848c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18848cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x188490: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x188490u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x188494: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x188494u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x188498: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x188498u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18849c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18849cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1884a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1884a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1884a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1884a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1884a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1884A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1884ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1884A8u;
            // 0x1884ac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188310u: goto label_188310;
            case 0x188428u: goto label_188428;
            case 0x188458u: goto label_188458;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1884B0u;
}
