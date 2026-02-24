#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _request_rdata
// Address: 0x10fff8 - 0x110058
void _request_rdata_0x10fff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_request_rdata_0x10fff8");
#endif

    ctx->pc = 0x10fff8u;

    // 0x10fff8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10fff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10fffc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10fffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x110000: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x110000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x110004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x110008: 0xc043fb4  jal         func_10FED0
    ctx->pc = 0x110008u;
    SET_GPR_U32(ctx, 31, 0x110010u);
    ctx->pc = 0x11000Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110008u;
            // 0x11000c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FED0u;
    if (runtime->hasFunction(0x10FED0u)) {
        auto targetFn = runtime->lookupFunction(0x10FED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110010u; }
        if (ctx->pc != 0x110010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceRpcGetFPacket_0x10fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110010u; }
        if (ctx->pc != 0x110010u) { return; }
    }
    ctx->pc = 0x110010u;
    // 0x110010: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x110010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x110014: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x110014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x110018: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x110018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11001c: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x11001cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)12u)));
    // 0x110020: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x110020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x110024: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x110024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x110028: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x110028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x11002c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11002cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110030: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x110030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x110034: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x110034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x110038: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x110038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11003c: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x11003cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)8u)));
    // 0x110040: 0x8e090028  lw          $t1, 0x28($s0)
    ctx->pc = 0x110040u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x110044: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x110044u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x110048: 0x8e080024  lw          $t0, 0x24($s0)
    ctx->pc = 0x110048u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x11004c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11004cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110050: 0x80456c0  j           func_115B00
    ctx->pc = 0x110050u;
    ctx->pc = 0x110054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110050u;
            // 0x110054: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115B00u;
    if (runtime->hasFunction(0x115B00u)) {
        auto targetFn = runtime->lookupFunction(0x115B00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        isceSifSendCmd_0x115b00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x110058u;
}
