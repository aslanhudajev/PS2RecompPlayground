#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _request_bind
// Address: 0x131b38 - 0x131be8
void _request_bind_0x131b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_request_bind_0x131b38");
#endif

    ctx->pc = 0x131b38u;

    // 0x131b38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x131b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x131b3c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x131b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x131b40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x131b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x131b44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x131b44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131b48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x131b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131b4c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x131b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x131b50: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x131b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x131b54: 0xc04c5ce  jal         func_131738
    ctx->pc = 0x131B54u;
    SET_GPR_U32(ctx, 31, 0x131B5Cu);
    ctx->pc = 0x131B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131B54u;
            // 0x131b58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131738u;
    if (runtime->hasFunction(0x131738u)) {
        auto targetFn = runtime->lookupFunction(0x131738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B5Cu; }
        if (ctx->pc != 0x131B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceRpcGetFPacket_0x131738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B5Cu; }
        if (ctx->pc != 0x131B5Cu) { return; }
    }
    ctx->pc = 0x131B5Cu;
    // 0x131b5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x131b5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131b60: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x131b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x131b64: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x131b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x131b68: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x131b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x131b6c: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x131b6cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9u)));
    // 0x131b70: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x131b70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
    // 0x131b74: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x131b74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x131b78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x131b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131b7c: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x131b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x131b80: 0xc04c6ba  jal         func_131AE8
    ctx->pc = 0x131B80u;
    SET_GPR_U32(ctx, 31, 0x131B88u);
    ctx->pc = 0x131B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131B80u;
            // 0x131b84: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131AE8u;
    if (runtime->hasFunction(0x131AE8u)) {
        auto targetFn = runtime->lookupFunction(0x131AE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B88u; }
        if (ctx->pc != 0x131B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _search_svdata_0x131ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B88u; }
        if (ctx->pc != 0x131B88u) { return; }
    }
    ctx->pc = 0x131B88u;
    // 0x131b88: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x131b88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131b8c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x131B8Cu;
    {
        const bool branch_taken_0x131b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x131b8c) {
            ctx->pc = 0x131B90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131B8Cu;
            // 0x131b90: 0xae430024  sw          $v1, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131BA4u;
            goto label_131ba4;
        }
    }
    ctx->pc = 0x131B94u;
    // 0x131b94: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x131b94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x131b98: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x131b98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x131b9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x131B9Cu;
    {
        const bool branch_taken_0x131b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131B9Cu;
            // 0x131ba0: 0xae40002c  sw          $zero, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131b9c) {
            ctx->pc = 0x131BB4u;
            goto label_131bb4;
        }
    }
    ctx->pc = 0x131BA4u;
label_131ba4:
    // 0x131ba4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x131ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x131ba8: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x131ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x131bac: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x131bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x131bb0: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x131bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_131bb4:
    // 0x131bb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x131bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131bb8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x131bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x131bbc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x131bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131bc0: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x131bc0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)8u)));
    // 0x131bc4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x131bc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131bc8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x131bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x131bcc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x131bccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131bd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x131bd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131bd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x131bd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131bd8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x131bd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131bdc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x131bdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131be0: 0x804c4a4  j           func_131290
    ctx->pc = 0x131BE0u;
    ctx->pc = 0x131BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131BE0u;
            // 0x131be4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131290u;
    if (runtime->hasFunction(0x131290u)) {
        auto targetFn = runtime->lookupFunction(0x131290u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        isceSifSendCmd_0x131290(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x131BE8u;
}
