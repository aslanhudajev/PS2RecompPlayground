#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LoadWorldData
// Address: 0x261ad0 - 0x261e5c
void LoadWorldData_0x261ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x261ad0u;

    // 0x261ad0: 0x27bdff60
    ctx->pc = 0x261ad0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x261ad4: 0xffbf0090
    ctx->pc = 0x261ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x261ad8: 0xffbe0080
    ctx->pc = 0x261ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x261adc: 0xffb70070
    ctx->pc = 0x261adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x261ae0: 0xffb60060
    ctx->pc = 0x261ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x261ae4: 0xffb50050
    ctx->pc = 0x261ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x261ae8: 0xffb40040
    ctx->pc = 0x261ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x261aec: 0xffb30030
    ctx->pc = 0x261aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x261af0: 0xffb20020
    ctx->pc = 0x261af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x261af4: 0xffb10010
    ctx->pc = 0x261af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x261af8: 0x80b82d
    ctx->pc = 0x261af8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261afc: 0x6e000cb
    ctx->pc = 0x261AFCu;
    {
        const bool branch_taken_0x261afc = (GPR_S32(ctx, 23) < 0);
        ctx->pc = 0x261B00u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x261afc) {
            ctx->pc = 0x261E2Cu;
            goto label_261e2c;
        }
    }
    ctx->pc = 0x261B04u;
    // 0x261b04: 0x17a203
    ctx->pc = 0x261b04u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 23), 8));
    // 0x261b08: 0x3c020034
    ctx->pc = 0x261b08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x261b0c: 0x8c42e7c4
    ctx->pc = 0x261b0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961092)));
    // 0x261b10: 0x10540080
    ctx->pc = 0x261B10u;
    {
        const bool branch_taken_0x261b10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 20));
        ctx->pc = 0x261B14u;
        SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 23), 255));
        if (branch_taken_0x261b10) {
            ctx->pc = 0x261D14u;
            goto label_261d14;
        }
    }
    ctx->pc = 0x261B18u;
    // 0x261b18: 0x982d
    ctx->pc = 0x261b18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261b1c: 0x2416002c
    ctx->pc = 0x261b1cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 44));
    // 0x261b20: 0x3c020034
    ctx->pc = 0x261b20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x261b24: 0x2450e530
    ctx->pc = 0x261b24u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294960432));
    // 0x261b28: 0x3c020034
    ctx->pc = 0x261b28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x261b2c: 0x245ee788
    ctx->pc = 0x261b2cu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 4294961032));
    // 0x261b30: 0x3c120034
    ctx->pc = 0x261b30u;
    SET_GPR_U32(ctx, 18, ((uint32_t)52 << 16));
    // 0x261b34: 0x3c150034
    ctx->pc = 0x261b34u;
    SET_GPR_U32(ctx, 21, ((uint32_t)52 << 16));
    // 0x261b38: 0x2761818
    ctx->pc = 0x261b38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x261b3c: 0x0
    ctx->pc = 0x261b3cu;
    // NOP
label_261b40:
    // 0x261b40: 0x3c040034
    ctx->pc = 0x261b40u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x261b44: 0x2484e520
    ctx->pc = 0x261b44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960416));
    // 0x261b48: 0x641021
    ctx->pc = 0x261b48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x261b4c: 0x8c420000
    ctx->pc = 0x261b4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261b50: 0x54540067
    ctx->pc = 0x261B50u;
    {
        const bool branch_taken_0x261b50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 20));
        if (branch_taken_0x261b50) {
            ctx->pc = 0x261B54u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x261CF0u;
            goto label_261cf0;
        }
    }
    ctx->pc = 0x261B58u;
    // 0x261b58: 0x701021
    ctx->pc = 0x261b58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x261b5c: 0x8c420000
    ctx->pc = 0x261b5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261b60: 0x1040005b
    ctx->pc = 0x261B60u;
    {
        const bool branch_taken_0x261b60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x261B64u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x261b60) {
            ctx->pc = 0x261CD0u;
            goto label_261cd0;
        }
    }
    ctx->pc = 0x261B68u;
    // 0x261b68: 0x24503208
    ctx->pc = 0x261b68u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 12808));
    // 0x261b6c: 0x131080
    ctx->pc = 0x261b6cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
    // 0x261b70: 0x5e1021
    ctx->pc = 0x261b70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x261b74: 0x200202d
    ctx->pc = 0x261b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261b78: 0xc0b5116
    ctx->pc = 0x261B78u;
    SET_GPR_U32(ctx, 31, 0x261B80u);
    ctx->pc = 0x261B7Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2D4458u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetupWad_0x2d4458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261B80u; }
    }
    if (ctx->pc != 0x261B80u) { return; }
    ctx->pc = 0x261B80u;
    // 0x261b80: 0x200202d
    ctx->pc = 0x261b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261b84: 0x3c055752
    ctx->pc = 0x261b84u;
    SET_GPR_U32(ctx, 5, ((uint32_t)22354 << 16));
    // 0x261b88: 0x34a54c44
    ctx->pc = 0x261b88u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 19524));
    // 0x261b8c: 0xc0b514a
    ctx->pc = 0x261B8Cu;
    SET_GPR_U32(ctx, 31, 0x261B94u);
    ctx->pc = 0x261B90u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 21), 4294961296));
    ctx->pc = 0x2D4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetFromWad_0x2d4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261B94u; }
    }
    if (ctx->pc != 0x261B94u) { return; }
    ctx->pc = 0x261B94u;
    // 0x261b94: 0xae42e7c0
    ctx->pc = 0x261b94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294961088), GPR_U32(ctx, 2));
    // 0x261b98: 0x8ea2e890
    ctx->pc = 0x261b98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294961296)));
    // 0x261b9c: 0x14400006
    ctx->pc = 0x261B9Cu;
    {
        const bool branch_taken_0x261b9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x261BA0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x261b9c) {
            ctx->pc = 0x261BB8u;
            goto label_261bb8;
        }
    }
    ctx->pc = 0x261BA4u;
    // 0x261ba4: 0x3c04003b
    ctx->pc = 0x261ba4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x261ba8: 0x248497f8
    ctx->pc = 0x261ba8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294940664));
    // 0x261bac: 0xc0b4976
    ctx->pc = 0x261BACu;
    SET_GPR_U32(ctx, 31, 0x261BB4u);
    ctx->pc = 0x261BB0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261BB4u; }
    }
    if (ctx->pc != 0x261BB4u) { return; }
    ctx->pc = 0x261BB4u;
    // 0x261bb4: 0x200202d
    ctx->pc = 0x261bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261bb8:
    // 0x261bb8: 0x3c054c45
    ctx->pc = 0x261bb8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)19525 << 16));
    // 0x261bbc: 0x34a5564c
    ctx->pc = 0x261bbcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 22092));
    // 0x261bc0: 0xc0b514a
    ctx->pc = 0x261BC0u;
    SET_GPR_U32(ctx, 31, 0x261BC8u);
    ctx->pc = 0x261BC4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetFromWad_0x2d4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261BC8u; }
    }
    if (ctx->pc != 0x261BC8u) { return; }
    ctx->pc = 0x261BC8u;
    // 0x261bc8: 0x8e43e7c0
    ctx->pc = 0x261bc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4294961088)));
    // 0x261bcc: 0xac62001c
    ctx->pc = 0x261bccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x261bd0: 0x200202d
    ctx->pc = 0x261bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261bd4: 0x3c05454e
    ctx->pc = 0x261bd4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)17742 << 16));
    // 0x261bd8: 0x34a54d59
    ctx->pc = 0x261bd8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 19801));
    // 0x261bdc: 0xc0b514a
    ctx->pc = 0x261BDCu;
    SET_GPR_U32(ctx, 31, 0x261BE4u);
    ctx->pc = 0x261BE0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetFromWad_0x2d4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261BE4u; }
    }
    if (ctx->pc != 0x261BE4u) { return; }
    ctx->pc = 0x261BE4u;
    // 0x261be4: 0x8e43e7c0
    ctx->pc = 0x261be4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4294961088)));
    // 0x261be8: 0xac620020
    ctx->pc = 0x261be8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x261bec: 0x200202d
    ctx->pc = 0x261becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261bf0: 0x3c054341
    ctx->pc = 0x261bf0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)17217 << 16));
    // 0x261bf4: 0x34a54d53
    ctx->pc = 0x261bf4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 19795));
    // 0x261bf8: 0xc0b514a
    ctx->pc = 0x261BF8u;
    SET_GPR_U32(ctx, 31, 0x261C00u);
    ctx->pc = 0x261BFCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetFromWad_0x2d4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261C00u; }
    }
    if (ctx->pc != 0x261C00u) { return; }
    ctx->pc = 0x261C00u;
    // 0x261c00: 0x8e43e7c0
    ctx->pc = 0x261c00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4294961088)));
    // 0x261c04: 0xac620024
    ctx->pc = 0x261c04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x261c08: 0x200202d
    ctx->pc = 0x261c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261c0c: 0x3c054155
    ctx->pc = 0x261c0cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)16725 << 16));
    // 0x261c10: 0x34a54453
    ctx->pc = 0x261c10u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 17491));
    // 0x261c14: 0xc0b514a
    ctx->pc = 0x261C14u;
    SET_GPR_U32(ctx, 31, 0x261C1Cu);
    ctx->pc = 0x261C18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetFromWad_0x2d4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261C1Cu; }
    }
    if (ctx->pc != 0x261C1Cu) { return; }
    ctx->pc = 0x261C1Cu;
    // 0x261c1c: 0x8e43e7c0
    ctx->pc = 0x261c1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4294961088)));
    // 0x261c20: 0xac620028
    ctx->pc = 0x261c20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    // 0x261c24: 0x200202d
    ctx->pc = 0x261c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261c28: 0x3c05534e
    ctx->pc = 0x261c28u;
    SET_GPR_U32(ctx, 5, ((uint32_t)21326 << 16));
    // 0x261c2c: 0x34a54453
    ctx->pc = 0x261c2cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 17491));
    // 0x261c30: 0xc0b514a
    ctx->pc = 0x261C30u;
    SET_GPR_U32(ctx, 31, 0x261C38u);
    ctx->pc = 0x261C34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetFromWad_0x2d4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261C38u; }
    }
    if (ctx->pc != 0x261C38u) { return; }
    ctx->pc = 0x261C38u;
    // 0x261c38: 0x8e43e7c0
    ctx->pc = 0x261c38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4294961088)));
    // 0x261c3c: 0xac62002c
    ctx->pc = 0x261c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x261c40: 0x200202d
    ctx->pc = 0x261c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261c44: 0x3c054d41
    ctx->pc = 0x261c44u;
    SET_GPR_U32(ctx, 5, ((uint32_t)19777 << 16));
    // 0x261c48: 0x34a55053
    ctx->pc = 0x261c48u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 20563));
    // 0x261c4c: 0xc0b514a
    ctx->pc = 0x261C4Cu;
    SET_GPR_U32(ctx, 31, 0x261C54u);
    ctx->pc = 0x261C50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetFromWad_0x2d4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261C54u; }
    }
    if (ctx->pc != 0x261C54u) { return; }
    ctx->pc = 0x261C54u;
    // 0x261c54: 0x8e43e7c0
    ctx->pc = 0x261c54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4294961088)));
    // 0x261c58: 0xac620030
    ctx->pc = 0x261c58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x261c5c: 0x200202d
    ctx->pc = 0x261c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261c60: 0x3c054243
    ctx->pc = 0x261c60u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16963 << 16));
    // 0x261c64: 0x34a5414d
    ctx->pc = 0x261c64u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 16717));
    // 0x261c68: 0xc0b514a
    ctx->pc = 0x261C68u;
    SET_GPR_U32(ctx, 31, 0x261C70u);
    ctx->pc = 0x261C6Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetFromWad_0x2d4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261C70u; }
    }
    if (ctx->pc != 0x261C70u) { return; }
    ctx->pc = 0x261C70u;
    // 0x261c70: 0x8e44e7c0
    ctx->pc = 0x261c70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4294961088)));
    // 0x261c74: 0xac820034
    ctx->pc = 0x261c74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
    // 0x261c78: 0x3c020034
    ctx->pc = 0x261c78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x261c7c: 0xac54e7c4
    ctx->pc = 0x261c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961092), GPR_U32(ctx, 20));
    // 0x261c80: 0x3c02003c
    ctx->pc = 0x261c80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x261c84: 0xac533200
    ctx->pc = 0x261c84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12800), GPR_U32(ctx, 19));
    // 0x261c88: 0x3c020034
    ctx->pc = 0x261c88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x261c8c: 0x2442e534
    ctx->pc = 0x261c8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294960436));
    // 0x261c90: 0x400013
    ctx->pc = 0x261c90u;
    ctx->lo = GPR_U32(ctx, 2);
    // 0x261c94: 0x72761800
    ctx->pc = 0x261c94u;
    { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 22); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x261c98: 0x8c620000
    ctx->pc = 0x261c98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x261c9c: 0x4410003
    ctx->pc = 0x261C9Cu;
    {
        const bool branch_taken_0x261c9c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x261c9c) {
            ctx->pc = 0x261CACu;
            goto label_261cac;
        }
    }
    ctx->pc = 0x261CA4u;
    // 0x261ca4: 0x84820018
    ctx->pc = 0x261ca4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x261ca8: 0xac620000
    ctx->pc = 0x261ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_261cac:
    // 0x261cac: 0xc09859c
    ctx->pc = 0x261CACu;
    SET_GPR_U32(ctx, 31, 0x261CB4u);
    ctx->pc = 0x261670u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResolveWorldData_0x261670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261CB4u; }
    }
    if (ctx->pc != 0x261CB4u) { return; }
    ctx->pc = 0x261CB4u;
    // 0x261cb4: 0x3c030034
    ctx->pc = 0x261cb4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x261cb8: 0x2463e53c
    ctx->pc = 0x261cb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294960444));
    // 0x261cbc: 0x600013
    ctx->pc = 0x261cbcu;
    ctx->lo = GPR_U32(ctx, 3);
    // 0x261cc0: 0x72761000
    ctx->pc = 0x261cc0u;
    { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 22); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x261cc4: 0x3c040034
    ctx->pc = 0x261cc4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x261cc8: 0x1000000c
    ctx->pc = 0x261CC8u;
    {
        const bool branch_taken_0x261cc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x261CCCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294961352), GPR_U32(ctx, 2));
        if (branch_taken_0x261cc8) {
            ctx->pc = 0x261CFCu;
            goto label_261cfc;
        }
    }
    ctx->pc = 0x261CD0u;
label_261cd0:
    // 0x261cd0: 0x2761018
    ctx->pc = 0x261cd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x261cd4: 0x3c050034
    ctx->pc = 0x261cd4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x261cd8: 0x24a5e524
    ctx->pc = 0x261cd8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294960420));
    // 0x261cdc: 0x3c04003b
    ctx->pc = 0x261cdcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x261ce0: 0x24849818
    ctx->pc = 0x261ce0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294940696));
    // 0x261ce4: 0xc0b4976
    ctx->pc = 0x261CE4u;
    SET_GPR_U32(ctx, 31, 0x261CECu);
    ctx->pc = 0x261CE8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261CECu; }
    }
    if (ctx->pc != 0x261CECu) { return; }
    ctx->pc = 0x261CECu;
    // 0x261cec: 0x26730001
    ctx->pc = 0x261cecu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_261cf0:
    // 0x261cf0: 0x2e62000e
    ctx->pc = 0x261cf0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 14));
    // 0x261cf4: 0x1440ff92
    ctx->pc = 0x261CF4u;
    {
        const bool branch_taken_0x261cf4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x261CF8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x261cf4) {
            ctx->pc = 0x261B40u;
            goto label_261b40;
        }
    }
    ctx->pc = 0x261CFCu;
label_261cfc:
    // 0x261cfc: 0x2402000e
    ctx->pc = 0x261cfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x261d00: 0x16620004
    ctx->pc = 0x261D00u;
    {
        const bool branch_taken_0x261d00 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x261D04u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x261d00) {
            ctx->pc = 0x261D14u;
            goto label_261d14;
        }
    }
    ctx->pc = 0x261D08u;
    // 0x261d08: 0x24849830
    ctx->pc = 0x261d08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294940720));
    // 0x261d0c: 0xc0b4976
    ctx->pc = 0x261D0Cu;
    SET_GPR_U32(ctx, 31, 0x261D14u);
    ctx->pc = 0x261D10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261D14u; }
    }
    if (ctx->pc != 0x261D14u) { return; }
    ctx->pc = 0x261D14u;
label_261d14:
    // 0x261d14: 0x6200006
    ctx->pc = 0x261D14u;
    {
        const bool branch_taken_0x261d14 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x261D18u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x261d14) {
            ctx->pc = 0x261D30u;
            goto label_261d30;
        }
    }
    ctx->pc = 0x261D1Cu;
    // 0x261d1c: 0x8c42e7c0
    ctx->pc = 0x261d1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961088)));
    // 0x261d20: 0x84420018
    ctx->pc = 0x261d20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x261d24: 0x222102a
    ctx->pc = 0x261d24u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x261d28: 0x14400003
    ctx->pc = 0x261D28u;
    {
        const bool branch_taken_0x261d28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x261D2Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x261d28) {
            ctx->pc = 0x261D38u;
            goto label_261d38;
        }
    }
    ctx->pc = 0x261D30u;
label_261d30:
    // 0x261d30: 0x882d
    ctx->pc = 0x261d30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261d34: 0x3c020034
    ctx->pc = 0x261d34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_261d38:
    // 0x261d38: 0x40402d
    ctx->pc = 0x261d38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261d3c: 0x8c45e7c0
    ctx->pc = 0x261d3cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294961088)));
    // 0x261d40: 0xa4b10016
    ctx->pc = 0x261d40u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 17));
    // 0x261d44: 0x3c020034
    ctx->pc = 0x261d44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x261d48: 0x2407010c
    ctx->pc = 0x261d48u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 268));
    // 0x261d4c: 0x2272018
    ctx->pc = 0x261d4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x261d50: 0x8ca6001c
    ctx->pc = 0x261d50u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x261d54: 0x862021
    ctx->pc = 0x261d54u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x261d58: 0xac44e7c8
    ctx->pc = 0x261d58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961096), GPR_U32(ctx, 4));
    // 0x261d5c: 0x3c020034
    ctx->pc = 0x261d5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x261d60: 0xac54e7f0
    ctx->pc = 0x261d60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961136), GPR_U32(ctx, 20));
    // 0x261d64: 0x3c030034
    ctx->pc = 0x261d64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x261d68: 0x3a82000c
    ctx->pc = 0x261d68u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 20), 12));
    // 0x261d6c: 0x2c420001
    ctx->pc = 0x261d6cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x261d70: 0xac62e898
    ctx->pc = 0x261d70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961304), GPR_U32(ctx, 2));
    // 0x261d74: 0x3c020034
    ctx->pc = 0x261d74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x261d78: 0xac51e7f4
    ctx->pc = 0x261d78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961140), GPR_U32(ctx, 17));
    // 0x261d7c: 0x3c020032
    ctx->pc = 0x261d7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x261d80: 0xac5707b8
    ctx->pc = 0x261d80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1976), GPR_U32(ctx, 23));
    // 0x261d84: 0x3c030036
    ctx->pc = 0x261d84u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x261d88: 0x8c820044
    ctx->pc = 0x261d88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x261d8c: 0xac62d934
    ctx->pc = 0x261d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957364), GPR_U32(ctx, 2));
    // 0x261d90: 0x26310001
    ctx->pc = 0x261d90u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x261d94: 0x84a20018
    ctx->pc = 0x261d94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x261d98: 0x222102a
    ctx->pc = 0x261d98u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x261d9c: 0x1040001e
    ctx->pc = 0x261D9Cu;
    {
        const bool branch_taken_0x261d9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x261DA0u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x261d9c) {
            ctx->pc = 0x261E18u;
            goto label_261e18;
        }
    }
    ctx->pc = 0x261DA4u;
    // 0x261da4: 0x661021
    ctx->pc = 0x261da4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x261da8: 0x94420004
    ctx->pc = 0x261da8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x261dac: 0x30420001
    ctx->pc = 0x261dacu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x261db0: 0x1440000f
    ctx->pc = 0x261DB0u;
    {
        const bool branch_taken_0x261db0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x261DB4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x261db0) {
            ctx->pc = 0x261DF0u;
            goto label_261df0;
        }
    }
    ctx->pc = 0x261DB8u;
    // 0x261db8: 0x8d04e7c0
    ctx->pc = 0x261db8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 8), 4294961088)));
    // 0x261dbc: 0x84850018
    ctx->pc = 0x261dbcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x261dc0: 0x2406010c
    ctx->pc = 0x261dc0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 268));
    // 0x261dc4: 0x26310001
    ctx->pc = 0x261dc4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_261dc8:
    // 0x261dc8: 0x225102a
    ctx->pc = 0x261dc8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 5)));
    // 0x261dcc: 0x10400012
    ctx->pc = 0x261DCCu;
    {
        const bool branch_taken_0x261dcc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x261DD0u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x261dcc) {
            ctx->pc = 0x261E18u;
            goto label_261e18;
        }
    }
    ctx->pc = 0x261DD4u;
    // 0x261dd4: 0x8c82001c
    ctx->pc = 0x261dd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x261dd8: 0x621821
    ctx->pc = 0x261dd8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x261ddc: 0x94620004
    ctx->pc = 0x261ddcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x261de0: 0x30420001
    ctx->pc = 0x261de0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x261de4: 0x5040fff8
    ctx->pc = 0x261DE4u;
    {
        const bool branch_taken_0x261de4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x261de4) {
            ctx->pc = 0x261DE8u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x261DC8u;
            goto label_261dc8;
        }
    }
    ctx->pc = 0x261DECu;
    // 0x261dec: 0x3c020034
    ctx->pc = 0x261decu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_261df0:
    // 0x261df0: 0x8c43e7c0
    ctx->pc = 0x261df0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961088)));
    // 0x261df4: 0x84620018
    ctx->pc = 0x261df4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x261df8: 0x222102a
    ctx->pc = 0x261df8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x261dfc: 0x10400006
    ctx->pc = 0x261DFCu;
    {
        const bool branch_taken_0x261dfc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x261E00u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x261dfc) {
            ctx->pc = 0x261E18u;
            goto label_261e18;
        }
    }
    ctx->pc = 0x261E04u;
    // 0x261e04: 0x2402010c
    ctx->pc = 0x261e04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 268));
    // 0x261e08: 0x2221018
    ctx->pc = 0x261e08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x261e0c: 0x8c63001c
    ctx->pc = 0x261e0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x261e10: 0x431021
    ctx->pc = 0x261e10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261e14: 0xac82e7cc
    ctx->pc = 0x261e14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961100), GPR_U32(ctx, 2));
label_261e18:
    // 0x261e18: 0x3c020034
    ctx->pc = 0x261e18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x261e1c: 0x24030009
    ctx->pc = 0x261e1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
    // 0x261e20: 0xac43e814
    ctx->pc = 0x261e20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961172), GPR_U32(ctx, 3));
    // 0x261e24: 0x3c020034
    ctx->pc = 0x261e24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x261e28: 0xac43e818
    ctx->pc = 0x261e28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961176), GPR_U32(ctx, 3));
label_261e2c:
    // 0x261e2c: 0xdfbf0090
    ctx->pc = 0x261e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x261e30: 0xdfbe0080
    ctx->pc = 0x261e30u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x261e34: 0xdfb70070
    ctx->pc = 0x261e34u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x261e38: 0xdfb60060
    ctx->pc = 0x261e38u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x261e3c: 0xdfb50050
    ctx->pc = 0x261e3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x261e40: 0xdfb40040
    ctx->pc = 0x261e40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x261e44: 0xdfb30030
    ctx->pc = 0x261e44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x261e48: 0xdfb20020
    ctx->pc = 0x261e48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261e4c: 0xdfb10010
    ctx->pc = 0x261e4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261e50: 0xdfb00000
    ctx->pc = 0x261e50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261e54: 0x3e00008
    ctx->pc = 0x261E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261E58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x261B40u: goto label_261b40;
            case 0x261BB8u: goto label_261bb8;
            case 0x261CACu: goto label_261cac;
            case 0x261CD0u: goto label_261cd0;
            case 0x261CF0u: goto label_261cf0;
            case 0x261CFCu: goto label_261cfc;
            case 0x261D14u: goto label_261d14;
            case 0x261D30u: goto label_261d30;
            case 0x261D38u: goto label_261d38;
            case 0x261DC8u: goto label_261dc8;
            case 0x261DF0u: goto label_261df0;
            case 0x261E18u: goto label_261e18;
            case 0x261E2Cu: goto label_261e2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x261E5Cu;
}
