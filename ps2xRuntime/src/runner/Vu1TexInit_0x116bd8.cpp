#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Vu1TexInit
// Address: 0x116bd8 - 0x117334
void Vu1TexInit_0x116bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Vu1TexInit_0x116bd8");
#endif

    ctx->pc = 0x116bd8u;

    // 0x116bd8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x116bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x116bdc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x116bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x116be0: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x116be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x116be4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x116be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116be8: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x116be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x116bec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x116becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116bf0: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x116bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x116bf4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x116bf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116bf8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x116bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x116bfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x116bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c00: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x116c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x116c04: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x116c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x116c08: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x116c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x116c0c: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x116c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x116c10: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x116c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x116c14: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x116c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x116c18: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x116c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x116c1c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x116c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x116c20: 0xc04ed90  jal         func_13B640
    ctx->pc = 0x116C20u;
    SET_GPR_U32(ctx, 31, 0x116C28u);
    ctx->pc = 0x116C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116C20u;
            // 0x116c24: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B640u;
    if (runtime->hasFunction(0x13B640u)) {
        auto targetFn = runtime->lookupFunction(0x13B640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116C28u; }
        if (ctx->pc != 0x116C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x13b640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116C28u; }
        if (ctx->pc != 0x116C28u) { return; }
    }
    ctx->pc = 0x116C28u;
    // 0x116c28: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x116c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x116c2c: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x116c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x116c30: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x116c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116c34: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x116c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x116c38: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x116c38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x116c3c: 0x2812  mflo        $a1
    ctx->pc = 0x116c3cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x116c40: 0xc0435bc  jal         func_10D6F0
    ctx->pc = 0x116C40u;
    SET_GPR_U32(ctx, 31, 0x116C48u);
    ctx->pc = 0x116C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116C40u;
            // 0x116c44: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D6F0u;
    if (runtime->hasFunction(0x10D6F0u)) {
        auto targetFn = runtime->lookupFunction(0x10D6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116C48u; }
        if (ctx->pc != 0x116C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiMemAlign_0x10d6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116C48u; }
        if (ctx->pc != 0x116C48u) { return; }
    }
    ctx->pc = 0x116C48u;
    // 0x116c48: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x116c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x116c4c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x116c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x116c50: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x116c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x116c54: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x116C54u;
    {
        const bool branch_taken_0x116c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116c54) {
            ctx->pc = 0x116C6Cu;
            goto label_116c6c;
        }
    }
    ctx->pc = 0x116C5Cu;
    // 0x116c5c: 0xc045ad6  jal         func_116B58
    ctx->pc = 0x116C5Cu;
    SET_GPR_U32(ctx, 31, 0x116C64u);
    ctx->pc = 0x116C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116C5Cu;
            // 0x116c60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116B58u;
    if (runtime->hasFunction(0x116B58u)) {
        auto targetFn = runtime->lookupFunction(0x116B58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116C64u; }
        if (ctx->pc != 0x116C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_tex2d_err_0x116b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116C64u; }
        if (ctx->pc != 0x116C64u) { return; }
    }
    ctx->pc = 0x116C64u;
    // 0x116c64: 0x100001a8  b           . + 4 + (0x1A8 << 2)
    ctx->pc = 0x116C64u;
    {
        const bool branch_taken_0x116c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116C64u;
            // 0x116c68: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c64) {
            ctx->pc = 0x117308u;
            goto label_117308;
        }
    }
    ctx->pc = 0x116C6Cu;
label_116c6c:
    // 0x116c6c: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x116C6Cu;
    {
        const bool branch_taken_0x116c6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x116C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116C6Cu;
            // 0x116c70: 0x24131a40  addiu       $s3, $zero, 0x1A40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 6720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c6c) {
            ctx->pc = 0x116CACu;
            goto label_116cac;
        }
    }
    ctx->pc = 0x116C74u;
    // 0x116c74: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x116c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x116c78: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x116c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x116c7c: 0x39982  srl         $s3, $v1, 6
    ctx->pc = 0x116c7cu;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x116c80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x116c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x116c84: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x116C84u;
    {
        const bool branch_taken_0x116c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116C84u;
            // 0x116c88: 0x29182  srl         $s2, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c84) {
            ctx->pc = 0x116CB0u;
            goto label_116cb0;
        }
    }
    ctx->pc = 0x116C8Cu;
label_116c8c:
    // 0x116c8c: 0xc045ad6  jal         func_116B58
    ctx->pc = 0x116C8Cu;
    SET_GPR_U32(ctx, 31, 0x116C94u);
    ctx->pc = 0x116C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116C8Cu;
            // 0x116c90: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116B58u;
    if (runtime->hasFunction(0x116B58u)) {
        auto targetFn = runtime->lookupFunction(0x116B58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116C94u; }
        if (ctx->pc != 0x116C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_tex2d_err_0x116b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116C94u; }
        if (ctx->pc != 0x116C94u) { return; }
    }
    ctx->pc = 0x116C94u;
    // 0x116c94: 0x1000019c  b           . + 4 + (0x19C << 2)
    ctx->pc = 0x116C94u;
    {
        const bool branch_taken_0x116c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116C94u;
            // 0x116c98: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c94) {
            ctx->pc = 0x117308u;
            goto label_117308;
        }
    }
    ctx->pc = 0x116C9Cu;
label_116c9c:
    // 0x116c9c: 0xc045ad6  jal         func_116B58
    ctx->pc = 0x116C9Cu;
    SET_GPR_U32(ctx, 31, 0x116CA4u);
    ctx->pc = 0x116CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116C9Cu;
            // 0x116ca0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116B58u;
    if (runtime->hasFunction(0x116B58u)) {
        auto targetFn = runtime->lookupFunction(0x116B58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116CA4u; }
        if (ctx->pc != 0x116CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_tex2d_err_0x116b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116CA4u; }
        if (ctx->pc != 0x116CA4u) { return; }
    }
    ctx->pc = 0x116CA4u;
    // 0x116ca4: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x116CA4u;
    {
        const bool branch_taken_0x116ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116CA4u;
            // 0x116ca8: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ca4) {
            ctx->pc = 0x117308u;
            goto label_117308;
        }
    }
    ctx->pc = 0x116CACu;
label_116cac:
    // 0x116cac: 0x24124000  addiu       $s2, $zero, 0x4000
    ctx->pc = 0x116cacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_116cb0:
    // 0x116cb0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x116cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116cb4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x116cb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116cb8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x116cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x116cbc: 0x18400190  blez        $v0, . + 4 + (0x190 << 2)
    ctx->pc = 0x116CBCu;
    {
        const bool branch_taken_0x116cbc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x116CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116CBCu;
            // 0x116cc0: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116cbc) {
            ctx->pc = 0x117300u;
            goto label_117300;
        }
    }
    ctx->pc = 0x116CC4u;
    // 0x116cc4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x116cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_116cc8:
    // 0x116cc8: 0xc0471c6  jal         func_11C718
    ctx->pc = 0x116CC8u;
    SET_GPR_U32(ctx, 31, 0x116CD0u);
    ctx->pc = 0x116CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116CC8u;
            // 0x116ccc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C718u;
    if (runtime->hasFunction(0x11C718u)) {
        auto targetFn = runtime->lookupFunction(0x11C718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116CD0u; }
        if (ctx->pc != 0x116CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugTex2DGetData_0x11c718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116CD0u; }
        if (ctx->pc != 0x116CD0u) { return; }
    }
    ctx->pc = 0x116CD0u;
    // 0x116cd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x116cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116cd4: 0x1200ffed  beqz        $s0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x116CD4u;
    {
        const bool branch_taken_0x116cd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x116CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116CD4u;
            // 0x116cd8: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116cd4) {
            ctx->pc = 0x116C8Cu;
            goto label_116c8c;
        }
    }
    ctx->pc = 0x116CDCu;
    // 0x116cdc: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x116CDCu;
    {
        const bool branch_taken_0x116cdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x116CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116CDCu;
            // 0x116ce0: 0x8fa5002c  lw          $a1, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116cdc) {
            ctx->pc = 0x116D18u;
            goto label_116d18;
        }
    }
    ctx->pc = 0x116CE4u;
    // 0x116ce4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x116ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x116ce8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x116CE8u;
    {
        const bool branch_taken_0x116ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116ce8) {
            ctx->pc = 0x116CECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x116CE8u;
            // 0x116cec: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
            ctx->pc = 0x116D1Cu;
            goto label_116d1c;
        }
    }
    ctx->pc = 0x116CF0u;
    // 0x116cf0: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x116cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x116cf4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x116cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116cf8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x116cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x116cfc: 0xc0471da  jal         func_11C768
    ctx->pc = 0x116CFCu;
    SET_GPR_U32(ctx, 31, 0x116D04u);
    ctx->pc = 0x116D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116CFCu;
            // 0x116d00: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C768u;
    if (runtime->hasFunction(0x11C768u)) {
        auto targetFn = runtime->lookupFunction(0x11C768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116D04u; }
        if (ctx->pc != 0x116D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugTex2DGetEnv_0x11c768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116D04u; }
        if (ctx->pc != 0x116D04u) { return; }
    }
    ctx->pc = 0x116D04u;
    // 0x116d04: 0x1040ffe5  beqz        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x116D04u;
    {
        const bool branch_taken_0x116d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116D04u;
            // 0x116d08: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d04) {
            ctx->pc = 0x116C9Cu;
            goto label_116c9c;
        }
    }
    ctx->pc = 0x116D0Cu;
    // 0x116d0c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x116d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x116d10: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x116d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x116d14: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x116d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_116d18:
    // 0x116d18: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x116d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_116d1c:
    // 0x116d1c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x116d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x116d20: 0xa00013  mtlo        $a1
    ctx->pc = 0x116d20u;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x116d24: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x116d24u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x116d28: 0x72842000  madd        $a0, $s4, $a0
    ctx->pc = 0x116d28u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x116d2c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x116d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x116d30: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x116d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x116d34: 0xfe050008  sd          $a1, 0x8($s0)
    ctx->pc = 0x116d34u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 5));
    // 0x116d38: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x116d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x116d3c: 0x2153a  dsrl        $v0, $v0, 20
    ctx->pc = 0x116d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 20);
    // 0x116d40: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x116d40u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)63u)));
    // 0x116d44: 0xac8300c8  sw          $v1, 0xC8($a0)
    ctx->pc = 0x116d44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
    // 0x116d48: 0x2b83c  dsll32      $s7, $v0, 0
    ctx->pc = 0x116d48u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 0));
    // 0x116d4c: 0x17b83f  dsra32      $s7, $s7, 0
    ctx->pc = 0x116d4cu;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x116d50: 0x9603001a  lhu         $v1, 0x1A($s0)
    ctx->pc = 0x116d50u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x116d54: 0x26e2ffed  addiu       $v0, $s7, -0x13
    ctx->pc = 0x116d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967277));
    // 0x116d58: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x116d58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x116d5c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x116d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x116d60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x116D60u;
    {
        const bool branch_taken_0x116d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116D60u;
            // 0x116d64: 0x96150018  lhu         $s5, 0x18($s0) (Delay Slot)
        SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d60) {
            ctx->pc = 0x116D78u;
            goto label_116d78;
        }
    }
    ctx->pc = 0x116D68u;
    // 0x116d68: 0x26a2007f  addiu       $v0, $s5, 0x7F
    ctx->pc = 0x116d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 127));
    // 0x116d6c: 0x211c2  srl         $v0, $v0, 7
    ctx->pc = 0x116d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
    // 0x116d70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x116D70u;
    {
        const bool branch_taken_0x116d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116D70u;
            // 0x116d74: 0x2b040  sll         $s6, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d70) {
            ctx->pc = 0x116D80u;
            goto label_116d80;
        }
    }
    ctx->pc = 0x116D78u;
label_116d78:
    // 0x116d78: 0x26a2003f  addiu       $v0, $s5, 0x3F
    ctx->pc = 0x116d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 63));
    // 0x116d7c: 0x2b182  srl         $s6, $v0, 6
    ctx->pc = 0x116d7cu;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_116d80:
    // 0x116d80: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x116d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x116d84: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x116d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116d88: 0xc044502  jal         func_111408
    ctx->pc = 0x116D88u;
    SET_GPR_U32(ctx, 31, 0x116D90u);
    ctx->pc = 0x116D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116D88u;
            // 0x116d8c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111408u;
    if (runtime->hasFunction(0x111408u)) {
        auto targetFn = runtime->lookupFunction(0x111408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116D90u; }
        if (ctx->pc != 0x116D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsPageSize_0x111408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116D90u; }
        if (ctx->pc != 0x116D90u) { return; }
    }
    ctx->pc = 0x116D90u;
    // 0x116d90: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x116d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x116d94: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x116d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x116d98: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x116d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x116d9c: 0x2406c000  addiu       $a2, $zero, -0x4000
    ctx->pc = 0x116d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x116da0: 0x800013  mtlo        $a0
    ctx->pc = 0x116da0u;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x116da4: 0x32c5003f  andi        $a1, $s6, 0x3F
    ctx->pc = 0x116da4u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 22), _mm_cvtsi32_si128((int)63u)));
    // 0x116da8: 0x72838800  madd        $s1, $s4, $v1
    ctx->pc = 0x116da8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x116dac: 0x3c07fff0  lui         $a3, 0xFFF0
    ctx->pc = 0x116dacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65520 << 16));
    // 0x116db0: 0x34e73fff  ori         $a3, $a3, 0x3FFF
    ctx->pc = 0x116db0u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)16383u)));
    // 0x116db4: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x116db4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x116db8: 0xae3300c0  sw          $s3, 0xC0($s1)
    ctx->pc = 0x116db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 19));
    // 0x116dbc: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x116dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
    // 0x116dc0: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x116dc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x116dc4: 0x9e2400c0  lwu         $a0, 0xC0($s1)
    ctx->pc = 0x116dc4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x116dc8: 0x253182b  sltu        $v1, $s2, $s3
    ctx->pc = 0x116dc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x116dcc: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x116dccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x116dd0: 0x243980b  movn        $s3, $s2, $v1
    ctx->pc = 0x116dd0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 18));
    // 0x116dd4: 0x30843fff  andi        $a0, $a0, 0x3FFF
    ctx->pc = 0x116dd4u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)16383u)));
    // 0x116dd8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x116dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x116ddc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x116ddcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x116de0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x116de0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x116de4: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x116de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x116de8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x116de8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x116dec: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x116decu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x116df0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x116df0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x116df4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x116df4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x116df8: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x116DF8u;
    {
        const bool branch_taken_0x116df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x116DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116DF8u;
            // 0x116dfc: 0xae2300d4  sw          $v1, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116df8) {
            ctx->pc = 0x116EA0u;
            goto label_116ea0;
        }
    }
    ctx->pc = 0x116E00u;
    // 0x116e00: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x116e00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x116e04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x116e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116e08: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x116e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x116e0c: 0x214fe  dsrl32      $v0, $v0, 19
    ctx->pc = 0x116e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 19));
    // 0x116e10: 0x9603001e  lhu         $v1, 0x1E($s0)
    ctx->pc = 0x116e10u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x116e14: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x116e14u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)15u)));
    // 0x116e18: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x116e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x116e1c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x116e1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x116e20: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x116e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x116e24: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x116e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e28: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x116e28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e2c: 0x961e001c  lhu         $fp, 0x1C($s0)
    ctx->pc = 0x116e2cu;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x116e30: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x116e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x116e34: 0xc0444d4  jal         func_111350
    ctx->pc = 0x116E34u;
    SET_GPR_U32(ctx, 31, 0x116E3Cu);
    ctx->pc = 0x116E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116E34u;
            // 0x116e38: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111350u;
    if (runtime->hasFunction(0x111350u)) {
        auto targetFn = runtime->lookupFunction(0x111350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116E3Cu; }
        if (ctx->pc != 0x116E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsBlockSize_0x111350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116E3Cu; }
        if (ctx->pc != 0x116E3Cu) { return; }
    }
    ctx->pc = 0x116E3Cu;
    // 0x116e3c: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x116e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x116e40: 0x3c06fff8  lui         $a2, 0xFFF8
    ctx->pc = 0x116e40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65528 << 16));
    // 0x116e44: 0x34c6001f  ori         $a2, $a2, 0x1F
    ctx->pc = 0x116e44u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)31u)));
    // 0x116e48: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x116e48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x116e4c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x116e4cu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)65535u)));
    // 0x116e50: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x116e50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x116e54: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x116e54u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)65535u)));
    // 0x116e58: 0xae2200d0  sw          $v0, 0xD0($s1)
    ctx->pc = 0x116e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
    // 0x116e5c: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x116e5cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x116e60: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x116e60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x116e64: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x116e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x116e68: 0x528fa  dsrl        $a1, $a1, 3
    ctx->pc = 0x116e68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 3);
    // 0x116e6c: 0x262900b  movn        $s2, $s3, $v0
    ctx->pc = 0x116e6cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 19));
    // 0x116e70: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x116e70u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x116e74: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x116e74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x116e78: 0xae3200cc  sw          $s2, 0xCC($s1)
    ctx->pc = 0x116e78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 18));
    // 0x116e7c: 0x32433fff  andi        $v1, $s2, 0x3FFF
    ctx->pc = 0x116e7cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 18), _mm_cvtsi32_si128((int)16383u)));
    // 0x116e80: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x116e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x116e84: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x116e84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x116e88: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x116e88u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x116e8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x116e8cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x116e90: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x116e90u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x116e94: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x116e94u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x116e98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x116E98u;
    {
        const bool branch_taken_0x116e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116E98u;
            // 0x116e9c: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e98) {
            ctx->pc = 0x116EACu;
            goto label_116eac;
        }
    }
    ctx->pc = 0x116EA0u;
label_116ea0:
    // 0x116ea0: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x116ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
    // 0x116ea4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x116ea4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ea8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x116ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_116eac:
    // 0x116eac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x116eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116eb0: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x116EB0u;
    {
        const bool branch_taken_0x116eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116EB0u;
            // 0x116eb4: 0x8fa2002c  lw          $v0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116eb0) {
            ctx->pc = 0x1171A8u;
            goto label_1171a8;
        }
    }
    ctx->pc = 0x116EB8u;
    // 0x116eb8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x116eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x116ebc: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x116ebcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x116ec0: 0x104000b8  beqz        $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x116EC0u;
    {
        const bool branch_taken_0x116ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116EC0u;
            // 0x116ec4: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ec0) {
            ctx->pc = 0x1171A4u;
            goto label_1171a4;
        }
    }
    ctx->pc = 0x116EC8u;
    // 0x116ec8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x116ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x116ecc: 0x2442e440  addiu       $v0, $v0, -0x1BC0
    ctx->pc = 0x116eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960192));
    // 0x116ed0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x116ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x116ed4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x116ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x116ed8: 0x800008  jr          $a0
    ctx->pc = 0x116ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116EE0u: goto label_116ee0;
            case 0x116F8Cu: goto label_116f8c;
            case 0x116FDCu: goto label_116fdc;
            case 0x117050u: goto label_117050;
            case 0x11705Cu: goto label_11705c;
            case 0x1170ACu: goto label_1170ac;
            case 0x117120u: goto label_117120;
            default: break;
        }
        return;
    }
    ctx->pc = 0x116EE0u;
label_116ee0:
    // 0x116ee0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x116ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ee4: 0xc045ae2  jal         func_116B88
    ctx->pc = 0x116EE4u;
    SET_GPR_U32(ctx, 31, 0x116EECu);
    ctx->pc = 0x116EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116EE4u;
            // 0x116ee8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116B88u;
    if (runtime->hasFunction(0x116B88u)) {
        auto targetFn = runtime->lookupFunction(0x116B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116EECu; }
        if (ctx->pc != 0x116EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getPackedData_0x116b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116EECu; }
        if (ctx->pc != 0x116EECu) { return; }
    }
    ctx->pc = 0x116EECu;
    // 0x116eec: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x116eecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ef0: 0x112000ac  beqz        $t1, . + 4 + (0xAC << 2)
    ctx->pc = 0x116EF0u;
    {
        const bool branch_taken_0x116ef0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x116EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116EF0u;
            // 0x116ef4: 0x2404c000  addiu       $a0, $zero, -0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ef0) {
            ctx->pc = 0x1171A4u;
            goto label_1171a4;
        }
    }
    ctx->pc = 0x116EF8u;
    // 0x116ef8: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x116ef8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x116efc: 0xdd230000  ld          $v1, 0x0($t1)
    ctx->pc = 0x116efcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x116f00: 0x3c07000f  lui         $a3, 0xF
    ctx->pc = 0x116f00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15 << 16));
    // 0x116f04: 0x34e7c000  ori         $a3, $a3, 0xC000
    ctx->pc = 0x116f04u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)49152u)));
    // 0x116f08: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x116f08u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16383u)));
    // 0x116f0c: 0x3c05fff0  lui         $a1, 0xFFF0
    ctx->pc = 0x116f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65520 << 16));
    // 0x116f10: 0x34a53fff  ori         $a1, $a1, 0x3FFF
    ctx->pc = 0x116f10u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)16383u)));
    // 0x116f14: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x116f14u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x116f18: 0x3408fffc  ori         $t0, $zero, 0xFFFC
    ctx->pc = 0x116f18u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65532u)));
    // 0x116f1c: 0x840fc  dsll32      $t0, $t0, 3
    ctx->pc = 0x116f1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 3));
    // 0x116f20: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x116f20u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x116f24: 0x3c04fff8  lui         $a0, 0xFFF8
    ctx->pc = 0x116f24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65528 << 16));
    // 0x116f28: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x116f28u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)31u)));
    // 0x116f2c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x116f2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x116f30: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x116f30u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
    // 0x116f34: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x116f34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x116f38: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x116f38u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
    // 0x116f3c: 0xfd230000  sd          $v1, 0x0($t1)
    ctx->pc = 0x116f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x116f40: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x116f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x116f44: 0x630fa  dsrl        $a2, $a2, 3
    ctx->pc = 0x116f44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 3);
    // 0x116f48: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x116f48u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x116f4c: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x116f4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x116f50: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x116f50u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x116f54: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x116f54u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x116f58: 0xfd230000  sd          $v1, 0x0($t1)
    ctx->pc = 0x116f58u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x116f5c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x116f5cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x116f60: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x116f60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x116f64: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x116f64u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x116f68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x116f68u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x116f6c: 0xfd230000  sd          $v1, 0x0($t1)
    ctx->pc = 0x116f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x116f70: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x116f70u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x116f74: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x116f74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x116f78: 0x2177e  dsrl32      $v0, $v0, 29
    ctx->pc = 0x116f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 29));
    // 0x116f7c: 0x2177c  dsll32      $v0, $v0, 29
    ctx->pc = 0x116f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 29));
    // 0x116f80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x116f80u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x116f84: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x116F84u;
    {
        const bool branch_taken_0x116f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116F84u;
            // 0x116f88: 0xfd230000  sd          $v1, 0x0($t1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f84) {
            ctx->pc = 0x1171A4u;
            goto label_1171a4;
        }
    }
    ctx->pc = 0x116F8Cu;
label_116f8c:
    // 0x116f8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x116f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116f90: 0xc045ae2  jal         func_116B88
    ctx->pc = 0x116F90u;
    SET_GPR_U32(ctx, 31, 0x116F98u);
    ctx->pc = 0x116F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116F90u;
            // 0x116f94: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116B88u;
    if (runtime->hasFunction(0x116B88u)) {
        auto targetFn = runtime->lookupFunction(0x116B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116F98u; }
        if (ctx->pc != 0x116F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getPackedData_0x116b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116F98u; }
        if (ctx->pc != 0x116F98u) { return; }
    }
    ctx->pc = 0x116F98u;
    // 0x116f98: 0x12600082  beqz        $s3, . + 4 + (0x82 << 2)
    ctx->pc = 0x116F98u;
    {
        const bool branch_taken_0x116f98 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x116F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116F98u;
            // 0x116f9c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f98) {
            ctx->pc = 0x1171A4u;
            goto label_1171a4;
        }
    }
    ctx->pc = 0x116FA0u;
    // 0x116fa0: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x116fa0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x116fa4: 0x2405c000  addiu       $a1, $zero, -0x4000
    ctx->pc = 0x116fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x116fa8: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x116fa8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x116fac: 0x3c06000f  lui         $a2, 0xF
    ctx->pc = 0x116facu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15 << 16));
    // 0x116fb0: 0x34c6c000  ori         $a2, $a2, 0xC000
    ctx->pc = 0x116fb0u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)49152u)));
    // 0x116fb4: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x116fb4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16383u)));
    // 0x116fb8: 0x3c04fff0  lui         $a0, 0xFFF0
    ctx->pc = 0x116fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65520 << 16));
    // 0x116fbc: 0x34843fff  ori         $a0, $a0, 0x3FFF
    ctx->pc = 0x116fbcu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)16383u)));
    // 0x116fc0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x116fc0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x116fc4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x116fc4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x116fc8: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x116fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x116fcc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x116fccu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x116fd0: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x116fd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x116fd4: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x116FD4u;
    {
        const bool branch_taken_0x116fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116FD4u;
            // 0x116fd8: 0x461024  and         $v0, $v0, $a2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116fd4) {
            ctx->pc = 0x11719Cu;
            goto label_11719c;
        }
    }
    ctx->pc = 0x116FDCu;
label_116fdc:
    // 0x116fdc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x116fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116fe0: 0xc045ae2  jal         func_116B88
    ctx->pc = 0x116FE0u;
    SET_GPR_U32(ctx, 31, 0x116FE8u);
    ctx->pc = 0x116FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116FE0u;
            // 0x116fe4: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116B88u;
    if (runtime->hasFunction(0x116B88u)) {
        auto targetFn = runtime->lookupFunction(0x116B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116FE8u; }
        if (ctx->pc != 0x116FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getPackedData_0x116b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116FE8u; }
        if (ctx->pc != 0x116FE8u) { return; }
    }
    ctx->pc = 0x116FE8u;
    // 0x116fe8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x116fe8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116fec: 0x50e0006e  beql        $a3, $zero, . + 4 + (0x6E << 2)
    ctx->pc = 0x116FECu;
    {
        const bool branch_taken_0x116fec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x116fec) {
            ctx->pc = 0x116FF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x116FECu;
            // 0x116ff0: 0x8fa2002c  lw          $v0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1171A8u;
            goto label_1171a8;
        }
    }
    ctx->pc = 0x116FF4u;
    // 0x116ff4: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x116ff4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x116ff8: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x116ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x116ffc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x116ffcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x117000: 0x3484000f  ori         $a0, $a0, 0xF
    ctx->pc = 0x117000u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)15u)));
    // 0x117004: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x117004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x117008: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x117008u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
    // 0x11700c: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x11700cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x117010: 0x2405ff03  addiu       $a1, $zero, -0xFD
    ctx->pc = 0x117010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967043));
    // 0x117014: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x117014u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x117018: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x117018u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65535u)));
    // 0x11701c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x11701cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x117020: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x117020u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65535u)));
    // 0x117024: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x117024u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16383u)));
    // 0x117028: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x117028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x11702c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x11702cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x117030: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x117030u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x117034: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x117034u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x117038: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x117038u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x11703c: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x11703cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x117040: 0x213ba  dsrl        $v0, $v0, 14
    ctx->pc = 0x117040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 14);
    // 0x117044: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x117044u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)63u)));
    // 0x117048: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x117048u;
    {
        const bool branch_taken_0x117048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11704Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117048u;
            // 0x11704c: 0x210bc  dsll32      $v0, $v0, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117048) {
            ctx->pc = 0x11719Cu;
            goto label_11719c;
        }
    }
    ctx->pc = 0x117050u;
label_117050:
    // 0x117050: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x117050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117054: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x117054u;
    {
        const bool branch_taken_0x117054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117054u;
            // 0x117058: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117054) {
            ctx->pc = 0x117128u;
            goto label_117128;
        }
    }
    ctx->pc = 0x11705Cu;
label_11705c:
    // 0x11705c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11705cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117060: 0xc045ae2  jal         func_116B88
    ctx->pc = 0x117060u;
    SET_GPR_U32(ctx, 31, 0x117068u);
    ctx->pc = 0x117064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117060u;
            // 0x117064: 0x24050036  addiu       $a1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116B88u;
    if (runtime->hasFunction(0x116B88u)) {
        auto targetFn = runtime->lookupFunction(0x116B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117068u; }
        if (ctx->pc != 0x117068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getPackedData_0x116b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117068u; }
        if (ctx->pc != 0x117068u) { return; }
    }
    ctx->pc = 0x117068u;
    // 0x117068: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x117068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11706c: 0x10e0004d  beqz        $a3, . + 4 + (0x4D << 2)
    ctx->pc = 0x11706Cu;
    {
        const bool branch_taken_0x11706c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x117070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11706Cu;
            // 0x117070: 0x2405c000  addiu       $a1, $zero, -0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11706c) {
            ctx->pc = 0x1171A4u;
            goto label_1171a4;
        }
    }
    ctx->pc = 0x117074u;
    // 0x117074: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x117074u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x117078: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x117078u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11707c: 0x3c06000f  lui         $a2, 0xF
    ctx->pc = 0x11707cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15 << 16));
    // 0x117080: 0x34c6c000  ori         $a2, $a2, 0xC000
    ctx->pc = 0x117080u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)49152u)));
    // 0x117084: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x117084u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16383u)));
    // 0x117088: 0x3c04fff0  lui         $a0, 0xFFF0
    ctx->pc = 0x117088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65520 << 16));
    // 0x11708c: 0x34843fff  ori         $a0, $a0, 0x3FFF
    ctx->pc = 0x11708cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)16383u)));
    // 0x117090: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x117090u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x117094: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x117094u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x117098: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x117098u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x11709c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x11709cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1170a0: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x1170a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1170a4: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1170A4u;
    {
        const bool branch_taken_0x1170a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1170A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1170A4u;
            // 0x1170a8: 0x461024  and         $v0, $v0, $a2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1170a4) {
            ctx->pc = 0x11719Cu;
            goto label_11719c;
        }
    }
    ctx->pc = 0x1170ACu;
label_1170ac:
    // 0x1170ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1170acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1170b0: 0xc045ae2  jal         func_116B88
    ctx->pc = 0x1170B0u;
    SET_GPR_U32(ctx, 31, 0x1170B8u);
    ctx->pc = 0x1170B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1170B0u;
            // 0x1170b4: 0x24050036  addiu       $a1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116B88u;
    if (runtime->hasFunction(0x116B88u)) {
        auto targetFn = runtime->lookupFunction(0x116B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1170B8u; }
        if (ctx->pc != 0x1170B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getPackedData_0x116b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1170B8u; }
        if (ctx->pc != 0x1170B8u) { return; }
    }
    ctx->pc = 0x1170B8u;
    // 0x1170b8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1170b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1170bc: 0x50e0003a  beql        $a3, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x1170BCu;
    {
        const bool branch_taken_0x1170bc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1170bc) {
            ctx->pc = 0x1170C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1170BCu;
            // 0x1170c0: 0x8fa2002c  lw          $v0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1171A8u;
            goto label_1171a8;
        }
    }
    ctx->pc = 0x1170C4u;
    // 0x1170c4: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x1170c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1170c8: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x1170c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1170cc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1170ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1170d0: 0x3484000f  ori         $a0, $a0, 0xF
    ctx->pc = 0x1170d0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)15u)));
    // 0x1170d4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1170d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1170d8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1170d8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
    // 0x1170dc: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x1170dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1170e0: 0x2405ff03  addiu       $a1, $zero, -0xFD
    ctx->pc = 0x1170e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967043));
    // 0x1170e4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1170e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1170e8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1170e8u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65535u)));
    // 0x1170ec: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1170ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1170f0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1170f0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65535u)));
    // 0x1170f4: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x1170f4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16383u)));
    // 0x1170f8: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x1170f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x1170fc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1170fcu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x117100: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x117100u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x117104: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x117104u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x117108: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x117108u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x11710c: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x11710cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x117110: 0x213ba  dsrl        $v0, $v0, 14
    ctx->pc = 0x117110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 14);
    // 0x117114: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x117114u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)63u)));
    // 0x117118: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x117118u;
    {
        const bool branch_taken_0x117118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11711Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117118u;
            // 0x11711c: 0x210bc  dsll32      $v0, $v0, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117118) {
            ctx->pc = 0x11719Cu;
            goto label_11719c;
        }
    }
    ctx->pc = 0x117120u;
label_117120:
    // 0x117120: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x117120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117124: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x117124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_117128:
    // 0x117128: 0xc045ae2  jal         func_116B88
    ctx->pc = 0x117128u;
    SET_GPR_U32(ctx, 31, 0x117130u);
    ctx->pc = 0x116B88u;
    if (runtime->hasFunction(0x116B88u)) {
        auto targetFn = runtime->lookupFunction(0x116B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117130u; }
        if (ctx->pc != 0x117130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getPackedData_0x116b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117130u; }
        if (ctx->pc != 0x117130u) { return; }
    }
    ctx->pc = 0x117130u;
    // 0x117130: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x117130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117134: 0x10e0001c  beqz        $a3, . + 4 + (0x1C << 2)
    ctx->pc = 0x117134u;
    {
        const bool branch_taken_0x117134 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x117138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117134u;
            // 0x117138: 0x8fa2002c  lw          $v0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117134) {
            ctx->pc = 0x1171A8u;
            goto label_1171a8;
        }
    }
    ctx->pc = 0x11713Cu;
    // 0x11713c: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x11713cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x117140: 0x3c04ffc0  lui         $a0, 0xFFC0
    ctx->pc = 0x117140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65472 << 16));
    // 0x117144: 0x348400ff  ori         $a0, $a0, 0xFF
    ctx->pc = 0x117144u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)255u)));
    // 0x117148: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x117148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x11714c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x11714cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
    // 0x117150: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x117150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x117154: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x117154u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
    // 0x117158: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x117158u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11715c: 0x3c05f03f  lui         $a1, 0xF03F
    ctx->pc = 0x11715cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61503 << 16));
    // 0x117160: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x117160u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65535u)));
    // 0x117164: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x117164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x117168: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x117168u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65535u)));
    // 0x11716c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x11716cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x117170: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x117170u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65535u)));
    // 0x117174: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x117174u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16383u)));
    // 0x117178: 0x2123c  dsll32      $v0, $v0, 8
    ctx->pc = 0x117178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 8));
    // 0x11717c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x11717cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x117180: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x117180u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x117184: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x117184u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x117188: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x117188u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x11718c: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x11718cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x117190: 0x213ba  dsrl        $v0, $v0, 14
    ctx->pc = 0x117190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 14);
    // 0x117194: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x117194u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)63u)));
    // 0x117198: 0x215bc  dsll32      $v0, $v0, 22
    ctx->pc = 0x117198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
label_11719c:
    // 0x11719c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x11719cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1171a0: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x1171a0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
label_1171a4:
    // 0x1171a4: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1171a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1171a8:
    // 0x1171a8: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x1171a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1171ac: 0x172600  sll         $a0, $s7, 24
    ctx->pc = 0x1171acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 24));
    // 0x1171b0: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x1171b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1171b4: 0x400013  mtlo        $v0
    ctx->pc = 0x1171b4u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x1171b8: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1171b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1171bc: 0x72833800  madd        $a3, $s4, $v1
    ctx->pc = 0x1171bcu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x1171c0: 0x161400  sll         $v0, $s6, 16
    ctx->pc = 0x1171c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x1171c4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1171c4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1171c8: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x1171c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x1171cc: 0x34098004  ori         $t1, $zero, 0x8004
    ctx->pc = 0x1171ccu;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32772u)));
    // 0x1171d0: 0x240a0050  addiu       $t2, $zero, 0x50
    ctx->pc = 0x1171d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1171d4: 0x240c0051  addiu       $t4, $zero, 0x51
    ctx->pc = 0x1171d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1171d8: 0x240b0052  addiu       $t3, $zero, 0x52
    ctx->pc = 0x1171d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1171dc: 0x8ce200c0  lw          $v0, 0xC0($a3)
    ctx->pc = 0x1171dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 192)));
    // 0x1171e0: 0x240d0053  addiu       $t5, $zero, 0x53
    ctx->pc = 0x1171e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1171e4: 0x8ce300d4  lw          $v1, 0xD4($a3)
    ctx->pc = 0x1171e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 212)));
    // 0x1171e8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1171e8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1171ec: 0xace50034  sw          $a1, 0x34($a3)
    ctx->pc = 0x1171ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 5));
    // 0x1171f0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1171f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1171f4: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x1171f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
    // 0x1171f8: 0xacf50030  sw          $s5, 0x30($a3)
    ctx->pc = 0x1171f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 21));
    // 0x1171fc: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x1171fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x117200: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x117200u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
    // 0x117204: 0xace80004  sw          $t0, 0x4($a3)
    ctx->pc = 0x117204u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 8));
    // 0x117208: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x117208u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x11720c: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x11720cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x117210: 0xacea0018  sw          $t2, 0x18($a3)
    ctx->pc = 0x117210u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 10));
    // 0x117214: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x117214u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x117218: 0xace0002c  sw          $zero, 0x2C($a3)
    ctx->pc = 0x117218u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
    // 0x11721c: 0xacec0028  sw          $t4, 0x28($a3)
    ctx->pc = 0x11721cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 12));
    // 0x117220: 0xace00024  sw          $zero, 0x24($a3)
    ctx->pc = 0x117220u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 0));
    // 0x117224: 0xace00020  sw          $zero, 0x20($a3)
    ctx->pc = 0x117224u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
    // 0x117228: 0xace0003c  sw          $zero, 0x3C($a3)
    ctx->pc = 0x117228u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 0));
    // 0x11722c: 0xaceb0038  sw          $t3, 0x38($a3)
    ctx->pc = 0x11722cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 11));
    // 0x117230: 0xace0004c  sw          $zero, 0x4C($a3)
    ctx->pc = 0x117230u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 0));
    // 0x117234: 0xaced0048  sw          $t5, 0x48($a3)
    ctx->pc = 0x117234u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 13));
    // 0x117238: 0xace00044  sw          $zero, 0x44($a3)
    ctx->pc = 0x117238u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 68), GPR_U32(ctx, 0));
    // 0x11723c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x11723Cu;
    {
        const bool branch_taken_0x11723c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x117240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11723Cu;
            // 0x117240: 0xace00040  sw          $zero, 0x40($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11723c) {
            ctx->pc = 0x1172B4u;
            goto label_1172b4;
        }
    }
    ctx->pc = 0x117244u;
    // 0x117244: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x117244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x117248: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x117248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11724c: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x11724cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x117250: 0xace60058  sw          $a2, 0x58($a3)
    ctx->pc = 0x117250u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 88), GPR_U32(ctx, 6));
    // 0x117254: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x117254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x117258: 0xace80054  sw          $t0, 0x54($a3)
    ctx->pc = 0x117258u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 84), GPR_U32(ctx, 8));
    // 0x11725c: 0x8ce400cc  lw          $a0, 0xCC($a3)
    ctx->pc = 0x11725cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x117260: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x117260u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x117264: 0xace90050  sw          $t1, 0x50($a3)
    ctx->pc = 0x117264u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 9));
    // 0x117268: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x117268u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x11726c: 0xacea0068  sw          $t2, 0x68($a3)
    ctx->pc = 0x11726cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 104), GPR_U32(ctx, 10));
    // 0x117270: 0xacec0078  sw          $t4, 0x78($a3)
    ctx->pc = 0x117270u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 120), GPR_U32(ctx, 12));
    // 0x117274: 0xaceb0088  sw          $t3, 0x88($a3)
    ctx->pc = 0x117274u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 136), GPR_U32(ctx, 11));
    // 0x117278: 0xace20064  sw          $v0, 0x64($a3)
    ctx->pc = 0x117278u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 100), GPR_U32(ctx, 2));
    // 0x11727c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x11727cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x117280: 0xacfe0080  sw          $fp, 0x80($a3)
    ctx->pc = 0x117280u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 30));
    // 0x117284: 0xace20084  sw          $v0, 0x84($a3)
    ctx->pc = 0x117284u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 132), GPR_U32(ctx, 2));
    // 0x117288: 0xaced0098  sw          $t5, 0x98($a3)
    ctx->pc = 0x117288u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 152), GPR_U32(ctx, 13));
    // 0x11728c: 0xace0005c  sw          $zero, 0x5C($a3)
    ctx->pc = 0x11728cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 92), GPR_U32(ctx, 0));
    // 0x117290: 0xace0006c  sw          $zero, 0x6C($a3)
    ctx->pc = 0x117290u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 108), GPR_U32(ctx, 0));
    // 0x117294: 0xace00060  sw          $zero, 0x60($a3)
    ctx->pc = 0x117294u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 0));
    // 0x117298: 0xace0007c  sw          $zero, 0x7C($a3)
    ctx->pc = 0x117298u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 124), GPR_U32(ctx, 0));
    // 0x11729c: 0xace00074  sw          $zero, 0x74($a3)
    ctx->pc = 0x11729cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 116), GPR_U32(ctx, 0));
    // 0x1172a0: 0xace00070  sw          $zero, 0x70($a3)
    ctx->pc = 0x1172a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 112), GPR_U32(ctx, 0));
    // 0x1172a4: 0xace0008c  sw          $zero, 0x8C($a3)
    ctx->pc = 0x1172a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 140), GPR_U32(ctx, 0));
    // 0x1172a8: 0xace0009c  sw          $zero, 0x9C($a3)
    ctx->pc = 0x1172a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 156), GPR_U32(ctx, 0));
    // 0x1172ac: 0xace00094  sw          $zero, 0x94($a3)
    ctx->pc = 0x1172acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 148), GPR_U32(ctx, 0));
    // 0x1172b0: 0xace00090  sw          $zero, 0x90($a3)
    ctx->pc = 0x1172b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 0));
label_1172b4:
    // 0x1172b4: 0x8ce200c8  lw          $v0, 0xC8($a3)
    ctx->pc = 0x1172b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 200)));
    // 0x1172b8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x1172b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x1172bc: 0xace000ac  sw          $zero, 0xAC($a3)
    ctx->pc = 0x1172bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 172), GPR_U32(ctx, 0));
    // 0x1172c0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1172c0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32768u)));
    // 0x1172c4: 0xace000a8  sw          $zero, 0xA8($a3)
    ctx->pc = 0x1172c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 168), GPR_U32(ctx, 0));
    // 0x1172c8: 0xace200a0  sw          $v0, 0xA0($a3)
    ctx->pc = 0x1172c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 160), GPR_U32(ctx, 2));
    // 0x1172cc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1172CCu;
    {
        const bool branch_taken_0x1172cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1172D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1172CCu;
            // 0x1172d0: 0xace300a4  sw          $v1, 0xA4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1172cc) {
            ctx->pc = 0x1172E8u;
            goto label_1172e8;
        }
    }
    ctx->pc = 0x1172D4u;
    // 0x1172d4: 0x34a28000  ori         $v0, $a1, 0x8000
    ctx->pc = 0x1172d4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)32768u)));
    // 0x1172d8: 0xace300b4  sw          $v1, 0xB4($a3)
    ctx->pc = 0x1172d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 180), GPR_U32(ctx, 3));
    // 0x1172dc: 0xace200b0  sw          $v0, 0xB0($a3)
    ctx->pc = 0x1172dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 176), GPR_U32(ctx, 2));
    // 0x1172e0: 0xace000bc  sw          $zero, 0xBC($a3)
    ctx->pc = 0x1172e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 188), GPR_U32(ctx, 0));
    // 0x1172e4: 0xace000b8  sw          $zero, 0xB8($a3)
    ctx->pc = 0x1172e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 184), GPR_U32(ctx, 0));
label_1172e8:
    // 0x1172e8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1172e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1172ec: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1172ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1172f0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1172f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1172f4: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1172f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1172f8: 0x1440fe73  bnez        $v0, . + 4 + (-0x18D << 2)
    ctx->pc = 0x1172F8u;
    {
        const bool branch_taken_0x1172f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1172FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1172F8u;
            // 0x1172fc: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1172f8) {
            ctx->pc = 0x116CC8u;
            goto label_116cc8;
        }
    }
    ctx->pc = 0x117300u;
label_117300:
    // 0x117300: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x117300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117304: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x117304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_117308:
    // 0x117308: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x117308u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11730c: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x11730cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x117310: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x117310u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x117314: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x117314u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x117318: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x117318u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11731c: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x11731cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x117320: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x117320u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x117324: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x117324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x117328: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x117328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11732c: 0x3e00008  jr          $ra
    ctx->pc = 0x11732Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11732Cu;
            // 0x117330: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116C6Cu: goto label_116c6c;
            case 0x116C8Cu: goto label_116c8c;
            case 0x116C9Cu: goto label_116c9c;
            case 0x116CACu: goto label_116cac;
            case 0x116CB0u: goto label_116cb0;
            case 0x116CC8u: goto label_116cc8;
            case 0x116D18u: goto label_116d18;
            case 0x116D1Cu: goto label_116d1c;
            case 0x116D78u: goto label_116d78;
            case 0x116D80u: goto label_116d80;
            case 0x116EA0u: goto label_116ea0;
            case 0x116EACu: goto label_116eac;
            case 0x116EE0u: goto label_116ee0;
            case 0x116F8Cu: goto label_116f8c;
            case 0x116FDCu: goto label_116fdc;
            case 0x117050u: goto label_117050;
            case 0x11705Cu: goto label_11705c;
            case 0x1170ACu: goto label_1170ac;
            case 0x117120u: goto label_117120;
            case 0x117128u: goto label_117128;
            case 0x11719Cu: goto label_11719c;
            case 0x1171A4u: goto label_1171a4;
            case 0x1171A8u: goto label_1171a8;
            case 0x1172B4u: goto label_1172b4;
            case 0x1172E8u: goto label_1172e8;
            case 0x117300u: goto label_117300;
            case 0x117308u: goto label_117308;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117334u;
}
