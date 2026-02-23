#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxf_LoadData
// Address: 0x16a640 - 0x16a730
void adxf_LoadData_0x16a640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxf_LoadData");


    ctx->pc = 0x16a640u;

    // 0x16a640: 0x27bdffb0
    ctx->pc = 0x16a640u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16a644: 0xffb30030
    ctx->pc = 0x16a644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x16a648: 0xffb20020
    ctx->pc = 0x16a648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16a64c: 0xa0982d
    ctx->pc = 0x16a64cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a650: 0xffb10010
    ctx->pc = 0x16a650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x16a654: 0xc0902d
    ctx->pc = 0x16a654u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a658: 0xffb00000
    ctx->pc = 0x16a658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a65c: 0x80882d
    ctx->pc = 0x16a65cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a660: 0xffbf0040
    ctx->pc = 0x16a660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16a664: 0x1000000a
    ctx->pc = 0x16A664u;
    {
        const bool branch_taken_0x16a664 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A668u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a664) {
            ctx->pc = 0x16A690u;
            goto label_16a690;
        }
    }
    ctx->pc = 0x16A66Cu;
    // 0x16a66c: 0x0
    ctx->pc = 0x16a66cu;
    // NOP
label_16a670:
    // 0x16a670: 0xc05d3a0
    ctx->pc = 0x16A670u;
    SET_GPR_U32(ctx, 31, 0x16A678u);
    ctx->pc = 0x16A674u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x174E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsExecServer_0x174e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A678u; }
        else if (ctx->pc != 0x16A678u) { ctx->pc = 0x16A678u; }
    }
    if (ctx->pc != 0x16A678u) { return; }
    ctx->pc = 0x16A678u;
    // 0x16a678: 0xc05c408
    ctx->pc = 0x16A678u;
    SET_GPR_U32(ctx, 31, 0x16A680u);
    ctx->pc = 0x171020u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_ExecServer_0x171020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A680u; }
        else if (ctx->pc != 0x16A680u) { ctx->pc = 0x16A680u; }
    }
    if (ctx->pc != 0x16A680u) { return; }
    ctx->pc = 0x16A680u;
    // 0x16a680: 0xc05af7a
    ctx->pc = 0x16A680u;
    SET_GPR_U32(ctx, 31, 0x16A688u);
    ctx->pc = 0x16BDE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ExecServer_0x16bde8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A688u; }
        else if (ctx->pc != 0x16A688u) { ctx->pc = 0x16A688u; }
    }
    if (ctx->pc != 0x16A688u) { return; }
    ctx->pc = 0x16A688u;
    // 0x16a688: 0xc05a972
    ctx->pc = 0x16A688u;
    SET_GPR_U32(ctx, 31, 0x16A690u);
    ctx->pc = 0x16A5C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_wait_1ms_0x16a5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A690u; }
        else if (ctx->pc != 0x16A690u) { ctx->pc = 0x16A690u; }
    }
    if (ctx->pc != 0x16A690u) { return; }
    ctx->pc = 0x16A690u;
label_16a690:
    // 0x16a690: 0x2a022710
    ctx->pc = 0x16a690u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 10000));
    // 0x16a694: 0x10400006
    ctx->pc = 0x16A694u;
    {
        const bool branch_taken_0x16a694 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A698u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a694) {
            ctx->pc = 0x16A6B0u;
            goto label_16a6b0;
        }
    }
    ctx->pc = 0x16A69Cu;
    // 0x16a69c: 0x260282d
    ctx->pc = 0x16a69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a6a0: 0xc05aeba
    ctx->pc = 0x16A6A0u;
    SET_GPR_U32(ctx, 31, 0x16A6A8u);
    ctx->pc = 0x16A6A4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A6A8u; }
        else if (ctx->pc != 0x16A6A8u) { ctx->pc = 0x16A6A8u; }
    }
    if (ctx->pc != 0x16A6A8u) { return; }
    ctx->pc = 0x16A6A8u;
    // 0x16a6a8: 0x1840fff1
    ctx->pc = 0x16A6A8u;
    {
        const bool branch_taken_0x16a6a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x16a6a8) {
            ctx->pc = 0x16A670u;
            goto label_16a670;
        }
    }
    ctx->pc = 0x16A6B0u;
label_16a6b0:
    // 0x16a6b0: 0x24022710
    ctx->pc = 0x16a6b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10000));
    // 0x16a6b4: 0x16020003
    ctx->pc = 0x16A6B4u;
    {
        const bool branch_taken_0x16a6b4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x16A6B8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a6b4) {
            ctx->pc = 0x16A6C4u;
            goto label_16a6c4;
        }
    }
    ctx->pc = 0x16A6BCu;
    // 0x16a6bc: 0x10000015
    ctx->pc = 0x16A6BCu;
    {
        const bool branch_taken_0x16a6bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A6C0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a6bc) {
            ctx->pc = 0x16A714u;
            goto label_16a714;
        }
    }
    ctx->pc = 0x16A6C4u;
label_16a6c4:
    // 0x16a6c4: 0x10000004
    ctx->pc = 0x16A6C4u;
    {
        const bool branch_taken_0x16a6c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A6C8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x16a6c4) {
            ctx->pc = 0x16A6D8u;
            goto label_16a6d8;
        }
    }
    ctx->pc = 0x16A6CCu;
    // 0x16a6cc: 0x0
    ctx->pc = 0x16a6ccu;
    // NOP
label_16a6d0:
    // 0x16a6d0: 0xc05a972
    ctx->pc = 0x16A6D0u;
    SET_GPR_U32(ctx, 31, 0x16A6D8u);
    ctx->pc = 0x16A6D4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x16A5C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_wait_1ms_0x16a5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A6D8u; }
        else if (ctx->pc != 0x16A6D8u) { ctx->pc = 0x16A6D8u; }
    }
    if (ctx->pc != 0x16A6D8u) { return; }
    ctx->pc = 0x16A6D8u;
label_16a6d8:
    // 0x16a6d8: 0x2a022710
    ctx->pc = 0x16a6d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 10000));
    // 0x16a6dc: 0x1040000b
    ctx->pc = 0x16A6DCu;
    {
        const bool branch_taken_0x16a6dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16a6dc) {
            ctx->pc = 0x16A70Cu;
            goto label_16a70c;
        }
    }
    ctx->pc = 0x16A6E4u;
    // 0x16a6e4: 0xc05d3a0
    ctx->pc = 0x16A6E4u;
    SET_GPR_U32(ctx, 31, 0x16A6ECu);
    ctx->pc = 0x174E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsExecServer_0x174e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A6ECu; }
        else if (ctx->pc != 0x16A6ECu) { ctx->pc = 0x16A6ECu; }
    }
    if (ctx->pc != 0x16A6ECu) { return; }
    ctx->pc = 0x16A6ECu;
    // 0x16a6ec: 0xc05c408
    ctx->pc = 0x16A6ECu;
    SET_GPR_U32(ctx, 31, 0x16A6F4u);
    ctx->pc = 0x171020u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_ExecServer_0x171020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A6F4u; }
        else if (ctx->pc != 0x16A6F4u) { ctx->pc = 0x16A6F4u; }
    }
    if (ctx->pc != 0x16A6F4u) { return; }
    ctx->pc = 0x16A6F4u;
    // 0x16a6f4: 0xc05af7a
    ctx->pc = 0x16A6F4u;
    SET_GPR_U32(ctx, 31, 0x16A6FCu);
    ctx->pc = 0x16BDE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ExecServer_0x16bde8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A6FCu; }
        else if (ctx->pc != 0x16A6FCu) { ctx->pc = 0x16A6FCu; }
    }
    if (ctx->pc != 0x16A6FCu) { return; }
    ctx->pc = 0x16A6FCu;
    // 0x16a6fc: 0xc05b018
    ctx->pc = 0x16A6FCu;
    SET_GPR_U32(ctx, 31, 0x16A704u);
    ctx->pc = 0x16A700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A704u; }
        else if (ctx->pc != 0x16A704u) { ctx->pc = 0x16A704u; }
    }
    if (ctx->pc != 0x16A704u) { return; }
    ctx->pc = 0x16A704u;
    // 0x16a704: 0x1452fff2
    ctx->pc = 0x16A704u;
    {
        const bool branch_taken_0x16a704 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x16a704) {
            ctx->pc = 0x16A6D0u;
            goto label_16a6d0;
        }
    }
    ctx->pc = 0x16A70Cu;
label_16a70c:
    // 0x16a70c: 0xc05b00c
    ctx->pc = 0x16A70Cu;
    SET_GPR_U32(ctx, 31, 0x16A714u);
    ctx->pc = 0x16A710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16C030u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetNumReadSct_0x16c030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A714u; }
        else if (ctx->pc != 0x16A714u) { ctx->pc = 0x16A714u; }
    }
    if (ctx->pc != 0x16A714u) { return; }
    ctx->pc = 0x16A714u;
label_16a714:
    // 0x16a714: 0xdfbf0040
    ctx->pc = 0x16a714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16a718: 0xdfb30030
    ctx->pc = 0x16a718u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16a71c: 0xdfb20020
    ctx->pc = 0x16a71cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a720: 0xdfb10010
    ctx->pc = 0x16a720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a724: 0xdfb00000
    ctx->pc = 0x16a724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a728: 0x3e00008
    ctx->pc = 0x16A728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A72Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A670u: goto label_16a670;
            case 0x16A690u: goto label_16a690;
            case 0x16A6B0u: goto label_16a6b0;
            case 0x16A6C4u: goto label_16a6c4;
            case 0x16A6D0u: goto label_16a6d0;
            case 0x16A6D8u: goto label_16a6d8;
            case 0x16A70Cu: goto label_16a70c;
            case 0x16A714u: goto label_16a714;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16A730u;
}
