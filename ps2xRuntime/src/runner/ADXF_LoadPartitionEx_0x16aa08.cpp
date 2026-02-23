#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_LoadPartitionEx
// Address: 0x16aa08 - 0x16acd0
void ADXF_LoadPartitionEx_0x16aa08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_LoadPartitionEx");


    ctx->pc = 0x16aa08u;

    // 0x16aa08: 0x27bdff60
    ctx->pc = 0x16aa08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x16aa0c: 0xffb20020
    ctx->pc = 0x16aa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16aa10: 0xffb10010
    ctx->pc = 0x16aa10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x16aa14: 0xa0902d
    ctx->pc = 0x16aa14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa18: 0xffb00000
    ctx->pc = 0x16aa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16aa1c: 0x80882d
    ctx->pc = 0x16aa1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa20: 0xffb30030
    ctx->pc = 0x16aa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x16aa24: 0xe0802d
    ctx->pc = 0x16aa24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa28: 0xffb40040
    ctx->pc = 0x16aa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x16aa2c: 0xc0982d
    ctx->pc = 0x16aa2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa30: 0xffbf0090
    ctx->pc = 0x16aa30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x16aa34: 0xffbe0080
    ctx->pc = 0x16aa34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x16aa38: 0x200282d
    ctx->pc = 0x16aa38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa3c: 0xffb70070
    ctx->pc = 0x16aa3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x16aa40: 0xffb60060
    ctx->pc = 0x16aa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x16aa44: 0xc05a97e
    ctx->pc = 0x16AA44u;
    SET_GPR_U32(ctx, 31, 0x16AA4Cu);
    ctx->pc = 0x16AA48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    ctx->pc = 0x16A5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_ChkPrmPt_0x16a5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA4Cu; }
        else if (ctx->pc != 0x16AA4Cu) { ctx->pc = 0x16AA4Cu; }
    }
    if (ctx->pc != 0x16AA4Cu) { return; }
    ctx->pc = 0x16AA4Cu;
    // 0x16aa4c: 0x40a02d
    ctx->pc = 0x16aa4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa50: 0x6800094
    ctx->pc = 0x16AA50u;
    {
        const bool branch_taken_0x16aa50 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x16AA54u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x16aa50) {
            ctx->pc = 0x16ACA4u;
            goto label_16aca4;
        }
    }
    ctx->pc = 0x16AA58u;
    // 0x16aa58: 0x240202d
    ctx->pc = 0x16aa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa5c: 0xc05ad72
    ctx->pc = 0x16AA5Cu;
    SET_GPR_U32(ctx, 31, 0x16AA64u);
    ctx->pc = 0x16AA60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16B5C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Open_0x16b5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA64u; }
        else if (ctx->pc != 0x16AA64u) { ctx->pc = 0x16AA64u; }
    }
    if (ctx->pc != 0x16AA64u) { return; }
    ctx->pc = 0x16AA64u;
    // 0x16aa64: 0x40b82d
    ctx->pc = 0x16aa64u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa68: 0x56e0000f
    ctx->pc = 0x16AA68u;
    {
        const bool branch_taken_0x16aa68 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 0));
        if (branch_taken_0x16aa68) {
            ctx->pc = 0x16AA6Cu;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x16AAA8u;
            goto label_16aaa8;
        }
    }
    ctx->pc = 0x16AA70u;
    // 0x16aa70: 0x3c04002c
    ctx->pc = 0x16aa70u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16aa74: 0xc05a854
    ctx->pc = 0x16AA74u;
    SET_GPR_U32(ctx, 31, 0x16AA7Cu);
    ctx->pc = 0x16AA78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939048));
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA7Cu; }
        else if (ctx->pc != 0x16AA7Cu) { ctx->pc = 0x16AA7Cu; }
    }
    if (ctx->pc != 0x16AA7Cu) { return; }
    ctx->pc = 0x16AA7Cu;
    // 0x16aa7c: 0x10000088
    ctx->pc = 0x16AA7Cu;
    {
        const bool branch_taken_0x16aa7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16AA80u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x16aa7c) {
            ctx->pc = 0x16ACA0u;
            goto label_16aca0;
        }
    }
    ctx->pc = 0x16AA84u;
label_16aa84:
    // 0x16aa84: 0x3c04002c
    ctx->pc = 0x16aa84u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16aa88: 0xacc70004
    ctx->pc = 0x16aa88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x16aa8c: 0x24849208
    ctx->pc = 0x16aa8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939144));
    // 0x16aa90: 0xc05a854
    ctx->pc = 0x16AA90u;
    SET_GPR_U32(ctx, 31, 0x16AA98u);
    ctx->pc = 0x16AA94u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967292));
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA98u; }
        else if (ctx->pc != 0x16AA98u) { ctx->pc = 0x16AA98u; }
    }
    if (ctx->pc != 0x16AA98u) { return; }
    ctx->pc = 0x16AA98u;
    // 0x16aa98: 0x1000007e
    ctx->pc = 0x16AA98u;
    {
        const bool branch_taken_0x16aa98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x16aa98) {
            ctx->pc = 0x16AC94u;
            goto label_16ac94;
        }
    }
    ctx->pc = 0x16AAA0u;
label_16aaa0:
    // 0x16aaa0: 0x1000007c
    ctx->pc = 0x16AAA0u;
    {
        const bool branch_taken_0x16aaa0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16AAA4u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16aaa0) {
            ctx->pc = 0x16AC94u;
            goto label_16ac94;
        }
    }
    ctx->pc = 0x16AAA8u;
label_16aaa8:
    // 0x16aaa8: 0x282d
    ctx->pc = 0x16aaa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aaac: 0x24060118
    ctx->pc = 0x16aaacu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 280));
    // 0x16aab0: 0xc050cfe
    ctx->pc = 0x16AAB0u;
    SET_GPR_U32(ctx, 31, 0x16AAB8u);
    ctx->pc = 0x16AAB4u;
    SET_GPR_U32(ctx, 21, ((uint32_t)46 << 16));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AAB8u; }
        else if (ctx->pc != 0x16AAB8u) { ctx->pc = 0x16AAB8u; }
    }
    if (ctx->pc != 0x16AAB8u) { return; }
    ctx->pc = 0x16AAB8u;
    // 0x16aab8: 0x26160114
    ctx->pc = 0x16aab8u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 16), 276));
    // 0x16aabc: 0x3c020023
    ctx->pc = 0x16aabcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x16aac0: 0x111880
    ctx->pc = 0x16aac0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x16aac4: 0x2442c918
    ctx->pc = 0x16aac4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953240));
    // 0x16aac8: 0xae000000
    ctx->pc = 0x16aac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x16aacc: 0x621821
    ctx->pc = 0x16aaccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16aad0: 0x240282d
    ctx->pc = 0x16aad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aad4: 0xac700000
    ctx->pc = 0x16aad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x16aad8: 0x26040010
    ctx->pc = 0x16aad8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 16));
    // 0x16aadc: 0x24060100
    ctx->pc = 0x16aadcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    // 0x16aae0: 0xc05167c
    ctx->pc = 0x16AAE0u;
    SET_GPR_U32(ctx, 31, 0x16AAE8u);
    ctx->pc = 0x16AAE4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1459F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x1459f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AAE8u; }
        else if (ctx->pc != 0x16AAE8u) { ctx->pc = 0x16AAE8u; }
    }
    if (ctx->pc != 0x16AAE8u) { return; }
    ctx->pc = 0x16AAE8u;
    // 0x16aae8: 0x882d
    ctx->pc = 0x16aae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aaec: 0x3c03002e
    ctx->pc = 0x16aaecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)46 << 16));
    // 0x16aaf0: 0x3c02ffff
    ctx->pc = 0x16aaf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x16aaf4: 0x3442ffc0
    ctx->pc = 0x16aaf4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65472));
    // 0x16aaf8: 0x2463cfe0
    ctx->pc = 0x16aaf8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294954976));
    // 0x16aafc: 0x621824
    ctx->pc = 0x16aafcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ab00: 0xa200000e
    ctx->pc = 0x16ab00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x16ab04: 0x3c02002e
    ctx->pc = 0x16ab04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x16ab08: 0xae130110
    ctx->pc = 0x16ab08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 19));
    // 0x16ab0c: 0xac43f0a0
    ctx->pc = 0x16ab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963360), GPR_U32(ctx, 3));
    // 0x16ab10: 0x982d
    ctx->pc = 0x16ab10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ab14: 0xaea3f0a4
    ctx->pc = 0x16ab14u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294963364), GPR_U32(ctx, 3));
    // 0x16ab18: 0x241effff
    ctx->pc = 0x16ab18u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16ab1c: 0xae000008
    ctx->pc = 0x16ab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x16ab20: 0x2c0902d
    ctx->pc = 0x16ab20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ab24: 0x8ea6f0a4
    ctx->pc = 0x16ab24u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 4294963364)));
label_16ab28:
    // 0x16ab28: 0x2e0202d
    ctx->pc = 0x16ab28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ab2c: 0xc05a990
    ctx->pc = 0x16AB2Cu;
    SET_GPR_U32(ctx, 31, 0x16AB34u);
    ctx->pc = 0x16AB30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16A640u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_LoadData_0x16a640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB34u; }
        else if (ctx->pc != 0x16AB34u) { ctx->pc = 0x16AB34u; }
    }
    if (ctx->pc != 0x16AB34u) { return; }
    ctx->pc = 0x16AB34u;
    // 0x16ab34: 0x5840004f
    ctx->pc = 0x16AB34u;
    {
        const bool branch_taken_0x16ab34 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x16ab34) {
            ctx->pc = 0x16AB38u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x16AC74u;
            goto label_16ac74;
        }
    }
    ctx->pc = 0x16AB3Cu;
    // 0x16ab3c: 0x8e080008
    ctx->pc = 0x16ab3cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16ab40: 0x1500002b
    ctx->pc = 0x16AB40u;
    {
        const bool branch_taken_0x16ab40 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x16AB44u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16ab40) {
            ctx->pc = 0x16ABF0u;
            goto label_16abf0;
        }
    }
    ctx->pc = 0x16AB48u;
    // 0x16ab48: 0x3c02002e
    ctx->pc = 0x16ab48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x16ab4c: 0x3c070001
    ctx->pc = 0x16ab4cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)1 << 16));
    // 0x16ab50: 0x8c46f0a4
    ctx->pc = 0x16ab50u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294963364)));
    // 0x16ab54: 0x90c50007
    ctx->pc = 0x16ab54u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
    // 0x16ab58: 0x90c30006
    ctx->pc = 0x16ab58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x16ab5c: 0x90c40005
    ctx->pc = 0x16ab5cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x16ab60: 0x52e00
    ctx->pc = 0x16ab60u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x16ab64: 0x90c20004
    ctx->pc = 0x16ab64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x16ab68: 0x31c00
    ctx->pc = 0x16ab68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x16ab6c: 0x42200
    ctx->pc = 0x16ab6cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x16ab70: 0x451025
    ctx->pc = 0x16ab70u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16ab74: 0x641825
    ctx->pc = 0x16ab74u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16ab78: 0x431025
    ctx->pc = 0x16ab78u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16ab7c: 0xe2102a
    ctx->pc = 0x16ab7cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 2)));
    // 0x16ab80: 0x1440ffc0
    ctx->pc = 0x16AB80u;
    {
        const bool branch_taken_0x16ab80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16AB84u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x16ab80) {
            ctx->pc = 0x16AA84u;
            goto label_16aa84;
        }
    }
    ctx->pc = 0x16AB88u;
    // 0x16ab88: 0x90c20005
    ctx->pc = 0x16ab88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x16ab8c: 0x90c30004
    ctx->pc = 0x16ab8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x16ab90: 0x21200
    ctx->pc = 0x16ab90u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x16ab94: 0x621825
    ctx->pc = 0x16ab94u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ab98: 0x60202d
    ctx->pc = 0x16ab98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ab9c: 0xa603000c
    ctx->pc = 0x16ab9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x16aba0: 0x2482008c
    ctx->pc = 0x16aba0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 140));
    // 0x16aba4: 0xae040008
    ctx->pc = 0x16aba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x16aba8: 0x21042
    ctx->pc = 0x16aba8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x16abac: 0x21080
    ctx->pc = 0x16abacu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x16abb0: 0xae020004
    ctx->pc = 0x16abb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16abb4: 0x90c50009
    ctx->pc = 0x16abb4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
    // 0x16abb8: 0x90c2000b
    ctx->pc = 0x16abb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 11)));
    // 0x16abbc: 0x90c4000a
    ctx->pc = 0x16abbcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x16abc0: 0x52a00
    ctx->pc = 0x16abc0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 8));
    // 0x16abc4: 0x90c30008
    ctx->pc = 0x16abc4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x16abc8: 0x21600
    ctx->pc = 0x16abc8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x16abcc: 0x42400
    ctx->pc = 0x16abccu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x16abd0: 0x621825
    ctx->pc = 0x16abd0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16abd4: 0x852025
    ctx->pc = 0x16abd4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16abd8: 0x641825
    ctx->pc = 0x16abd8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16abdc: 0x246207ff
    ctx->pc = 0x16abdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2047));
    // 0x16abe0: 0x3c3202a
    ctx->pc = 0x16abe0u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 30), GPR_S32(ctx, 3)));
    // 0x16abe4: 0x64100b
    ctx->pc = 0x16abe4u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x16abe8: 0x212c3
    ctx->pc = 0x16abe8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x16abec: 0xa6c20000
    ctx->pc = 0x16abecu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
label_16abf0:
    // 0x16abf0: 0x29220200
    ctx->pc = 0x16abf0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 512));
    // 0x16abf4: 0x1040001f
    ctx->pc = 0x16ABF4u;
    {
        const bool branch_taken_0x16abf4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16ABF8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16abf4) {
            ctx->pc = 0x16AC74u;
            goto label_16ac74;
        }
    }
    ctx->pc = 0x16ABFCu;
    // 0x16abfc: 0x8e080008
    ctx->pc = 0x16abfcu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16ac00: 0x8ea2f0a4
    ctx->pc = 0x16ac00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294963364)));
    // 0x16ac04: 0x0
    ctx->pc = 0x16ac04u;
    // NOP
label_16ac08:
    // 0x16ac08: 0x92080
    ctx->pc = 0x16ac08u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 9), 2));
    // 0x16ac0c: 0x26520002
    ctx->pc = 0x16ac0cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 2));
    // 0x16ac10: 0x26730001
    ctx->pc = 0x16ac10u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x16ac14: 0x822021
    ctx->pc = 0x16ac14u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16ac18: 0x268382a
    ctx->pc = 0x16ac18u;
    SET_GPR_U32(ctx, 7, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 8)));
    // 0x16ac1c: 0x90860001
    ctx->pc = 0x16ac1cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x16ac20: 0x90850003
    ctx->pc = 0x16ac20u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x16ac24: 0x90830002
    ctx->pc = 0x16ac24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x16ac28: 0x63200
    ctx->pc = 0x16ac28u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x16ac2c: 0x90820000
    ctx->pc = 0x16ac2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16ac30: 0x52e00
    ctx->pc = 0x16ac30u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x16ac34: 0x31c00
    ctx->pc = 0x16ac34u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x16ac38: 0x661825
    ctx->pc = 0x16ac38u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x16ac3c: 0x451025
    ctx->pc = 0x16ac3cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16ac40: 0x431025
    ctx->pc = 0x16ac40u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16ac44: 0x244407ff
    ctx->pc = 0x16ac44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2047));
    // 0x16ac48: 0x24420ffe
    ctx->pc = 0x16ac48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4094));
    // 0x16ac4c: 0x3c4182a
    ctx->pc = 0x16ac4cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 30), GPR_S32(ctx, 4)));
    // 0x16ac50: 0x83100b
    ctx->pc = 0x16ac50u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x16ac54: 0x212c3
    ctx->pc = 0x16ac54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x16ac58: 0x10e0ff91
    ctx->pc = 0x16AC58u;
    {
        const bool branch_taken_0x16ac58 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x16AC5Cu;
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x16ac58) {
            ctx->pc = 0x16AAA0u;
            goto label_16aaa0;
        }
    }
    ctx->pc = 0x16AC60u;
    // 0x16ac60: 0x25290002
    ctx->pc = 0x16ac60u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 2));
    // 0x16ac64: 0x29220200
    ctx->pc = 0x16ac64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 512));
    // 0x16ac68: 0x1440ffe7
    ctx->pc = 0x16AC68u;
    {
        const bool branch_taken_0x16ac68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16AC6Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294963364)));
        if (branch_taken_0x16ac68) {
            ctx->pc = 0x16AC08u;
            goto label_16ac08;
        }
    }
    ctx->pc = 0x16AC70u;
    // 0x16ac70: 0x882d
    ctx->pc = 0x16ac70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ac74:
    // 0x16ac74: 0x2a220003
    ctx->pc = 0x16ac74u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 3));
    // 0x16ac78: 0x1440ffab
    ctx->pc = 0x16AC78u;
    {
        const bool branch_taken_0x16ac78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16AC7Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 4294963364)));
        if (branch_taken_0x16ac78) {
            ctx->pc = 0x16AB28u;
            goto label_16ab28;
        }
    }
    ctx->pc = 0x16AC80u;
    // 0x16ac80: 0x24020003
    ctx->pc = 0x16ac80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x16ac84: 0x16220003
    ctx->pc = 0x16AC84u;
    {
        const bool branch_taken_0x16ac84 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x16AC88u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x16ac84) {
            ctx->pc = 0x16AC94u;
            goto label_16ac94;
        }
    }
    ctx->pc = 0x16AC8Cu;
    // 0x16ac8c: 0xc05a854
    ctx->pc = 0x16AC8Cu;
    SET_GPR_U32(ctx, 31, 0x16AC94u);
    ctx->pc = 0x16AC90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939096));
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC94u; }
        else if (ctx->pc != 0x16AC94u) { ctx->pc = 0x16AC94u; }
    }
    if (ctx->pc != 0x16AC94u) { return; }
    ctx->pc = 0x16AC94u;
label_16ac94:
    // 0x16ac94: 0xc05ae0c
    ctx->pc = 0x16AC94u;
    SET_GPR_U32(ctx, 31, 0x16AC9Cu);
    ctx->pc = 0x16AC98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16B830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Close_0x16b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC9Cu; }
        else if (ctx->pc != 0x16AC9Cu) { ctx->pc = 0x16AC9Cu; }
    }
    if (ctx->pc != 0x16AC9Cu) { return; }
    ctx->pc = 0x16AC9Cu;
    // 0x16ac9c: 0x280102d
    ctx->pc = 0x16ac9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16aca0:
    // 0x16aca0: 0xdfbf0090
    ctx->pc = 0x16aca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_16aca4:
    // 0x16aca4: 0xdfbe0080
    ctx->pc = 0x16aca4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16aca8: 0xdfb70070
    ctx->pc = 0x16aca8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16acac: 0xdfb60060
    ctx->pc = 0x16acacu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16acb0: 0xdfb50050
    ctx->pc = 0x16acb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16acb4: 0xdfb40040
    ctx->pc = 0x16acb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16acb8: 0xdfb30030
    ctx->pc = 0x16acb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16acbc: 0xdfb20020
    ctx->pc = 0x16acbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16acc0: 0xdfb10010
    ctx->pc = 0x16acc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16acc4: 0xdfb00000
    ctx->pc = 0x16acc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16acc8: 0x3e00008
    ctx->pc = 0x16ACC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16ACCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16AA84u: goto label_16aa84;
            case 0x16AAA0u: goto label_16aaa0;
            case 0x16AAA8u: goto label_16aaa8;
            case 0x16AB28u: goto label_16ab28;
            case 0x16ABF0u: goto label_16abf0;
            case 0x16AC08u: goto label_16ac08;
            case 0x16AC74u: goto label_16ac74;
            case 0x16AC94u: goto label_16ac94;
            case 0x16ACA0u: goto label_16aca0;
            case 0x16ACA4u: goto label_16aca4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16ACD0u;
}
