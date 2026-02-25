#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MemCardInit
// Address: 0x186b40 - 0x186da8
void MemCardInit_0x186b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MemCardInit_0x186b40");
#endif

    ctx->pc = 0x186b40u;

    // 0x186b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186b44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186b48: 0xc047434  jal         func_11D0D0
    ctx->pc = 0x186B48u;
    SET_GPR_U32(ctx, 31, 0x186B50u);
    ctx->pc = 0x186B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186B48u;
            // 0x186b4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D0D0u;
    if (runtime->hasFunction(0x11D0D0u)) {
        auto targetFn = runtime->lookupFunction(0x11D0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B50u; }
        if (ctx->pc != 0x186B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Init_0x11d0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B50u; }
        if (ctx->pc != 0x186B50u) { return; }
    }
    ctx->pc = 0x186B50u;
    // 0x186b50: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x186b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x186b54: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x186b58: 0xac20bb48  sw          $zero, -0x44B8($at)
    ctx->pc = 0x186b58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949704), GPR_U32(ctx, 0));
    // 0x186b5c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x186b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x186b60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x186b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x186b64: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x186b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x186b68: 0xac22bb40  sw          $v0, -0x44C0($at)
    ctx->pc = 0x186b68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949696), GPR_U32(ctx, 2));
    // 0x186b6c: 0x2484bb40  addiu       $a0, $a0, -0x44C0
    ctx->pc = 0x186b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949696));
    // 0x186b70: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x186b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x186b74: 0x24a5ba40  addiu       $a1, $a1, -0x45C0
    ctx->pc = 0x186b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949440));
    // 0x186b78: 0xc0474c6  jal         func_11D318
    ctx->pc = 0x186B78u;
    SET_GPR_U32(ctx, 31, 0x186B80u);
    ctx->pc = 0x186B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186B78u;
            // 0x186b7c: 0xac22bb44  sw          $v0, -0x44BC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D318u;
    if (runtime->hasFunction(0x11D318u)) {
        auto targetFn = runtime->lookupFunction(0x11D318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B80u; }
        if (ctx->pc != 0x186B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2CreateSocket_0x11d318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B80u; }
        if (ctx->pc != 0x186B80u) { return; }
    }
    ctx->pc = 0x186B80u;
    // 0x186b80: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x186b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x186b84: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x186b84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x186b88: 0xac22bcf8  sw          $v0, -0x4308($at)
    ctx->pc = 0x186b88u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294950136), GPR_U32(ctx, 2));
    // 0x186b8c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x186b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x186b90: 0x8c25bcf8  lw          $a1, -0x4308($at)
    ctx->pc = 0x186b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x186b94: 0xc04c340  jal         func_130D00
    ctx->pc = 0x186B94u;
    SET_GPR_U32(ctx, 31, 0x186B9Cu);
    ctx->pc = 0x186B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186B94u;
            // 0x186b98: 0x248422f0  addiu       $a0, $a0, 0x22F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130D00u;
    if (runtime->hasFunction(0x130D00u)) {
        auto targetFn = runtime->lookupFunction(0x130D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B9Cu; }
        if (ctx->pc != 0x186B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePrintf_0x130d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B9Cu; }
        if (ctx->pc != 0x186B9Cu) { return; }
    }
    ctx->pc = 0x186B9Cu;
    // 0x186b9c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x186ba0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x186ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186ba4: 0x2484be00  addiu       $a0, $a0, -0x4200
    ctx->pc = 0x186ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950400));
    // 0x186ba8: 0xc04ed90  jal         func_13B640
    ctx->pc = 0x186BA8u;
    SET_GPR_U32(ctx, 31, 0x186BB0u);
    ctx->pc = 0x186BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186BA8u;
            // 0x186bac: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B640u;
    if (runtime->hasFunction(0x13B640u)) {
        auto targetFn = runtime->lookupFunction(0x13B640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186BB0u; }
        if (ctx->pc != 0x186BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x13b640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186BB0u; }
        if (ctx->pc != 0x186BB0u) { return; }
    }
    ctx->pc = 0x186BB0u;
    // 0x186bb0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x186bb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x186bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186bb8: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x186bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x186bbc: 0xc04ed90  jal         func_13B640
    ctx->pc = 0x186BBCu;
    SET_GPR_U32(ctx, 31, 0x186BC4u);
    ctx->pc = 0x186BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186BBCu;
            // 0x186bc0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B640u;
    if (runtime->hasFunction(0x13B640u)) {
        auto targetFn = runtime->lookupFunction(0x13B640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186BC4u; }
        if (ctx->pc != 0x186BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x13b640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186BC4u; }
        if (ctx->pc != 0x186BC4u) { return; }
    }
    ctx->pc = 0x186BC4u;
    // 0x186bc4: 0x3c02c38a  lui         $v0, 0xC38A
    ctx->pc = 0x186bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50058 << 16));
    // 0x186bc8: 0x3c03c374  lui         $v1, 0xC374
    ctx->pc = 0x186bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50036 << 16));
    // 0x186bcc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x186bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x186bd0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x186bd4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x186bd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x186bd8: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x186bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x186bdc: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x186bdcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x186be0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x186be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x186be4: 0xc0619bc  jal         func_1866F0
    ctx->pc = 0x186BE4u;
    SET_GPR_U32(ctx, 31, 0x186BECu);
    ctx->pc = 0x186BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186BE4u;
            // 0x186be8: 0x2484bec0  addiu       $a0, $a0, -0x4140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1866F0u;
    if (runtime->hasFunction(0x1866F0u)) {
        auto targetFn = runtime->lookupFunction(0x1866F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186BECu; }
        if (ctx->pc != 0x186BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1866f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186BECu; }
        if (ctx->pc != 0x186BECu) { return; }
    }
    ctx->pc = 0x186BECu;
    // 0x186bec: 0x3c02438a  lui         $v0, 0x438A
    ctx->pc = 0x186becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17290 << 16));
    // 0x186bf0: 0x3c034374  lui         $v1, 0x4374
    ctx->pc = 0x186bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17268 << 16));
    // 0x186bf4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x186bf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x186bf8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x186bfc: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x186bfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x186c00: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x186c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x186c04: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x186c04u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x186c08: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x186c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x186c0c: 0xc0619bc  jal         func_1866F0
    ctx->pc = 0x186C0Cu;
    SET_GPR_U32(ctx, 31, 0x186C14u);
    ctx->pc = 0x186C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186C0Cu;
            // 0x186c10: 0x2484bed0  addiu       $a0, $a0, -0x4130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1866F0u;
    if (runtime->hasFunction(0x1866F0u)) {
        auto targetFn = runtime->lookupFunction(0x1866F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C14u; }
        if (ctx->pc != 0x186C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1866f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C14u; }
        if (ctx->pc != 0x186C14u) { return; }
    }
    ctx->pc = 0x186C14u;
    // 0x186c14: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x186c14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x186c18: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186c18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x186c1c: 0x2484bea0  addiu       $a0, $a0, -0x4160
    ctx->pc = 0x186c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950560));
    // 0x186c20: 0xc061b74  jal         func_186DD0
    ctx->pc = 0x186C20u;
    SET_GPR_U32(ctx, 31, 0x186C28u);
    ctx->pc = 0x186C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186C20u;
            // 0x186c24: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x186DD0u;
    if (runtime->hasFunction(0x186DD0u)) {
        auto targetFn = runtime->lookupFunction(0x186DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C28u; }
        if (ctx->pc != 0x186C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYf_0x186dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C28u; }
        if (ctx->pc != 0x186C28u) { return; }
    }
    ctx->pc = 0x186C28u;
    // 0x186c28: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x186c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x186c2c: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x186c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x186c30: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186c30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x186c34: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x186c34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x186c38: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x186c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x186c3c: 0xc061b74  jal         func_186DD0
    ctx->pc = 0x186C3Cu;
    SET_GPR_U32(ctx, 31, 0x186C44u);
    ctx->pc = 0x186C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186C3Cu;
            // 0x186c40: 0x2484beb0  addiu       $a0, $a0, -0x4150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186DD0u;
    if (runtime->hasFunction(0x186DD0u)) {
        auto targetFn = runtime->lookupFunction(0x186DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C44u; }
        if (ctx->pc != 0x186C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYf_0x186dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C44u; }
        if (ctx->pc != 0x186C44u) { return; }
    }
    ctx->pc = 0x186C44u;
    // 0x186c44: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x186c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x186c48: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x186c4c: 0x2484be88  addiu       $a0, $a0, -0x4178
    ctx->pc = 0x186c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950536));
    // 0x186c50: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x186c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186c54: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x186c54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186c58: 0xc061b6c  jal         func_186DB0
    ctx->pc = 0x186C58u;
    SET_GPR_U32(ctx, 31, 0x186C60u);
    ctx->pc = 0x186C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186C58u;
            // 0x186c5c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186DB0u;
    if (runtime->hasFunction(0x186DB0u)) {
        auto targetFn = runtime->lookupFunction(0x186DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C60u; }
        if (ctx->pc != 0x186C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x186db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C60u; }
        if (ctx->pc != 0x186C60u) { return; }
    }
    ctx->pc = 0x186C60u;
    // 0x186c60: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x186c64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x186c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186c68: 0x2484bef0  addiu       $a0, $a0, -0x4110
    ctx->pc = 0x186c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950640));
    // 0x186c6c: 0xc04ed90  jal         func_13B640
    ctx->pc = 0x186C6Cu;
    SET_GPR_U32(ctx, 31, 0x186C74u);
    ctx->pc = 0x186C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186C6Cu;
            // 0x186c70: 0x240603c4  addiu       $a2, $zero, 0x3C4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B640u;
    if (runtime->hasFunction(0x13B640u)) {
        auto targetFn = runtime->lookupFunction(0x13B640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C74u; }
        if (ctx->pc != 0x186C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x13b640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C74u; }
        if (ctx->pc != 0x186C74u) { return; }
    }
    ctx->pc = 0x186C74u;
    // 0x186c74: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186c74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x186c78: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x186c78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x186c7c: 0x2484bef0  addiu       $a0, $a0, -0x4110
    ctx->pc = 0x186c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950640));
    // 0x186c80: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x186C80u;
    SET_GPR_U32(ctx, 31, 0x186C88u);
    ctx->pc = 0x186C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186C80u;
            // 0x186c84: 0x24a52308  addiu       $a1, $a1, 0x2308 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C88u; }
        if (ctx->pc != 0x186C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C88u; }
        if (ctx->pc != 0x186C88u) { return; }
    }
    ctx->pc = 0x186C88u;
    // 0x186c88: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x186c8c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x186c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x186c90: 0x2484bfb0  addiu       $a0, $a0, -0x4050
    ctx->pc = 0x186c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950832));
    // 0x186c94: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x186C94u;
    SET_GPR_U32(ctx, 31, 0x186C9Cu);
    ctx->pc = 0x186C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186C94u;
            // 0x186c98: 0x24a52310  addiu       $a1, $a1, 0x2310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C9Cu; }
        if (ctx->pc != 0x186C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C9Cu; }
        if (ctx->pc != 0x186C9Cu) { return; }
    }
    ctx->pc = 0x186C9Cu;
    // 0x186c9c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x186c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x186ca0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x186ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x186ca4: 0xa423bef6  sh          $v1, -0x410A($at)
    ctx->pc = 0x186ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294950646), (uint16_t)GPR_U32(ctx, 3));
    // 0x186ca8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x186cac: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x186cacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x186cb0: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x186cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x186cb4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x186cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x186cb8: 0x2484bf00  addiu       $a0, $a0, -0x4100
    ctx->pc = 0x186cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950656));
    // 0x186cbc: 0xac22befc  sw          $v0, -0x4104($at)
    ctx->pc = 0x186cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294950652), GPR_U32(ctx, 2));
    // 0x186cc0: 0x24a5a340  addiu       $a1, $a1, -0x5CC0
    ctx->pc = 0x186cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943552));
    // 0x186cc4: 0xc04ed22  jal         func_13B488
    ctx->pc = 0x186CC4u;
    SET_GPR_U32(ctx, 31, 0x186CCCu);
    ctx->pc = 0x186CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186CC4u;
            // 0x186cc8: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186CCCu; }
        if (ctx->pc != 0x186CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186CCCu; }
        if (ctx->pc != 0x186CCCu) { return; }
    }
    ctx->pc = 0x186CCCu;
    // 0x186ccc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x186cd0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x186cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x186cd4: 0x2484bf40  addiu       $a0, $a0, -0x40C0
    ctx->pc = 0x186cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950720));
    // 0x186cd8: 0x24a5a380  addiu       $a1, $a1, -0x5C80
    ctx->pc = 0x186cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943616));
    // 0x186cdc: 0xc04ed22  jal         func_13B488
    ctx->pc = 0x186CDCu;
    SET_GPR_U32(ctx, 31, 0x186CE4u);
    ctx->pc = 0x186CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186CDCu;
            // 0x186ce0: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186CE4u; }
        if (ctx->pc != 0x186CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186CE4u; }
        if (ctx->pc != 0x186CE4u) { return; }
    }
    ctx->pc = 0x186CE4u;
    // 0x186ce4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x186ce8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x186ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x186cec: 0x2484bf70  addiu       $a0, $a0, -0x4090
    ctx->pc = 0x186cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950768));
    // 0x186cf0: 0x24a5a3b0  addiu       $a1, $a1, -0x5C50
    ctx->pc = 0x186cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943664));
    // 0x186cf4: 0xc04ed22  jal         func_13B488
    ctx->pc = 0x186CF4u;
    SET_GPR_U32(ctx, 31, 0x186CFCu);
    ctx->pc = 0x186CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186CF4u;
            // 0x186cf8: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186CFCu; }
        if (ctx->pc != 0x186CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186CFCu; }
        if (ctx->pc != 0x186CFCu) { return; }
    }
    ctx->pc = 0x186CFCu;
    // 0x186cfc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x186d00: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x186d00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x186d04: 0x2484bfa0  addiu       $a0, $a0, -0x4060
    ctx->pc = 0x186d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950816));
    // 0x186d08: 0x24a5a3e0  addiu       $a1, $a1, -0x5C20
    ctx->pc = 0x186d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943712));
    // 0x186d0c: 0xc04ed22  jal         func_13B488
    ctx->pc = 0x186D0Cu;
    SET_GPR_U32(ctx, 31, 0x186D14u);
    ctx->pc = 0x186D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186D0Cu;
            // 0x186d10: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D14u; }
        if (ctx->pc != 0x186D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D14u; }
        if (ctx->pc != 0x186D14u) { return; }
    }
    ctx->pc = 0x186D14u;
    // 0x186d14: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x186d18: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x186d18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x186d1c: 0x2484bff4  addiu       $a0, $a0, -0x400C
    ctx->pc = 0x186d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950900));
    // 0x186d20: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x186D20u;
    SET_GPR_U32(ctx, 31, 0x186D28u);
    ctx->pc = 0x186D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186D20u;
            // 0x186d24: 0x24a52290  addiu       $a1, $a1, 0x2290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D28u; }
        if (ctx->pc != 0x186D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D28u; }
        if (ctx->pc != 0x186D28u) { return; }
    }
    ctx->pc = 0x186D28u;
    // 0x186d28: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x186d2c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x186d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x186d30: 0x2484c034  addiu       $a0, $a0, -0x3FCC
    ctx->pc = 0x186d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950964));
    // 0x186d34: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x186D34u;
    SET_GPR_U32(ctx, 31, 0x186D3Cu);
    ctx->pc = 0x186D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186D34u;
            // 0x186d38: 0x24a52290  addiu       $a1, $a1, 0x2290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D3Cu; }
        if (ctx->pc != 0x186D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D3Cu; }
        if (ctx->pc != 0x186D3Cu) { return; }
    }
    ctx->pc = 0x186D3Cu;
    // 0x186d3c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x186d40: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x186d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x186d44: 0x2484c074  addiu       $a0, $a0, -0x3F8C
    ctx->pc = 0x186d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951028));
    // 0x186d48: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x186D48u;
    SET_GPR_U32(ctx, 31, 0x186D50u);
    ctx->pc = 0x186D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186D48u;
            // 0x186d4c: 0x24a52290  addiu       $a1, $a1, 0x2290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D50u; }
        if (ctx->pc != 0x186D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D50u; }
        if (ctx->pc != 0x186D50u) { return; }
    }
    ctx->pc = 0x186D50u;
    // 0x186d50: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x186d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x186d54: 0xc061b90  jal         func_186E40
    ctx->pc = 0x186D54u;
    SET_GPR_U32(ctx, 31, 0x186D5Cu);
    ctx->pc = 0x186D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186D54u;
            // 0x186d58: 0xac20bee0  sw          $zero, -0x4120($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294950624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186E40u;
    if (runtime->hasFunction(0x186E40u)) {
        auto targetFn = runtime->lookupFunction(0x186E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D5Cu; }
        if (ctx->pc != 0x186D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgLoadFull_0x186e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D5Cu; }
        if (ctx->pc != 0x186D5Cu) { return; }
    }
    ctx->pc = 0x186D5Cu;
    // 0x186d5c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x186d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x186d60: 0xc04ea32  jal         func_13A8C8
    ctx->pc = 0x186D60u;
    SET_GPR_U32(ctx, 31, 0x186D68u);
    ctx->pc = 0x186D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186D60u;
            // 0x186d64: 0x34448440  ori         $a0, $v0, 0x8440 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33856u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8C8u;
    if (runtime->hasFunction(0x13A8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13A8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D68u; }
        if (ctx->pc != 0x186D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        malloc_0x13a8c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D68u; }
        if (ctx->pc != 0x186D68u) { return; }
    }
    ctx->pc = 0x186D68u;
    // 0x186d68: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x186d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x186d6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x186d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186d70: 0xac22b638  sw          $v0, -0x49C8($at)
    ctx->pc = 0x186d70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948408), GPR_U32(ctx, 2));
    // 0x186d74: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x186d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x186d78: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x186d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x186d7c: 0x34428440  ori         $v0, $v0, 0x8440
    ctx->pc = 0x186d7cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33856u)));
    // 0x186d80: 0xc0504cc  jal         func_141330
    ctx->pc = 0x186D80u;
    SET_GPR_U32(ctx, 31, 0x186D88u);
    ctx->pc = 0x186D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186D80u;
            // 0x186d84: 0xac22b630  sw          $v0, -0x49D0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294948400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141330u;
    if (runtime->hasFunction(0x141330u)) {
        auto targetFn = runtime->lookupFunction(0x141330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D88u; }
        if (ctx->pc != 0x186D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRomLoad_0x141330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D88u; }
        if (ctx->pc != 0x186D88u) { return; }
    }
    ctx->pc = 0x186D88u;
    // 0x186d88: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x186d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x186d8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x186d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186d90: 0xac22bee0  sw          $v0, -0x4120($at)
    ctx->pc = 0x186d90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294950624), GPR_U32(ctx, 2));
    // 0x186d94: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x186d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x186d98: 0xac23b628  sw          $v1, -0x49D8($at)
    ctx->pc = 0x186d98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948392), GPR_U32(ctx, 3));
    // 0x186d9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186da0: 0x3e00008  jr          $ra
    ctx->pc = 0x186DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186DA0u;
            // 0x186da4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186DA8u;
}
