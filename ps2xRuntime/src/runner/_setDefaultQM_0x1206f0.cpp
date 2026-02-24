#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _setDefaultQM
// Address: 0x1206f0 - 0x1207b0
void _setDefaultQM_0x1206f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_setDefaultQM_0x1206f0");
#endif

    ctx->pc = 0x1206f0u;

    // 0x1206f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1206f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1206f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1206f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1206f8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1206f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1206fc: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1206fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x120700: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x120700u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120704: 0x3c110017  lui         $s1, 0x17
    ctx->pc = 0x120704u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)23 << 16));
    // 0x120708: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x120708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x12070c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12070cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120710: 0x8e2417bc  lw          $a0, 0x17BC($s1)
    ctx->pc = 0x120710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6076)));
    // 0x120714: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x120714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x120718: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x120718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x12071c: 0xc047de0  jal         func_11F780
    ctx->pc = 0x12071Cu;
    SET_GPR_U32(ctx, 31, 0x120724u);
    ctx->pc = 0x120720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12071Cu;
            // 0x120720: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F780u;
    if (runtime->hasFunction(0x11F780u)) {
        auto targetFn = runtime->lookupFunction(0x11F780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120724u; }
        if (ctx->pc != 0x120724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x11f780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120724u; }
        if (ctx->pc != 0x120724u) { return; }
    }
    ctx->pc = 0x120724u;
    // 0x120724: 0xc048e84  jal         func_123A10
    ctx->pc = 0x120724u;
    SET_GPR_U32(ctx, 31, 0x12072Cu);
    ctx->pc = 0x123A10u;
    if (runtime->hasFunction(0x123A10u)) {
        auto targetFn = runtime->lookupFunction(0x123A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12072Cu; }
        if (ctx->pc != 0x12072Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x123a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12072Cu; }
        if (ctx->pc != 0x12072Cu) { return; }
    }
    ctx->pc = 0x12072Cu;
    // 0x12072c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x12072cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x120730: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x120730u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8192u)));
    // 0x120734: 0xc048e84  jal         func_123A10
    ctx->pc = 0x120734u;
    SET_GPR_U32(ctx, 31, 0x12073Cu);
    ctx->pc = 0x120738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120734u;
            // 0x120738: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123A10u;
    if (runtime->hasFunction(0x123A10u)) {
        auto targetFn = runtime->lookupFunction(0x123A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12073Cu; }
        if (ctx->pc != 0x12073Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x123a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12073Cu; }
        if (ctx->pc != 0x12073Cu) { return; }
    }
    ctx->pc = 0x12073Cu;
    // 0x12073c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x12073cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x120740: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x120740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x120744: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x120744u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x120748: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x120748u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)46096u)));
    // 0x12074c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x12074cu;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x120750: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x120750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x120754: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x120754u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x120758: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x120758u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)46112u)));
    // 0x12075c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x12075cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x120760: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x120760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x120764: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x120764u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x120768: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x120768u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46080u)));
    // 0x12076c: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x12076cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x120770: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x120770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120774: 0xc048e78  jal         func_1239E0
    ctx->pc = 0x120774u;
    SET_GPR_U32(ctx, 31, 0x12077Cu);
    ctx->pc = 0x120778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120774u;
            // 0x120778: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1239E0u;
    if (runtime->hasFunction(0x1239E0u)) {
        auto targetFn = runtime->lookupFunction(0x1239E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12077Cu; }
        if (ctx->pc != 0x12077Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x1239e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12077Cu; }
        if (ctx->pc != 0x12077Cu) { return; }
    }
    ctx->pc = 0x12077Cu;
    // 0x12077c: 0xc048e84  jal         func_123A10
    ctx->pc = 0x12077Cu;
    SET_GPR_U32(ctx, 31, 0x120784u);
    ctx->pc = 0x123A10u;
    if (runtime->hasFunction(0x123A10u)) {
        auto targetFn = runtime->lookupFunction(0x123A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120784u; }
        if (ctx->pc != 0x120784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x123a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120784u; }
        if (ctx->pc != 0x120784u) { return; }
    }
    ctx->pc = 0x120784u;
    // 0x120784: 0x8e2417bc  lw          $a0, 0x17BC($s1)
    ctx->pc = 0x120784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6076)));
    // 0x120788: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x120788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12078c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x12078cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x120790: 0xc047de0  jal         func_11F780
    ctx->pc = 0x120790u;
    SET_GPR_U32(ctx, 31, 0x120798u);
    ctx->pc = 0x120794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120790u;
            // 0x120794: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F780u;
    if (runtime->hasFunction(0x11F780u)) {
        auto targetFn = runtime->lookupFunction(0x11F780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120798u; }
        if (ctx->pc != 0x120798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x11f780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120798u; }
        if (ctx->pc != 0x120798u) { return; }
    }
    ctx->pc = 0x120798u;
    // 0x120798: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x120798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12079c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x12079cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1207a0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1207a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1207a4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1207a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1207a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1207A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1207ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1207A8u;
            // 0x1207ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1207B0u;
}
