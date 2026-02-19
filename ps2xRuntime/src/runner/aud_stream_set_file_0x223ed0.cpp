#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: aud_stream_set_file
// Address: 0x223ed0 - 0x223f94
void aud_stream_set_file_0x223ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x223ed0u;

    // 0x223ed0: 0x27bdffa0
    ctx->pc = 0x223ed0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x223ed4: 0xffbf0050
    ctx->pc = 0x223ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x223ed8: 0xffb40040
    ctx->pc = 0x223ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x223edc: 0xffb30030
    ctx->pc = 0x223edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x223ee0: 0xffb20020
    ctx->pc = 0x223ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x223ee4: 0xffb10010
    ctx->pc = 0x223ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x223ee8: 0xffb00000
    ctx->pc = 0x223ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x223eec: 0x80882d
    ctx->pc = 0x223eecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223ef0: 0xa0982d
    ctx->pc = 0x223ef0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223ef4: 0xc0a02d
    ctx->pc = 0x223ef4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223ef8: 0xc088cb6
    ctx->pc = 0x223EF8u;
    SET_GPR_U32(ctx, 31, 0x223F00u);
    ctx->pc = 0x223EFCu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967292));
    ctx->pc = 0x2232D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        wipe_tx_buf_0x2232d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223F00u; }
    }
    if (ctx->pc != 0x223F00u) { return; }
    ctx->pc = 0x223F00u;
    // 0x223f00: 0x16200003
    ctx->pc = 0x223F00u;
    {
        const bool branch_taken_0x223f00 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x223F04u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x223f00) {
            ctx->pc = 0x223F10u;
            goto label_223f10;
        }
    }
    ctx->pc = 0x223F08u;
    // 0x223f08: 0x10000019
    ctx->pc = 0x223F08u;
    {
        const bool branch_taken_0x223f08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x223F0Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x223f08) {
            ctx->pc = 0x223F70u;
            goto label_223f70;
        }
    }
    ctx->pc = 0x223F10u;
label_223f10:
    // 0x223f10: 0x8c4206e8
    ctx->pc = 0x223f10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1768)));
    // 0x223f14: 0x14400017
    ctx->pc = 0x223F14u;
    {
        const bool branch_taken_0x223f14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x223F18u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x223f14) {
            ctx->pc = 0x223F74u;
            goto label_223f74;
        }
    }
    ctx->pc = 0x223F1Cu;
    // 0x223f1c: 0x3c10003c
    ctx->pc = 0x223f1cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x223f20: 0x26040b40
    ctx->pc = 0x223f20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2880));
    // 0x223f24: 0x220282d
    ctx->pc = 0x223f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f28: 0xc0bf42e
    ctx->pc = 0x223F28u;
    SET_GPR_U32(ctx, 31, 0x223F30u);
    ctx->pc = 0x223F2Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1023));
    ctx->pc = 0x2FD0B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x2fd0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223F30u; }
    }
    if (ctx->pc != 0x223F30u) { return; }
    ctx->pc = 0x223F30u;
    // 0x223f30: 0x3c02003c
    ctx->pc = 0x223f30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x223f34: 0x24510ac0
    ctx->pc = 0x223f34u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 2752));
    // 0x223f38: 0x26100b40
    ctx->pc = 0x223f38u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2880));
    // 0x223f3c: 0xac500ac0
    ctx->pc = 0x223f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2752), GPR_U32(ctx, 16));
    // 0x223f40: 0xc0bf306
    ctx->pc = 0x223F40u;
    SET_GPR_U32(ctx, 31, 0x223F48u);
    ctx->pc = 0x223F44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223F48u; }
    }
    if (ctx->pc != 0x223F48u) { return; }
    ctx->pc = 0x223F48u;
    // 0x223f48: 0x24420001
    ctx->pc = 0x223f48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x223f4c: 0xae220004
    ctx->pc = 0x223f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x223f50: 0xae330008
    ctx->pc = 0x223f50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x223f54: 0xae34000c
    ctx->pc = 0x223f54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 20));
    // 0x223f58: 0x24040008
    ctx->pc = 0x223f58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x223f5c: 0xc088ce8
    ctx->pc = 0x223F5Cu;
    SET_GPR_U32(ctx, 31, 0x223F64u);
    ctx->pc = 0x223F60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2233A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        audIOP_0x2233a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223F64u; }
    }
    if (ctx->pc != 0x223F64u) { return; }
    ctx->pc = 0x223F64u;
    // 0x223f64: 0x4400002
    ctx->pc = 0x223F64u;
    {
        const bool branch_taken_0x223f64 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x223F68u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x223f64) {
            ctx->pc = 0x223F70u;
            goto label_223f70;
        }
    }
    ctx->pc = 0x223F6Cu;
    // 0x223f6c: 0x8c520b00
    ctx->pc = 0x223f6cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 2816)));
label_223f70:
    // 0x223f70: 0x240102d
    ctx->pc = 0x223f70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_223f74:
    // 0x223f74: 0xdfbf0050
    ctx->pc = 0x223f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x223f78: 0xdfb40040
    ctx->pc = 0x223f78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x223f7c: 0xdfb30030
    ctx->pc = 0x223f7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223f80: 0xdfb20020
    ctx->pc = 0x223f80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223f84: 0xdfb10010
    ctx->pc = 0x223f84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223f88: 0xdfb00000
    ctx->pc = 0x223f88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223f8c: 0x3e00008
    ctx->pc = 0x223F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223F90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223F10u: goto label_223f10;
            case 0x223F70u: goto label_223f70;
            case 0x223F74u: goto label_223f74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x223F94u;
}
